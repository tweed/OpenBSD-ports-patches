# $OpenBSD: Makefile,v 1.41 2013/03/21 08:45:16 ajacoutot Exp $

COMMENT=	SDL TrueType fonts library

V=		2.0.11
DISTNAME=	SDL_ttf-${V}
PKGNAME=	sdl-ttf-${V}
CATEGORIES=	devel graphics fonts
MASTER_SITES=	http://www.libsdl.org/projects/SDL_ttf/release/

SHARED_LIBS=	SDL_ttf	8.1

HOMEPAGE=	http://www.libsdl.org/projects/SDL_ttf/

# Zlib
PERMIT_PACKAGE_CDROM=   Yes

WANTLIB=	SDL freetype m sndio usbhid z

MODULES=	converters/libiconv
LIB_DEPENDS=	devel/sdl

SEPARATE_BUILD=	Yes
CONFIGURE_STYLE= gnu
CONFIGURE_ARGS=	${CONFIGURE_SHARED}
CONFIGURE_ENV=	CPPFLAGS="-I${LOCALBASE}/include" \
		LDFLAGS="-L${LOCALBASE}/lib"

.include <bsd.port.mk>
