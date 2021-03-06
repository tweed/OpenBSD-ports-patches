# $OpenBSD: Makefile.inc,v 1.6 2013/09/05 03:26:29 bentley Exp $

ONLY_FOR_ARCHS ?=	amd64 i386
SHARED_ONLY = 		Yes
VERSION ?= 		2.0
DISTNAME ?=		mupen64plus-${MUPEN64PLUS_MOD}-src-${VERSION}
PKGNAME ?= 		mupen64plus-${MUPEN64PLUS_MOD}-${VERSION}
HOMEPAGE ?=		https://code.google.com/p/mupen64plus/
CATEGORIES ?=		emulators games
MASTER_SITES ?=		https://bitbucket.org/richard42/mupen64plus-${MUPEN64PLUS_MOD}/downloads/
MAINTAINER ?=		Anthony J. Bentley <anthony@cathet.us>

CONFIGURE_STYLE ?=	none
USE_GMAKE ?=		Yes
MAKE_FLAGS += 		CC=${CC} \
			CXX=${CXX} \
			V=1 \
			OPTFLAGS=

FAKE_FLAGS ?=		PREFIX=${PREFIX} LDCONFIG=true

.if ${MUPEN64PLUS_MOD} != "core"
MAKE_FLAGS += 		APIDIR=${LOCALBASE}/include/mupen64plus
BUILD_DEPENDS +=	emulators/mupen64plus/core>=2.0
.endif

WRKBUILD ?=		${WRKDIST}/projects/unix

NO_TEST ?=		Yes
