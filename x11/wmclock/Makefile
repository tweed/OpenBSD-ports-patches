# $OpenBSD: Makefile,v 1.16 2013/03/11 11:46:16 espie Exp $

COMMENT=		Window Maker dock.app clock

VERSION=		1.0.13
DISTNAME=		wmclock-${VERSION}
CATEGORIES=		x11 x11/windowmaker
MASTER_SITES=		${HOMEPAGE}

HOMEPAGE=		http://www.bluestop.org/wmclock/

# GPLv2
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB=		X11 Xau Xdmcp Xext Xpm c

BUILD_DEPENDS=		devel/imake

NO_TEST=		Yes
CONFIGURE_STYLE=	simple

do-install:
	${INSTALL_PROGRAM} ${WRKBUILD}/wmclock ${PREFIX}/bin
	${INSTALL_MAN} ${WRKBUILD}/wmclock.man ${PREFIX}/man/man1/wmclock.1

.include <bsd.port.mk>
