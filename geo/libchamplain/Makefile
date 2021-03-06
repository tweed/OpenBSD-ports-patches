# $OpenBSD: Makefile,v 1.17 2013/10/26 08:02:57 ajacoutot Exp $

SHARED_ONLY=	Yes

COMMENT=	library to provide a GTK+ widget to display maps

GNOME_PROJECT=	libchamplain
GNOME_VERSION=	0.12.5
API_VERSION=	0.12
REVISION=	1

SHARED_LIBS +=  champlain-${API_VERSION}       1.0      # 3.2
SHARED_LIBS +=  champlain-gtk-${API_VERSION}   1.0      # 3.2

SUBST_VARS+=	API_VERSION

CATEGORIES=	geo devel

MAINTAINER=	Jasper Lievisse Adriaanse <jasper@openbsd.org>, \
		Antoine Jacoutot <ajacoutot@openbsd.org>

# LGPLv2.1
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB += ICE SM X11 Xcomposite Xcursor Xdamage Xext Xfixes Xi
WANTLIB += Xinerama Xrandr Xrender atk-1.0 atk-bridge-2.0 atspi
WANTLIB += cairo cairo-gobject clutter-1.0 clutter-gtk-1.0 cogl
WANTLIB += cogl-pango dbus-1 expat ffi fontconfig freetype gdk-3
WANTLIB += gdk_pixbuf-2.0 gio-2.0 glib-2.0 gmodule-2.0 gobject-2.0
WANTLIB += graphite2 gthread-2.0 gtk-3 harfbuzz json-glib-1.0
WANTLIB += m memphis-0.2 pango-1.0 pangocairo-1.0 pangoft2-1.0
WANTLIB += pcre pixman-1 png pthread pthread-stubs soup-2.4 soup-gnome-2.4
WANTLIB += sqlite3 xcb xcb-render xcb-shm xml2 z

MODULES=		devel/gettext \
			x11/gnome

LIBTOOL_FLAGS=		--tag=disable-static

LIB_DEPENDS=		devel/libsoup \
			geo/memphis \
			graphics/clutter/clutter-gtk>=1.2.0

MODGNOME_TOOLS=		gi vala

CONFIGURE_STYLE=	gnu

.include <bsd.port.mk>
