# $OpenBSD: Makefile,v 1.31 2013/11/01 14:02:50 robert Exp $

COMMENT=	ActiveSync protocol implementation

V=		2.1.0
DISTNAME=	z-push-${V}-1750
PKGNAME=	z-push-${V}

CATEGORIES=	mail www

HOMEPAGE=	http://z-push.sourceforge.net/

MAINTAINER=	Robert Nagy <robert@openbsd.org>

# AGPLv3 (GNU Affero Public License)
PERMIT_PACKAGE_CDROM=	Yes

MASTER_SITES=	http://zarafa-deutschland.de/z-push-download/final/${V:C/^([0-9]+\.[0-9]+).*/\1/}/

NO_BUILD=	Yes
NO_TEST=	Yes
PKG_ARCH=	*

PREFIX=		${VARBASE}/www
INSTDIR=	${PREFIX}/z-push
TINSTDIR=	${TRUEPREFIX}/z-push
SUBST_VARS=	INSTDIR TINSTDIR

MODULES=	lang/php
RUN_DEPENDS=	mail/zarafa/zarafa,-web \
		lang/php/${MODPHP_VERSION},-imap

do-install:
	cp -Rp ${WRKSRC} ${INSTDIR}
	find ${INSTDIR} -type f -name \*.orig -exec rm -f {} \;
	mv ${INSTDIR}/config.php ${INSTDIR}/config.php.dist
	${SUBST_CMD} -c ${FILESDIR}/z-push.conf \
		${INSTDIR}/z-push.conf.dist
	chown -R ${SHAREOWN}:${SHAREGRP} ${INSTDIR}

.include <bsd.port.mk>
