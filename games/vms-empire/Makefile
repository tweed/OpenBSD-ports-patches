# $OpenBSD: Makefile,v 1.1.1.1 2013/10/20 17:36:08 bentley Exp $

COMMENT =		turn-based empire game

DISTNAME =		vms-empire-1.10

CATEGORIES =		games

HOMEPAGE =		http://www.catb.org/~esr/vms-empire/

# GPLv2
PERMIT_PACKAGE_CDROM =	Yes

WANTLIB += c ncurses

MASTER_SITES =		http://www.catb.org/~esr/vms-empire/

MAKE_FLAGS =		CC="${CC}" \
			CFLAGS="${CFLAGS}"

# docbook-generated lists using \h
USE_GROFF =		Yes

NO_TEST =		Yes

do-install:
	${INSTALL_PROGRAM} ${WRKDIST}/vms-empire ${PREFIX}/bin
	${INSTALL_DATA_DIR} ${PREFIX}/man/man6
	${INSTALL_MAN} ${WRKDIST}/empire.6 ${PREFIX}/man/man6/vms-empire.6

.include <bsd.port.mk>
