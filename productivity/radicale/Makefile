# $OpenBSD: Makefile,v 1.4 2011/05/06 15:35:47 sthen Exp $

COMMENT =	simple CalDAV calendar server

MODPY_EGG_VERSION = 0.5
DISTNAME =	Radicale-${MODPY_EGG_VERSION}
PKGNAME =	${DISTNAME:L}
CATEGORIES =	productivity net

HOMEPAGE =	http://www.radicale.org/

MAINTAINER =	Sergey Bronnikov <estetus@gmail.com>

# GPLv3+
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

MASTER_SITES =		${HOMEPAGE}src/radicale/

MODULES =		lang/python
MODPY_ADJ_FILES =	radicale.py

NO_REGRESS =		Yes

pre-configure:
	@${SUBST_CMD} ${WRKSRC}/radicale/config.py

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/radicale
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/radicale
	cd ${WRKSRC}; ${INSTALL_DATA} COPYING NEWS README \
	    ${PREFIX}/share/doc/radicale/
	${SUBST_CMD} -g ${SHAREGRP} -o ${SHAREOWN} -c ${WRKSRC}/config \
	    ${PREFIX}/share/examples/radicale/config

.include <bsd.port.mk>