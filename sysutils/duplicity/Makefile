# $OpenBSD: Makefile,v 1.25 2013/10/29 10:28:57 stsp Exp $

COMMENT =	encrypted backup using rsync algorithm

MODPY_EGG_VERSION = 0.6.21
DISTNAME =	duplicity-${MODPY_EGG_VERSION}
REVISION = 	0

CATEGORIES =	sysutils

HOMEPAGE =	http://www.nongnu.org/duplicity/
MASTER_SITES =	${MASTER_SITE_SAVANNAH:=duplicity/}

MAINTAINER =	Jim Razmus II <jim@openbsd.org>

# GPLv2
PERMIT_PACKAGE_CDROM =	Yes

MODULES =	lang/python

WANTLIB +=	pthread rsync ${MODPY_WANTLIB}

LIB_DEPENDS +=	net/librsync \
		${MODPY_LIB_DEPENDS}

RUN_DEPENDS +=	net/py-boto \
		net/ncftp \
		security/py-gnupg \
		security/py-paramiko

MAKE_ENV +=	LIBRSYNC_DIR=${LOCALBASE}

NO_TEST =	Yes

# XXX 600 mode prevents from reading the man page;
# check if still required at next update
post-extract:
	chmod 644 ${WRKSRC}/bin/*.1

.include <bsd.port.mk>
