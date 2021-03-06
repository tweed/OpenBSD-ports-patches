# $OpenBSD: Makefile,v 1.4 2013/05/31 15:34:44 ajacoutot Exp $

COMMENT =	simple, fast GTK-based text editor
DISTNAME =	tpad-4.7.6
REVISION =	2
CATEGORIES =	editors x11

HOMEPAGE =	https://launchpad.net/tpad-project/

MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv3+
PERMIT_PACKAGE_CDROM =		Yes

MASTER_SITES =	https://launchpad.net/tpad-project/3.0/3.0.0/+download/

WANTLIB += ICE SM X11 Xcomposite Xcursor Xdamage Xext Xfixes Xi
WANTLIB += Xinerama Xrandr Xrender atk-1.0 atk-bridge-2.0 atspi c
WANTLIB += cairo cairo-gobject config dbus-1 enchant expat ffi
WANTLIB += fontconfig freetype gdk-3 gdk_pixbuf-2.0 gio-2.0 glib-2.0
WANTLIB += gmodule-2.0 gobject-2.0 graphite2 gthread-2.0 gtk-3
WANTLIB += gtksourceview-3.0 gtkspell3-3 gucharmap_2_90 harfbuzz
WANTLIB += m pango-1.0 pangocairo-1.0 pangoft2-1.0
WANTLIB += pcre pixman-1 png pthread pthread-stubs stdc++ xcb
WANTLIB += xcb-render xcb-shm xml2 z

MODULES =	devel/gettext \
		textproc/intltool

LIB_DEPENDS =	devel/libconfig \
		textproc/gtkspell3 \
		x11/gnome/gucharmap \
		x11/gtksourceview3

RUN_DEPENDS =	devel/desktop-file-utils

CONFIGURE_STYLE =	gnu
USE_GMAKE =		Yes
FAKE_FLAGS =		itlocaledir=${PREFIX}/share/locale \
			tpaddocdir=
TEST_FLAGS =		XGETTEXT=${LOCALBASE}/bin/xgettext

post-patch:
	perl -pi -e "s,Linux User's,OpenBSD Reference,g" ${WRKSRC}/man/tpad.1

.include <bsd.port.mk>
