# $OpenBSD: Makefile,v 1.56 2013/09/28 08:50:43 ajacoutot Exp $

COMMENT=	accessibility toolkit used by gtk+

GNOME_PROJECT=	atk
GNOME_VERSION=	2.10.0
REVISION=	0

SHARED_LIBS +=  atk-1.0              21009.1  # 21009.1

CATEGORIES=	devel

MAINTAINER=	Jasper Lievisse Adriaanse <jasper@openbsd.org>, \
		Antoine Jacoutot <ajacoutot@openbsd.org>

# LGPLv2
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB += ffi glib-2.0 gobject-2.0 pcre pthread

MODULES=	devel/gettext \
		x11/gnome

MODGNOME_TOOLS= gi

LIB_DEPENDS=	devel/glib2>=2.38.0

CONFIGURE_STYLE=gnu

.include <bsd.port.mk>
