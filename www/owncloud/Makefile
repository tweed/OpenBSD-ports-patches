# $OpenBSD: Makefile,v 1.56 2013/11/15 10:50:40 ajacoutot Exp $

COMMENT=	easy and universal access to shared and/or personnal files

V=		5.0.13
DISTNAME=	owncloud-${V}
EXTRACT_SUFX=	.tar.bz2

CATEGORIES=	www

HOMEPAGE=	http://owncloud.org/

MAINTAINER=	Antoine Jacoutot <ajacoutot@openbsd.org>

# AGPLv3 (GNU Affero Public License)
# jQuery: MIT / GPLv3
# HTTP: 3 clause BSD
# MDB2: BSD-like
# User: AGPL
# XML/RPC: MIT / PHP
# Silk icons: Creative Commons Attribution
PERMIT_PACKAGE_CDROM=	Yes

MASTER_SITES=	http://download.owncloud.org/community/

MODULES=	lang/php

NO_BUILD=	Yes
NO_TEST=	Yes
PKG_ARCH=	*

WRKDIST=	${WRKDIR}/owncloud

PREFIX=		${VARBASE}/www
INSTDIR=	${PREFIX}/owncloud
TINSTDIR=	${TRUEPREFIX}/owncloud
SUBST_VARS=	INSTDIR TINSTDIR MODPHP_BIN

RUN_DEPENDS=	lang/php/${MODPHP_VERSION},-curl \
		lang/php/${MODPHP_VERSION},-gd \
		lang/php/${MODPHP_VERSION},-xmlrpc \
		lang/php/${MODPHP_VERSION},-zip

do-install:
	cp -Rp ${WRKSRC} ${INSTDIR}
	find ${INSTDIR} -name '*.orig' -print0 | xargs -r0 rm
	${SUBST_CMD} -c ${FILESDIR}/owncloud.conf \
		${INSTDIR}/owncloud.conf.dist
	mv ${INSTDIR}/.htaccess ${INSTDIR}/.htaccess.dist
	find ${INSTDIR} -name '*.orig' -exec rm {} \;
	chown -R ${BINOWN}:${BINGRP} ${INSTDIR}

.include <bsd.port.mk>
