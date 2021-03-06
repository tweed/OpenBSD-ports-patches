# $OpenBSD: Makefile,v 1.26 2013/10/28 17:32:31 bcallah Exp $

COMMENT =	extended client for The Mana World

V =		1.3.10.27
DISTNAME =	manaplus-${V}.2
EXTRACT_SUFX =	.tar.xz

CATEGORIES =	games x11

HOMEPAGE =	http://manaplus.org/

MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv2
PERMIT_PACKAGE_CDROM =	Yes

WANTLIB += GL SDL SDL_gfx SDL_image SDL_mixer SDL_net SDL_ttf
WANTLIB += X11 c crypto curl guichan guichan_sdl idn m physfs
WANTLIB += png pthread ssl stdc++ xml2 z

MASTER_SITES =	http://download.evolonline.org/manaplus/download/${V}/

MODULES =	devel/gettext
RUN_DEPENDS=	devel/desktop-file-utils
LIB_DEPENDS =	devel/sdl-image \
		devel/sdl-gfx \
		devel/sdl-mixer \
		devel/sdl-net \
		devel/sdl-ttf \
		devel/guichan \
		devel/physfs \
		net/curl \
		textproc/libxml

CONFIGURE_STYLE =	gnu
CONFIGURE_ARGS =	--without-librt --without-internalguichan

BUILD_DEPENDS=		${MODGNU_AUTOCONF_DEPENDS} \
			${MODGNU_AUTOMAKE_DEPENDS}

FAKE_FLAGS +=		desktopdir=${PREFIX}/share/applications/

AUTOCONF_VERSION =	2.69
AUTOMAKE_VERSION =	1.9

WRKDIST =	${WRKDIR}/manaplus-${V}

pre-configure:
	cd ${WRKSRC} && \
		${SETENV} AUTOMAKE_VERSION=${AUTOMAKE_VERSION} \
			AUTOCONF_VERSION=${AUTOCONF_VERSION} autoreconf -i

.include <bsd.port.mk>
