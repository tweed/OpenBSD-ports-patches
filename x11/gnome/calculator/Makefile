# $OpenBSD: Makefile,v 1.2 2013/04/14 19:35:52 jasper Exp $

COMMENT=		GNOME desktop calculator

GNOME_PROJECT=		gnome-calculator
GNOME_VERSION=		3.8.1

CATEGORIES=		math

HOMEPAGE=		https://live.gnome.org/Calculator

# GPLv2
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB += atk-1.0 c cairo cairo-gobject fontconfig freetype gdk-3
WANTLIB += gdk_pixbuf-2.0 gio-2.0 glib-2.0 gmodule-2.0 gobject-2.0
WANTLIB += gtk-3 m pango-1.0 pangocairo-1.0 pangoft2-1.0 pthread
WANTLIB += xml2 z

MODULES=		devel/gettext \
			x11/gnome \
			devel/dconf

LIB_DEPENDS+=		x11/gtk+3

# needed to download IMF/ECB rates (Financial mode)
RUN_DEPENDS=		x11/gnome/gvfs

MODGNOME_TOOLS= 	vala yelp
MODGNOME_DESKTOP_FILE=	Yes

AUTOCONF_VERSION =	2.68
CONFIGURE_STYLE=	autoconf no-autoheader

.include <bsd.port.mk>