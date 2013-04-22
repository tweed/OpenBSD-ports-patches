# $OpenBSD: Makefile,v 1.3 2013/04/17 13:20:20 ajacoutot Exp $

SHARED_ONLY =		Yes

COMMENT =		lightweight and simple DVD slide show maker
DISTNAME =		imagination-3.0
REVISION =		1

CATEGORIES =		multimedia

HOMEPAGE =		http://imagination.sf.net

MAINTAINER =		Giovanni Bechis <giovanni@openbsd.org>

# GPLv3
PERMIT_PACKAGE_CDROM =	Yes

WANTLIB += FLAC X11 Xcomposite Xcursor Xdamage Xext Xfixes Xi
WANTLIB += Xinerama Xrandr Xrender atk-1.0 c cairo expat ffi fontconfig
WANTLIB += freetype gdk-x11-2.0 gdk_pixbuf-2.0 gio-2.0 glib-2.0
WANTLIB += gmodule-2.0 gobject-2.0 graphite2 gsm gthread-2.0 gtk-x11-2.0
WANTLIB += harfbuzz icudata icule icuuc id3tag m mad magic mp3lame
WANTLIB += ogg opencore-amrnb opencore-amrwb pango-1.0 pangocairo-1.0
WANTLIB += pangoft2-1.0 pcre pixman-1 png pthread pthread-stubs
WANTLIB += sndfile sndio sox twolame vorbis vorbisenc vorbisfile
WANTLIB += wavpack xcb xcb-render xcb-shm z

MASTER_SITES =		${MASTER_SITE_SOURCEFORGE:=imagination/}

AUTOCONF_VERSION =	2.67
CONFIGURE_STYLE =	autoconf no-autoheader
CONFIGURE_ARGS =	--localedir=${PREFIX}/share/locale
MODULES =		devel/gettext
USE_LIBTOOL =		Yes
LIBTOOL_FLAGS =		--tag=disable-static
USE_GMAKE =		Yes

LIB_DEPENDS =	x11/gtk+2

BUILD_DEPENDS =	audio/sox

RUN_DEPENDS =	audio/sox \
		devel/desktop-file-utils \
		x11/gtk+2,-guic

post-install:
	@rm -f ${PREFIX}/lib/imagination/*.la

.include <bsd.port.mk>