# $OpenBSD: Makefile,v 1.7 2013/09/20 06:16:05 jasper Exp $

COMMENT=		elegant and modern git repository browser

DISTNAME=		gitlist-0.4.0
REVISION=		1
CATEGORIES=		www

HOMEPAGE=		http://gitlist.org/

# BSD
PERMIT_PACKAGE_CDROM =  Yes

MASTER_SITES=		https://s3.amazonaws.com/gitlist/

MODULES=		lang/php

NO_BUILD=		Yes
NO_TEST=		Yes
PKG_ARCH=		*

PREFIX=		${VARBASE}/www
INSTDIR=		${PREFIX}/gitlist/
TINSTDIR=		${TRUEPREFIX}/gitlist/
SUBST_VARS=		INSTDIR TINSTDIR
WRKDIST=		${WRKDIR}/gitlist/

pre-configure:
	${SUBST_CMD} ${WRKSRC}/config.ini-example

do-install:
	rm -f ${WRKSRC}/config.ini-example.*
	cp -Rp ${WRKDIST} ${INSTDIR}
	${SUBST_CMD} -c ${FILESDIR}/gitlist.conf \
	    ${INSTDIR}/gitlist.conf.dist
	chown -R ${SHAREOWN}:${SHAREGRP} ${INSTDIR}

.include <bsd.port.mk>
