# $OpenBSD: Makefile,v 1.13 2013/05/17 13:13:51 bcallah Exp $

COMMENT=		easy to use text editor

VERSION=		1.5.2
DISTNAME=		ee-${VERSION}.src
PKGNAME=		ee-${VERSION}
EPOCH=			0
CATEGORIES=		editors

HOMEPAGE=		http://www.users.uswest.net/~hmahon/
MAINTAINER=		Brian Callahan <bcallah@openbsd.org>

# BSD-like
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB=		c

MASTER_SITES=		http://devio.us/~bcallah/source/
EXTRACT_SUFX=		.tgz

WRKDIST=		${WRKDIR}/easyedit-${VERSION}
MAKE_ENV=		SYSCONFDIR=${SYSCONFDIR} \
			CC="${CC}" 

NO_TEST=		Yes

do-install:
	@perl -i -pe 's:%%SYSCONFDIR%%:${SYSCONFDIR}:g' ${WRKSRC}/ee.1
	${INSTALL_PROGRAM} ${WRKDIST}/ee ${PREFIX}/bin/ee
	${INSTALL_DATA} ${WRKDIST}/ee.1	${PREFIX}/man/man1/ee.1

.include <bsd.port.mk>
