# $OpenBSD: Makefile,v 1.106 2013/10/06 09:08:51 ajacoutot Exp $

# add to meta/gnome,-extra when un-BROKEN
BROKEN=		needs webkit2

SHARED_ONLY=	Yes

COMMENT=	GNOME web browser based on webkit

GNOME_PROJECT=	epiphany
GNOME_VERSION=	3.8.2
REVISION=	3

# NOTE: when M changes, increment M accordingly
M=		${GNOME_VERSION:C/^([0-9]+\.[0-9]+).*/\1/}
SUBST_VARS=	M

CATEGORIES=	www
USE_GROFF =	Yes

MAINTAINER=	Jasper Lievisse Adriaanse <jasper@openbsd.org>, \
		Antoine Jacoutot <ajacoutot@openbsd.org>

# GPLv2
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB += GL ICE SM X11 X11-xcb XRes Xau Xcomposite Xcursor Xdamage
WANTLIB += Xdmcp Xext Xfixes Xi Xinerama Xrandr Xrender Xt atk-1.0
WANTLIB += atk-bridge-2.0 atspi avahi-client avahi-common avahi-glib
WANTLIB += avahi-gobject c cairo cairo-gobject dbus-1 dbus-glib-1
WANTLIB += enchant execinfo expat ffi fontconfig freetype gailutil-3
WANTLIB += gck-1 gcr-3 gcr-base-3 gcrypt gdk-3 gdk_pixbuf-2.0
WANTLIB += geoclue gio-2.0 glib-2.0 gmodule-2.0 gnome-desktop-3
WANTLIB += gobject-2.0 gpg-error graphite2 gstapp-1.0 gstaudio-1.0
WANTLIB += gstbase-1.0 gstfft-1.0 gstpbutils-1.0 gstreamer-1.0
WANTLIB += gsttag-1.0 gstvideo-1.0 gthread-2.0 gtk-3 harfbuzz
WANTLIB += icui18n javascriptcoregtk-3.0 jpeg orc-0.4
WANTLIB += m notify p11-kit pango-1.0 pangocairo-1.0 pangoft2-1.0
WANTLIB += pcre pixman-1 png pthread pthread-stubs secret-1 soup-2.4
WANTLIB += sqlite3 startup-notification-1 stdc++ webkitgtk-3.0
WANTLIB += webp wnck-3 xcb xcb-aux xcb-render xcb-shm xkbfile
WANTLIB += xml2 xslt z

BUILD_DEPENDS=	devel/iso-codes \
		devel/gsettings-desktop-schemas

RUN_DEPENDS=	devel/iso-codes \
		devel/gsettings-desktop-schemas

LIB_DEPENDS=	textproc/libxslt \
		devel/libexecinfo \
		devel/libnotify \
		devel/libwnck3 \
		devel/startup-notification \
		net/avahi \
		www/webkit,gtk3>=2.0.0 \
		x11/gnome/desktop \
		x11/gnome/gcr

# webkit browsing
RUN_DEPENDS +=	multimedia/gstreamer1/plugins-libav

MODULES=	devel/dconf \
		devel/gettext \
		x11/gnome

LIBTOOL_FLAGS=	--tag=disable-static

MODGNOME_DESKTOP_FILE=	Yes

CONFIGURE_STYLE=gnu
CONFIGURE_ARGS=	--disable-static \
		--disable-nss \
		--with-distributor-name="OpenBSD ports"

MODGNOME_CPPFLAGS=	-I${X11BASE}/include

TEST_DEPENDS=		${BASE_PKGPATH}
TEST_IS_INTERACTIVE=	X11
PORTHOME=		/tmp

.include <bsd.port.mk>
