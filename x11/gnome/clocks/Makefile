# $OpenBSD: Makefile,v 1.16 2013/10/14 20:09:06 ajacoutot Exp $

COMMENT=		clock application for GNOME

GNOME_PROJECT=		gnome-clocks
GNOME_VERSION=		3.10.1

# GPLv2
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB += ICE SM X11 Xcomposite Xcursor Xdamage Xext Xfixes Xi
WANTLIB += Xinerama Xrandr Xrender atk-1.0 atk-bridge-2.0 atspi
WANTLIB += c cairo cairo-gobject canberra dbus-1 expat ffi fontconfig
WANTLIB += freetype gdk-3 gdk_pixbuf-2.0 geocode-glib gio-2.0
WANTLIB += glib-2.0 gmodule-2.0 gnome-desktop-3 gobject-2.0 graphite2
WANTLIB += gthread-2.0 gtk-3 gweather-3 harfbuzz json-glib-1.0
WANTLIB += ltdl m notify ogg pango-1.0 pangocairo-1.0 pangoft2-1.0
WANTLIB += pcre pixman-1 png pthread pthread-stubs soup-2.4 sqlite3
WANTLIB += vorbis vorbisfile xcb xcb-render xcb-shm xkbfile xml2
WANTLIB += z

MODULES=		devel/dconf \
			devel/gettext \
			x11/gnome

LIB_DEPENDS=		audio/libcanberra \
			devel/libnotify \
			devel/libtool,-ltdl \
			geo/geocode-glib \
			x11/gnome/desktop \
			x11/gnome/libgweather

# geocoding.c
BUILD_DEPENDS +=	geo/geoclue2
RUN_DEPENDS +=		geo/geoclue2

MODGNOME_TOOLS=		vala yelp
MODGNOME_DESKTOP_FILE=	Yes
MODGNOME_ICON_CACHE=	Yes

pre-configure:
	perl -pi -e 's,.-Wno-unused-but-set-variable,,' \
		${WRKSRC}/Makefile.in

.include <bsd.port.mk>
