# $OpenBSD: Makefile,v 1.43 2013/11/20 15:48:57 landry Exp $

COMMENT=	Xfce4 vte-based terminal

XFCE_VERSION=	0.6.2
XFCE_GOODIE=	xfce4-terminal
REVISION=	0

# GPLv2
PERMIT_PACKAGE_CDROM=	Yes

MODULES=	x11/xfce4
MODXFCE_DESKTOP_FILE=	Yes
MODXFCE_ICON_CACHE=	Yes
USE_GROFF =	Yes

LIB_DEPENDS=	x11/xfce4/libxfce4ui \
		devel/vte

WANTLIB=	X11 X11-xcb atk-1.0 c gdk-x11-2.0 gdk_pixbuf-2.0 gio-2.0 \
		ICE SM Xcomposite Xcursor Xdamage Xext Xfixes \
		Xi Xinerama Xrandr Xrender cairo expat fontconfig freetype \
		gmodule-2.0 gthread-2.0 m ncurses pangocairo-1.0 \
		pangoft2-1.0 pcre pixman-1 png pthread pthread-stubs \
		xcb xcb-render xcb-shm z xcb-aux vte \
		glib-2.0 gobject-2.0 gtk-x11-2.0 pango-1.0 xfce4util ffi graphite2 \
		harfbuzz startup-notification-1 xfce4ui-1

.include <bsd.port.mk>
