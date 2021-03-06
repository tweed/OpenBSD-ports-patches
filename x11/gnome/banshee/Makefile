# $OpenBSD: Makefile,v 1.17 2013/10/15 09:43:53 ajacoutot Exp $

SHARED_ONLY=	Yes

COMMENT=	music management and playback application for GNOME

GNOME_VERSION=	2.6.1
GNOME_PROJECT=	banshee
REVISION=	4

CATEGORIES=	audio multimedia

HOMEPAGE=	http://banshee.fm/

# MIT/X11
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB += GL ICE SM X11 Xcomposite Xcursor Xdamage Xext Xfixes
WANTLIB += Xi Xinerama Xrandr Xrender Xt Xxf86vm atk-1.0 cairo
WANTLIB += dbus-1 dbus-glib-1 enchant expat ffi fontconfig freetype
WANTLIB += gailutil gcrypt gdk-x11-2.0 gdk_pixbuf-2.0 geoclue
WANTLIB += gio-2.0 glib-2.0 gmodule-2.0 gobject-2.0 gpg-error
WANTLIB += graphite2 gstapp-1.0 gstaudio-1.0 gstbase-0.10 gstbase-1.0
WANTLIB += gstcdda-0.10 gstcontroller-0.10 gstdataprotocol-0.10
WANTLIB += gstfft-0.10 gstfft-1.0 gstinterfaces-0.10 gstpbutils-0.10
WANTLIB += gstpbutils-1.0 gstreamer-0.10 gstreamer-1.0 gsttag-0.10
WANTLIB += gsttag-1.0 gstvideo-0.10 gstvideo-1.0 gthread-2.0 gtk-x11-2.0
WANTLIB += harfbuzz icui18n javascriptcoregtk-1.0
WANTLIB += jpeg m orc-0.4 pango-1.0 pangocairo-1.0 pangoft2-1.0
WANTLIB += pcre pixman-1 png pthread pthread-stubs secret-1 soup-2.4
WANTLIB += soup-gnome-2.4 sqlite3 stdc++ webkitgtk-1.0 webp xcb
WANTLIB += xcb-render xcb-shm xml2 xslt z

MODULES=	x11/gnome \
		lang/mono \
		devel/gettext

COMMON_DEPENDS=	devel/mono-notify \
		audio/mono-taglib \
		devel/dbus-sharp-glib \
		devel/mono-addins \
		devel/mono-gdata \
		net/mono-zeroconf \
		shells/bash \

BUILD_DEPENDS=	${COMMON_DEPENDS} \
		devel/libmtp

RUN_DEPENDS=	${COMMON_DEPENDS}

RUN_DEPENDS +=	multimedia/gstreamer-0.10/plugins-good #libgstgconfelements
RUN_DEPENDS +=	multimedia/gstreamer-0.10/plugins-bad #bpmdetect (soundtouch)
RUN_DEPENDS +=	multimedia/gstreamer-0.10/plugins-ugly #mp3 support

LIB_DEPENDS=	www/webkit \
		multimedia/gstreamer-0.10/plugins-base

MODGNOME_DESKTOP_FILE=	Yes
MODGNOME_ICON_CACHE=	Yes
MODGNOME_MIME_FILE=	Yes
MODGNOME_TOOLS=		yelp

LIBTOOL_FLAGS=	--tag=disable-static

CONFIGURE_ARGS=	--disable-static \
		--with-vendor-build-id="OpenBSD Ports" \
		--disable-gio-hardware \
		--disable-appledevice \
		--disable-karma \
		--disable-shave

# XXX lang/boo is marked as BROKEN
CONFIGURE_ARGS += --disable-boo

# requires gio-sharp
CONFIGURE_ARGS += --disable-gio

DLLMAP_FILES=	src/Hyena/Hyena/Hyena.dll.config \
		src/Hyena/Hyena.Gui/Hyena.Gui.dll.config \
		src/Libraries/Mtp/Mtp.dll.config.in \
		src/Libraries/Mtp/Mtp.dll.config \
		src/Core/Banshee.Core/Banshee.Core.dll.config \
		src/Core/Banshee.Services/Banshee.Services.dll.config \
		src/Core/Banshee.ThickClient/Banshee.ThickClient.dll.config \
		src/Core/Banshee.Widgets/Banshee.Widgets.dll.config \
		src/Extensions/Banshee.NotificationArea/Banshee.NotificationArea.dll.config \
		src/Extensions/Banshee.MeeGo/Banshee.MeeGo.dll.config \
		src/Backends/Banshee.GStreamer/Banshee.GStreamer.dll.config \
		src/Backends/Banshee.Unix/Banshee.Unix.dll.config

# XXX the theme-icons target uses INSTALL_DATA during build which will
# fail when running as a non priviledge user (install -o/-g)
.if !target(do-install)
MAKE_FLAGS +=	INSTALL_DATA='/usr/bin/install -c -m 444'
.endif

post-install:
	rm ${PREFIX}/lib/banshee/Backends/*.la
	rm ${PREFIX}/lib/banshee/*.la

.include <bsd.port.mk>
