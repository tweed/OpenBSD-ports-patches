# $OpenBSD: Makefile,v 1.11 2013/07/09 20:26:03 sthen Exp $

COMMENT=		open-source CFML engine

V=			4.0.4.001
EPOCH=			0
DISTNAME=		railo-$V
EXTRACT_SUFX=		.war

CATEGORIES=		lang www

HOMEPAGE=		http://www.getrailo.org/

MAINTAINER =		Stuart Henderson <sthen@openbsd.org>

# LGPLv2.1
PERMIT_PACKAGE_CDROM=	Yes

MASTER_SITES =		http://www.getrailo.org/down.cfm?item=/railo/remote/download/$V/custom/all/

# doesn't actually need tomcat to build, but listing it here avoids
# wasting time on !java arch
BUILD_DEPENDS=		archivers/unzip \
			${RUN_DEPENDS}
RUN_DEPENDS=		tomcat->=7,<8:www/tomcat/v7
SUBST_VARS=		CATALINA_BASE

NO_BUILD=		Yes
NO_TEST=		Yes
PKG_ARCH=		*

CATALINA_BASE=		/var/tomcat
PREFIX=			${CATALINA_BASE}

do-extract:
	mkdir ${WRKSRC}; cd ${WRKSRC}; unzip ${FULLDISTDIR}/${DISTFILES}

# Avoid conflicting servlet names with any alternative version of Railo that's
# installed via .WAR files. Idea from jamiekrug.com. In pre-patch to assist with
# patch/edit/update-patches cycle. Also strips horizontal whitespace at eol.
pre-patch:
	perl -pi -e 's,<servlet-name>,<servlet-name>PKG_,g;' \
	    -e 's,\h*\r*$$,,;' ${WRKSRC}/WEB-INF/web.xml

post-patch:
	perl -pi -e 's,/var/tomcat/,${CATALINA_BASE}/,g' ${WRKSRC}/WEB-INF/web.xml

do-install:
	${INSTALL_DATA_DIR} ${PREFIX}/railo ${PREFIX}/lib ${PREFIX}/conf
	cd ${WRKSRC}/WEB-INF/lib && pax -rw * ${PREFIX}/lib/
	chown -R ${SHAREOWN}:${SHAREGRP} ${PREFIX}/lib/*
	${INSTALL_DATA} ${WRKSRC}/index.cfm ${PREFIX}/railo/index.cfm.dist
	${INSTALL_DATA} ${WRKSRC}/WEB-INF/web.xml ${PREFIX}/conf/web-railo.xml.dist

.include <bsd.port.mk>
