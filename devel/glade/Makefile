# $OpenBSD: Makefile,v 1.58 2013/10/08 10:58:25 ajacoutot Exp $

COMMENT=	user interface builder for the gtk+3 toolkit

GNOME_VERSION=	3.16.0
GNOME_PROJECT= 	glade

CATEGORIES=	devel

SHARED_LIBS +=  gladeui-2                 1.0 # 0.0

HOMEPAGE=	http://glade.gnome.org/

MAINTAINER=	Jasper Lievisse Adriaanse <jasper@openbsd.org>, \
		Antoine Jacoutot <ajacoutot@openbsd.org>

# GPLv2 - LGPLv2
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB += ICE SM X11 Xcomposite Xcursor Xdamage Xext Xfixes Xi
WANTLIB += Xinerama Xrandr Xrender atk-1.0 atk-bridge-2.0 atspi
WANTLIB += c cairo cairo-gobject dbus-1 expat ffi fontconfig freetype
WANTLIB += gdk-3 gdk_pixbuf-2.0 gio-2.0 glib-2.0 gmodule-2.0 gobject-2.0
WANTLIB += graphite2 gthread-2.0 gtk-3 harfbuzz m pango-1.0 pangocairo-1.0
WANTLIB += pangoft2-1.0 pcre pixman-1 png pthread pthread-stubs
WANTLIB += util xcb xcb-render xcb-shm xml2 z ${MODPY_WANTLIB}

MODULES=	devel/gettext \
		x11/gnome \
		lang/python

BUILD_DEPENDS=	devel/py-gobject3

# man pages
BUILD_DEPENDS += textproc/docbook-xsl

LIB_DEPENDS=	x11/gtk+3>=3.5.18 \
		devel/libffi

RUN_DEPENDS=	x11/gnome/devhelp \
		devel/py-gobject3

MODGNOME_DESKTOP_FILE= 	Yes
MODGNOME_ICON_CACHE=	Yes
MODGNOME_TOOLS= gi yelp

CONFIGURE_STYLE=	gnu
MODGNOME_CPPFLAGS=	-pthread
MODGNOME_LDFLAGS=	-pthread -lutil

post-install:
	rm ${PREFIX}/lib/glade/modules/*.{a,la}

.include <bsd.port.mk>
