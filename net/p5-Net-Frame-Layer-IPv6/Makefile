# $OpenBSD: Makefile,v 1.3 2013/03/11 11:35:52 espie Exp $

COMMENT=	Internet Protocol v6 layer object

MODULES=	cpan
DISTNAME=	Net-Frame-Layer-IPv6-1.04
CATEGORIES=	net

MAINTAINER=	Gleydson Soares <gsoares@openbsd.org>

# Artistic
PERMIT_PACKAGE_CDROM=	Yes

RUN_DEPENDS=	net/p5-Net-Frame
BUILD_DEPENDS=	${RUN_DEPENDS}

MODCPAN_EXAMPLES=	Yes

.include <bsd.port.mk>
