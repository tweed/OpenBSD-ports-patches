# $OpenBSD: Makefile,v 1.2 2013/03/11 11:41:29 espie Exp $

COMMENT =		Sixth Edition UNIX Shell

DISTNAME =		osh-20120604

CATEGORIES =		shells

HOMEPAGE =		http://v6shell.org

MAINTAINER =		Pascal Stumpf <Pascal.Stumpf@cubes.de>

# BSD
PERMIT_PACKAGE_CDROM =	Yes

WANTLIB =		c

MASTER_SITES =		${HOMEPAGE}/src/

MAKE_FLAGS =		SYSCONFDIR="${SYSCONFDIR}" PREFIX="${TRUEPREFIX}"

NO_TEST =		Yes

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/osh
	${INSTALL_DATA} ${WRKSRC}/examples/etc.osh.login \
		${PREFIX}/share/examples/osh.login
	${INSTALL_DATA} ${WRKSRC}/examples/etc.osh.logout \
		${PREFIX}/share/examples/osh.logout
	${INSTALL_DATA} ${WRKSRC}/examples/etc.osh.oshrc \
		${PREFIX}/share/examples/osh.oshrc

.include <bsd.port.mk>
