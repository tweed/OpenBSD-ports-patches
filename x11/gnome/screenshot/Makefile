# $OpenBSD: Makefile,v 1.13 2013/11/19 13:27:45 jasper Exp $

COMMENT=		screenshot application for GNOME

GNOME_PROJECT=		gnome-screenshot
GNOME_VERSION=		3.10.1

# GPLv2
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB += X11 Xext atk-1.0 c cairo cairo-gobject canberra canberra-gtk3
WANTLIB += fontconfig freetype gdk-3 gdk_pixbuf-2.0 gio-2.0 glib-2.0
WANTLIB += gobject-2.0 gtk-3 m pango-1.0 pangocairo-1.0 pangoft2-1.0
WANTLIB += pthread z

LIB_DEPENDS=		audio/libcanberra,-gtk3

MODULES=		devel/dconf \
			devel/gettext \
			x11/gnome

MODGNOME_DESKTOP_FILE=	Yes

.include <bsd.port.mk>
