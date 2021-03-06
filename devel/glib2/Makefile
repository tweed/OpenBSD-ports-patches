# $OpenBSD: Makefile,v 1.215 2013/11/12 16:17:58 ajacoutot Exp $

COMMENT=		general-purpose utility library

GNOME_PROJECT=		glib
GNOME_VERSION=		2.38.2
PKGNAME=		${DISTNAME:S/glib/glib2/}

CATEGORIES=		devel

HOMEPAGE=		http://www.gtk.org/

MAINTAINER=		Antoine Jacoutot <ajacoutot@openbsd.org>

SHARED_LIBS +=  glib-2.0             3800.0   # 3800.2
SHARED_LIBS +=  gmodule-2.0          3800.0   # 3800.2
SHARED_LIBS +=  gthread-2.0          3800.0   # 3800.2
SHARED_LIBS +=  gobject-2.0          3800.0   # 3800.2
SHARED_LIBS +=  gio-2.0              3800.0   # 3800.2

# LGPLv2
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB += c elf ffi pcre pthread z

MODULES=		devel/gettext \
			lang/python \
			x11/gnome

# man pages
BUILD_DEPENDS +=	textproc/docbook-xsl

LIB_DEPENDS=		devel/pcre \
			devel/libelf \
			devel/libffi

# need X11 because DBus is used in the GDBus test cases;
# also requires bumped limits (stack >= 24576)
BUILD_DEPENDS +=	x11/dbus
TEST_IS_INTERACTIVE=	x11
TEST_DEPENDS=		devel/desktop-file-utils \
			x11/dbus

CONFIGURE_STYLE=	gnu
CONFIGURE_ARGS=		--enable-static \
			--with-pcre=system \
			--disable-fam

.include <bsd.port.arch.mk>
.if ${PROPERTIES:Mgcc3}
PATCH_LIST=	patch-* gcc3-*
.endif

pre-configure:
	perl -pi -e "s,/usr/local,${LOCALBASE},g;" \
		-e "s,/usr/share/locale,${LOCALBASE}/share/locale,g;" \
		-e "s,/usr/share/applications,${LOCALBASE}/share/applications,g;" \
		-e "s,/etc/xdg,${SYSCONFDIR}/xdg,g" \
		${WRKSRC}/glib/gutils.c ${WRKSRC}/gio/xdgmime/xdgmime.c \
		${WRKSRC}/gio/tests/desktop-app-info.c \
		${WRKSRC}/docs/reference/gio/html/glib-compile-schemas.html \
		${WRKSRC}/docs/reference/gio/glib-compile-schemas.1
	perl -pi -e "s,/var/lib/dbus,/var/db/dbus,g" \
		${WRKSRC}/gio/gdbusconnection.c \
		${WRKSRC}/gio/gdbusprivate.c \
		${WRKSRC}/po/*.po

.include <bsd.port.mk>
