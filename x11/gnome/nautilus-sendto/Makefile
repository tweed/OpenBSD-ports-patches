# $OpenBSD: Makefile,v 1.54 2013/09/28 08:51:25 ajacoutot Exp $

SHARED_ONLY=	Yes

COMMENT=	applications integration into Nautilus

GNOME_PROJECT=	nautilus-sendto
GNOME_VERSION=	3.8.1
REVISION=	0
CATEGORIES=	mail


# GPLv2
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB += c ffi gio-2.0 glib-2.0 gmodule-2.0 gobject-2.0 pcre
WANTLIB += pthread z

MODULES=	devel/gettext \
		x11/gnome

MODGNOME_TOOLS=	gi

LIB_DEPENDS=	devel/glib2

FAKE_FLAGS=	schemadir=${PREFIX}/share/schemas/nautilus-sendto

.include <bsd.port.mk>
