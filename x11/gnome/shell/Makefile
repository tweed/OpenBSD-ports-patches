# $OpenBSD: Makefile,v 1.66 2013/11/15 13:52:45 jasper Exp $

COMMENT=		next generation GNOME shell

GNOME_PROJECT=		gnome-shell
GNOME_VERSION=		3.10.2.1

# GPLv2+
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB += FLAC ICE SM X11 X11-xcb Xcomposite Xcursor Xdamage
WANTLIB += Xext Xfixes Xi Xinerama Xrandr Xrender Xtst asn1 atk-1.0
WANTLIB += atk-bridge-2.0 atspi c cairo cairo-gobject camel-1.2
WANTLIB += canberra canberra-gtk3 clutter-1.0 cogl cogl-pango
WANTLIB += com_err croco-0.6 crypto dbus-1 dbus-glib-1 ecal-1.2
WANTLIB += edataserver-1.2 execinfo expat ffi fontconfig freetype
WANTLIB += gck-1 gcr-base-3 gcrypt gdbm gdk-3 gdk_pixbuf-2.0 gio-2.0
WANTLIB += girepository-1.0 gjs glib-2.0 gmodule-2.0 gnome-menu-3
WANTLIB += gobject-2.0 gpg-error graphite2 gssapi gstbase-1.0
WANTLIB += gstreamer-1.0 gthread-2.0 gtk-3 harfbuzz heimbase
WANTLIB += ical icalss icalvcal json-c json-glib-1.0 krb5
WANTLIB += ltdl m mozjs-17.0 mutter ncurses ncursesw nspr4 nss3
WANTLIB += nssutil3 ogg p11-kit pango-1.0 pangocairo-1.0 pangoft2-1.0
WANTLIB += pcre pixman-1 plc4 plds4 png polkit-agent-1 polkit-gobject-1
WANTLIB += pthread pthread-stubs pulse pulse-mainloop-glib readline
WANTLIB += roken secret-1 smime3 sndfile softokn3 soup-2.4 sqlite3
WANTLIB += ssl3 startup-notification-1 stdc++ telepathy-glib vorbis
WANTLIB += vorbisenc vorbisfile wind xcb xcb-aux xcb-render xcb-shm
WANTLIB += xml2 z gnome-desktop-3 upower-glib xkbfile

MODULES=		devel/dconf \
			devel/gettext \
			lang/python \
			x11/gnome

MODGNOME_TOOLS=		gi

BUILD_DEPENDS +=	devel/gsettings-desktop-schemas
RUN_DEPENDS +=		devel/gsettings-desktop-schemas

# man pages
BUILD_DEPENDS +=	textproc/docbook-xsl

# gnome-keybindings.pc, sysutils/accountsservice (unlockDialog.js...)
BUILD_DEPENDS +=	x11/gnome/controlcenter
RUN_DEPENDS +=		x11/gnome/controlcenter

# onscreen keyboard
BUILD_DEPENDS +=	x11/gnome/caribou
RUN_DEPENDS +=		x11/gnome/caribou

LIB_DEPENDS=		audio/pulseaudio \
			databases/evolution-data-server \
			multimedia/gstreamer1/core \
			net/telepathy/telepathy-glib \
			sysutils/polkit \
			www/libcroco \
			x11/gnome/gcr \
			x11/gnome/gjs \
			x11/gnome/menus \
			x11/gnome/mutter>=3.10.2

# polkit(8) almost always needs to know the "active" session
RUN_DEPENDS +=		sysutils/consolekit

# gnome-shell-extension-tool, gnome-shell-perf-tool
RUN_DEPENDS +=		devel/py-gobject3

# Don't depend on evolution to lower down the amount of dependencies and
# because most users want to be able to choose their PIM. Evolution can
# be installed separately or as part of the "gnome-extra" meta-package.
#RUN_DEPENDS +=		mail/evolution

# dateMenu.js
RUN_DEPENDS +=		x11/gnome/clocks

# telepathyClient.js, userMenu.js (AccountManager)
RUN_DEPENDS +=		net/telepathy/telepathy-logger \
			net/telepathy/telepathy-mission-control

# yelp.desktop menu entry (from yelp: OnlyShowIn=GNOME;Unity;)
# prevents => The URI "help:gnome-help/index" does not point to a valid page.
RUN_DEPENDS +=		x11/gnome/user-docs

# panel icons (power, sound...)
RUN_DEPENDS +=		x11/gnome/icon-theme-symbolic

# add required introspection libs that are not in the dependency chain
RUN_DEPENDS +=		inputmethods/ibus \
			x11/gnome/gdm

MODGNOME_DESKTOP_FILE=	Yes

LIBTOOL_FLAGS= 		--tag=disable-static

CONFIGURE_ARGS=		--disable-static

AUTOCONF_VERSION=	2.69
AUTOMAKE_VERSION=	1.11
BUILD_DEPENDS +=	${MODGNU_AUTOMAKE_DEPENDS} \
			${MODGNU_AUTOCONF_DEPENDS} \
			devel/libtool \
			x11/gnome/common

pre-configure:
	cd ${WRKSRC} && env AUTOCONF_VERSION=${AUTOCONF_VERSION} \
		AUTOMAKE_VERSION=${AUTOMAKE_VERSION} aclocal -I m4
	cd ${WRKSRC} && env AUTOCONF_VERSION=${AUTOCONF_VERSION} \
		AUTOMAKE_VERSION=${AUTOMAKE_VERSION} autoconf
	cd ${WRKSRC} && env AUTOCONF_VERSION=${AUTOCONF_VERSION} \
		AUTOMAKE_VERSION=${AUTOMAKE_VERSION} autoheader
	cd ${WRKSRC} && env AUTOCONF_VERSION=${AUTOCONF_VERSION} \
		AUTOMAKE_VERSION=${AUTOMAKE_VERSION} automake

post-install:
	rm ${PREFIX}/lib/gnome-shell/*.la
	rm ${PREFIX}/lib/mozilla/plugins/*.la

.include <bsd.port.mk>
