# $OpenBSD: Makefile,v 1.2 2013/11/13 00:19:28 bcallah Exp $

COMMENT =	console-based 52-card solitare game
DISTNAME =	bluemoon-2.11
REVISION =	0
CATEGORIES =	games

HOMEPAGE =	http://www.catb.org/~esr/bluemoon/

MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# BSD
PERMIT_PACKAGE_CDROM =	Yes

WANTLIB += c ncurses

MASTER_SITES =	http://www.catb.org/~esr/bluemoon/

MAKE_FLAGS =	CC="${CC}" CFLAGS="${CFLAGS}"

ALL_TARGET =	bluemoon

NO_TEST =	Yes

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bluemoon ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/bluemoon.6 ${PREFIX}/man/man6

.include <bsd.port.mk>
