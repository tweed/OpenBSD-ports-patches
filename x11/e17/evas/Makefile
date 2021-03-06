# $OpenBSD: Makefile,v 1.37 2013/09/25 07:58:48 sthen Exp $

COMMENT =		canvas API for X

VERSION = 		1.7.6
DISTNAME =		evas-${VERSION}.1
EPOCH =			2
REVISION =		2

SHARED_LIBS +=	evas                 3.0      # 8.6

# BSD
PERMIT_PACKAGE_CDROM =	Yes

WANTLIB += GL X11 Xdamage Xext Xfixes Xrender Xxf86vm crypto drm
WANTLIB += eet eina expat ffi fontconfig freetype fribidi gif
WANTLIB += glib-2.0 gobject-2.0 graphite2 harfbuzz
WANTLIB += jpeg m pcre png pthread pthread-stubs ssl stdc++
WANTLIB += tiff xcb z

MODULES=		devel/gettext \
			x11/e17

MODE17_PURGE_LA =	lib/evas/modules

VMEM_WARNING =		Yes

LIB_DEPENDS =		x11/e17/eet>=1.7.6v2 \
			graphics/giflib \
			graphics/png \
			graphics/tiff \
			graphics/jpeg \
			devel/harfbuzz \
			devel/glib2 \
			devel/fribidi \
			devel/libffi

CONFIGURE_ARGS +=	--disable-doc \
			--enable-no-dither-mask \
			--enable-small-dither-mask \
			--enable-line-dither-mask \
			--disable-wayland-shm \
			--disable-wayland-egl

CONFIGURE_ENV +=	CXXFLAGS="${CFLAGS} -I${LOCALBASE}/include -I${X11BASE}/include" \
			CPPFLAGS="${CFLAGS} -I${LOCALBASE}/include -I${X11BASE}/include" \
			CFLAGS="${CFLAGS} -I${LOCALBASE}/include -I${X11BASE}/include" \
			LDFLAGS="${LDFLAGS} -L${LOCALBASE}/lib -L${X11BASE}/lib"

.include <bsd.port.mk>
