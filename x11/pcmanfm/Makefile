# $OpenBSD: Makefile,v 1.29 2013/07/01 05:12:08 ajacoutot Exp $

COMMENT=	fast and lightweight file manager

DISTNAME=	pcmanfm-1.1.0

CATEGORIES=	x11

HOMEPAGE=	http://pcmanfm.sourceforge.net/

# GPLv2
PERMIT_PACKAGE_CDROM=	Yes

MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=pcmanfm/}

WANTLIB += X11 Xcomposite Xcursor Xdamage Xext Xfixes Xi Xinerama
WANTLIB += Xrandr Xrender atk-1.0 c cairo fm fm-gtk fontconfig
WANTLIB += freetype gdk-x11-2.0 gdk_pixbuf-2.0 gio-2.0 glib-2.0
WANTLIB += gobject-2.0 gthread-2.0 gtk-x11-2.0 m pango-1.0 pangocairo-1.0
WANTLIB += pangoft2-1.0 pthread z

LIB_DEPENDS=	x11/libfm

RUN_DEPENDS=	devel/desktop-file-utils

MODULES=	devel/gettext \
		textproc/intltool

CONFIGURE_STYLE= gnu

FAKE_FLAGS=     sysconfdir=${PREFIX}/share/examples/pcmanfm

.include <bsd.port.mk>
