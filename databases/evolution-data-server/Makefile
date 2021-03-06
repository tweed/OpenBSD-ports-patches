# $OpenBSD: Makefile,v 1.162 2013/11/10 16:09:36 ajacoutot Exp $

# XXX add libphonenumber support when a cpp release is out

SHARED_ONLY=		Yes

COMMENT=		unified backend for PIM programs

GNOME_PROJECT=		evolution-data-server
GNOME_VERSION=		3.10.2

CATEGORIES=		databases productivity

SHARED_LIBS +=  camel-1.2            36.0     # 45.0
SHARED_LIBS +=  edataserver-1.2      18.0     # 18.0
SHARED_LIBS +=  ebackend-1.2         5.0      # 7.0
SHARED_LIBS +=  ebook-contacts-1.2   1.0      # 0.0
SHARED_LIBS +=  edata-book-1.2       16.0     # 20.0
SHARED_LIBS +=  ebook-1.2            19.0     # 17.1
SHARED_LIBS +=  ecal-1.2             15.0     # 16.0
SHARED_LIBS +=  edata-cal-1.2        18.0     # 23.0

MAINTAINER=	Jasper Lievisse Adriaanse <jasper@openbsd.org>, \
		Antoine Jacoutot <ajacoutot@openbsd.org>

# LGPLv2
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB += ICE SM X11 Xcomposite Xcursor Xdamage Xext Xfixes Xi
WANTLIB += Xinerama Xrandr Xrender asn1 atk-1.0 atk-bridge-2.0
WANTLIB += atspi c cairo cairo-gobject com_err crypto curl db
WANTLIB += dbus-1 expat ffi fontconfig freetype gck-1 gcr-base-3
WANTLIB += gcrypt gdata gdk-3 gdk_pixbuf-2.0 gio-2.0 glib-2.0
WANTLIB += gmodule-2.0 goa-1.0 gobject-2.0 gpg-error graphite2
WANTLIB += gssapi gthread-2.0 gtk-3 gweather-3 harfbuzz ical icalss
WANTLIB += icalvcal idn krb5 lber-2.4 ldap-2.4
WANTLIB += m nspr4 nss3 nssutil3 oauth p11-kit pango-1.0 pangocairo-1.0
WANTLIB += pangoft2-1.0 pcre pixman-1 plc4 plds4 png pthread pthread-stubs
WANTLIB += sasl2 secret-1 smime3 softokn3 soup-2.4 soup-gnome-2.4
WANTLIB += sqlite3 ssl ssl3 xcb xcb-render xcb-shm xml2 z
WANTLIB += heimbase roken wind

MODULES=		devel/gettext \
			devel/dconf \
			lang/python \
			x11/gnome

BUILD_DEPENDS=		devel/gperf

LIB_DEPENDS= 		databases/db/v4 \
			databases/openldap \
			devel/libgdata \
			net/liboauth \
			textproc/libical \
			x11/gnome/gcr \
			x11/gnome/libgweather \
			x11/gnome/online-accounts

MODPY_RUNDEP=		No
MODGNOME_TOOLS= 	gi vala
MODGNOME_CPPFLAGS=	-I${LOCALBASE}/include/db4 $$(krb5-config --cflags)

CONFIGURE_STYLE= 	gnu
CONFIGURE_ARGS=		--with-krb5 \
			--with-libdb=${LOCALBASE} \
			--with-openldap=${LOCALBASE}

# needs signond, libsignon-glib -- Ubuntu/Meego
CONFIGURE_ARGS +=	--disable-uoa

pre-configure:
	perl -pi -e 's,/usr/sbin/imapd,${LOCALBASE}/libexec/imapd,g' \
		${WRKSRC}/camel/camel-imapx-settings.c \
		${WRKSRC}/docs/reference/camel/html/CamelIMAPXSettings.html

post-install:
	rm ${PREFIX}/lib/evolution-data-server/*/*.{a,la}

.include <bsd.port.mk>
