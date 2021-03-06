# $OpenBSD: Makefile,v 1.47 2013/11/14 15:05:26 jasper Exp $

SHARED_ONLY=		Yes

COMMENT=		home media solution that allows easy media sharing

GNOME_PROJECT=		rygel
GNOME_VERSION=		0.20.2

SHARED_LIBS +=  rygel-core-2.0         0.0      # .1.0
SHARED_LIBS +=  rygel-renderer-2.0     0.0      # .1.0
SHARED_LIBS +=  rygel-server-2.0       0.0      # .1.0
SHARED_LIBS +=  rygel-renderer-gst-2.0 0.0      # .1.0

TRACKER_VERSION=	0.16

CATEGORIES=		multimedia

# LGPLv2.1
PERMIT_PACKAGE_CDROM= 	Yes

WANTLIB += ICE SM X11 Xcomposite Xcursor Xdamage Xext Xfixes Xi
WANTLIB += Xinerama Xrandr Xrender atk-1.0 atk-bridge-2.0 atspi
WANTLIB += c cairo cairo-gobject dbus-1 expat ffi fontconfig freetype
WANTLIB += gdk-3 gdk_pixbuf-2.0 gee-0.8 gio-2.0 glib-2.0 gmodule-2.0
WANTLIB += gobject-2.0 graphite2 gssdp-1.0 gstapp-1.0 gstaudio-1.0
WANTLIB += gstbase-1.0 gstpbutils-1.0 gstreamer-1.0 gsttag-1.0
WANTLIB += gstvideo-1.0 gthread-2.0 gtk-3 gupnp-1.0 gupnp-av-1.0
WANTLIB += gupnp-dlna-2.0 gupnp-dlna-gst-2.0 harfbuzz icui18n
WANTLIB += icuuc kvm m orc-0.4 pango-1.0 pangocairo-1.0 pangoft2-1.0
WANTLIB += pcre pixman-1 png pthread pthread-stubs soup-2.4 sqlite3
WANTLIB += unistring uuid xcb xcb-render xcb-shm xml2 z icudata
WANTLIB += tracker-sparql-${TRACKER_VERSION}
WANTLIB += lib/tracker-${TRACKER_VERSION}/tracker-common
WANTLIB += lib/tracker-${TRACKER_VERSION}/tracker-data

MODULES=		devel/gettext \
			x11/gnome

LIB_DEPENDS=		converters/libunistring \
			devel/libgee \
			net/gupnp/av \
			net/gupnp/dlna \
			x11/gnome/tracker>=${TRACKER_VERSION}

MODGNOME_DESKTOP_FILE=	Yes
MODGNOME_ICON_CACHE=	Yes
MODGNOME_TOOLS=		vala

# XXX undefined reference to `memset'
USE_LIBTOOL=		gnu

LIBTOOL_FLAGS=		--tag=disable-static

CONFIGURE_ARGS+=	--disable-static

FAKE_FLAGS=		sysconfdir=${PREFIX}/share/examples/rygel/

post-install:
	rm ${PREFIX}/lib/rygel-2.0/{engines,plugins}/*.la

.include <bsd.port.mk>
