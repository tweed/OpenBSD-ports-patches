# $OpenBSD: Makefile,v 1.11 2013/03/11 11:07:38 espie Exp $

COMMENT=	Cannon Smash 3D table tennis

DISTNAME=	csmash-0.6.6
REVISION=	5
CATEGORIES=	games
HOMEPAGE=	http://cannonsmash.sourceforge.net/

MAINTAINER=	Jason Dixon <jdixon@openbsd.org>

# GPLv2
PERMIT_PACKAGE_CDROM=	Yes

MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=cannonsmash/}

USE_GMAKE=	Yes

MODULES=	devel/gettext

LIB_DEPENDS=	devel/sdl-image \
		devel/sdl-mixer \
		x11/gtk+2

WANTLIB+=	GL GLU ICE Xcomposite Xcursor Xdamage Xfixes \
		Xi Xinerama Xmu Xrandr Xrender Xt atk-1.0 c cairo expat \
		fontconfig freetype gio-2.0 glib-2.0 \
		gobject-2.0 pango-1.0 pangocairo-1.0 pangoft2-1.0 pixman-1 \
		png pthread pthread-stubs stdc++ xcb z X11 Xext m SDL \
		gdk_pixbuf-2.0 SDL_image SDL_mixer gdk-x11-2.0 gtk-x11-2.0 \
		xcb-render xcb-shm

CONFIGURE_STYLE= gnu
CONFIGURE_ENV=	CPPFLAGS="-I${LOCALBASE}/include -I${LOCALBASE}/include/SDL" \
		LDFLAGS="-L${LOCALBASE}/lib"

pre-configure:
	@find ${WRKDIST} -name Makefile.in -exec \
		perl -pi -e 's,/games/,/,g' {} \;

.include <bsd.port.mk>
