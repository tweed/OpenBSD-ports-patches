# $OpenBSD: Makefile,v 1.21 2013/03/11 11:46:13 espie Exp $

COMMENT=		drag and drop library

DISTNAME=		dnd.1.1
PKGNAME=		libdnd-1.1
REVISION=		2

SHARED_LIBS=		Dnd++	1.0 \
			Dnd	0.0
CATEGORIES=		x11 devel
USE_X11 =		Yes

# LPGL
PERMIT_PACKAGE_CDROM=	Yes

EXTRACT_SUFX=		.tgz

CONFIGURE_STYLE=	gnu
MAKE_FLAGS=		LIBDnd_VERSION=${LIBDnd_VERSION} \
			LIBDnd++_VERSION=${LIBDnd++_VERSION}

WRKDIST=		${WRKDIR}/DND
WRKSRC=			${WRKDIST}/DNDlib

TEST_IS_INTERACTIVE= x11

do-test:
	@cd ${WRKBUILD} && ./dndtest

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/libdnd
	${INSTALL_DATA} ${WRKDIST}/DNDdoc/* ${PREFIX}/share/doc/libdnd

.include <bsd.port.mk>
