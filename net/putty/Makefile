# $OpenBSD: Makefile,v 1.16 2013/08/07 11:47:51 sthen Exp $

COMMENT-main=	SSH and telnet client
COMMENT-gui=	PuTTY GUI clients

DISTNAME=	putty-0.63
PKGNAME-main=	${DISTNAME}
PKGNAME-gui=	${DISTNAME:S/putty/putty-gui/}
CATEGORIES=	net security

HOMEPAGE=	http://www.chiark.greenend.org.uk/~sgtatham/putty/
MASTER_SITES=	http://the.earth.li/~sgtatham/putty/latest/ \
		ftp://ftp.chiark.greenend.org.uk/users/sgtatham/putty-latest/

# BSD
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB-main = c pthread
WANTLIB-gui += X11 Xcomposite Xcursor Xdamage Xext Xfixes Xi Xinerama
WANTLIB-gui += Xrandr Xrender atk-1.0 c cairo fontconfig freetype
WANTLIB-gui += gdk-x11-2.0 gdk_pixbuf-2.0 gio-2.0 glib-2.0 gobject-2.0
WANTLIB-gui += gtk-x11-2.0 m pango-1.0 pangocairo-1.0 pangoft2-1.0
WANTLIB-gui += pthread z ${MODGETTEXT_WANTLIB}

CONFIGURE_STYLE=	gnu
CONFIGURE_ENV=		CPPFLAGS="-I.././" \
			LDFLAGS="-L${X11BASE}/lib"
WRKSRC=			${WRKDIST}/unix

MULTI_PACKAGES=		-main -gui

MODULES=		devel/gettext

LIB_DEPENDS-main=	# empty
LIB_DEPENDS-gui=	x11/gtk+2

NO_TEST=		Yes

.include <bsd.port.mk>
