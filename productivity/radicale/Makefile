# $OpenBSD: Makefile,v 1.20 2013/10/21 09:47:19 jung Exp $

COMMENT =	simple CalDAV calendar server

MODPY_EGG_VERSION = 0.8
DISTNAME =	Radicale-${MODPY_EGG_VERSION}
PKGNAME =	${DISTNAME:L}
CATEGORIES =	productivity net

HOMEPAGE =	http://radicale.org/

MAINTAINER =	Sergey Bronnikov <estetus@gmail.com>

# GPLv3+
PERMIT_PACKAGE_CDROM =	Yes

MASTER_SITES =		${MASTER_SITE_PYPI:=R/Radicale/}

MODULES =		lang/python
MODPY_ADJ_FILES =	radicale.py

NO_TEST =		Yes

pre-configure:
	@${SUBST_CMD} ${WRKSRC}/radicale/config.py

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/radicale
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/radicale
	cd ${WRKSRC}; ${INSTALL_DATA} COPYING NEWS.rst README \
	    ${PREFIX}/share/doc/radicale/
	${SUBST_CMD} -g ${SHAREGRP} -o ${SHAREOWN} -c ${WRKSRC}/config \
	    ${PREFIX}/share/examples/radicale/config
	${INSTALL_DATA} ${WRKSRC}/logging \
	    ${PREFIX}/share/examples/radicale/logging
	touch ${PREFIX}/share/examples/radicale/log

.include <bsd.port.mk>
