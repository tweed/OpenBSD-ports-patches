# $OpenBSD: Makefile,v 1.16 2013/05/31 15:35:23 ajacoutot Exp $

COMMENT=	Xfce4 web search panel plugin

XFCE_VERSION=	0.4.5
XFCE_PLUGIN=	smartbookmark
REVISION=	0

# GPLv2
PERMIT_PACKAGE_CDROM=	Yes

MODULES=	x11/xfce4

WANTLIB += GL ICE SM X11 X11-xcb Xau Xcomposite Xcursor Xdamage
WANTLIB += Xdmcp Xext Xfixes Xi Xinerama Xrandr Xrender Xxf86vm
WANTLIB += atk-1.0 cairo drm expat ffi fontconfig freetype gdk-x11-2.0
WANTLIB += gdk_pixbuf-2.0 gio-2.0 glib-2.0 gmodule-2.0 gobject-2.0
WANTLIB += gthread-2.0 gtk-x11-2.0 m pango-1.0 pangocairo-1.0
WANTLIB += pangoft2-1.0 pcre pixman-1 png pthread-stubs startup-notification-1
WANTLIB += xcb xcb-aux xcb-render xcb-shm xfce4util xfce4ui-1 z stdc++
WANTLIB += harfbuzz pthread

.include <bsd.port.mk>
