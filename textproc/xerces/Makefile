# $OpenBSD: Makefile,v 1.39 2013/03/11 11:42:47 espie Exp $

COMMENT=	xml parser for Java

V=		2.9.1
DISTNAME=	Xerces-J-bin.${V}
PKGNAME=	xerces-${V}
REVISION =	8
CATEGORIES=	textproc

HOMEPAGE=	http://xml.apache.org/xerces2-j/index.html

MAINTAINER=	Kevin Lo <kevlo@openbsd.org>

# Apache
PERMIT_PACKAGE_CDROM=   Yes

MASTER_SITES=	http://xml.apache.org/dist/xerces-j/ \
		http://xml.apache.org/dist/xerces-j/old_xerces2/

TAR=		${LOCALBASE}/bin/gtar

MODULES=	java
MODJAVA_VER=	1.3+
MODJAVA_JRERUN=	Yes

BUILD_DEPENDS=	archivers/gtar 

NO_BUILD=	Yes
NO_TEST=	Yes

VFLAT=		${V:S/./_/g}
SUBST_VARS=	VFLAT
WRKDIST=	${WRKDIR}/xerces-${VFLAT}

do-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/java/classes/xerces-${VFLAT}
	${INSTALL_DATA_DIR} ${PREFIX}/share/java/xerces-${VFLAT}
	${INSTALL_DATA} ${WRKSRC}/*.jar ${PREFIX}/share/java/classes/xerces-${VFLAT}
	cp -R ${WRKSRC}/docs ${PREFIX}/share/java/xerces-${VFLAT}
	cp -R ${WRKSRC}/data ${PREFIX}/share/java/xerces-${VFLAT}
	cp -R ${WRKSRC}/samples ${PREFIX}/share/java/xerces-${VFLAT}

.include <bsd.port.mk>
