# $OpenBSD: Makefile,v 1.17 2013/03/11 10:50:00 espie Exp $

COMMENT=	library providing malloc debugging via VM protection

DISTNAME=	ElectricFence-2.0.5
PKGNAME=	${DISTNAME:L}
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_SUNSITE:=devel/lang/c/}

MAINTAINER=	Niklas Hallqvist <niklas@openbsd.org>

# License: GPL
PERMIT_PACKAGE_CDROM=	Yes

USE_GROFF =	Yes
NO_TEST=	Yes

do-install:
	${INSTALL_DATA} ${WRKBUILD}/libefence.a ${PREFIX}/lib
	${INSTALL_MAN} ${WRKBUILD}/libefence.3 ${PREFIX}/man/man3

.include <bsd.port.mk>
