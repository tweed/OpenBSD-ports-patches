# $OpenBSD: Makefile,v 1.18 2013/03/11 10:50:16 espie Exp $

SHARED_ONLY=	Yes

COMMENT=	event loop processing

MODULES=	cpan
DISTNAME=	Event-1.20
REVISION=	0
CATEGORIES=	devel

MAINTAINER=	Jasper Lievisse Adriaanse <jasper@openbsd.org>

# perl
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB += c

MODCPAN_EXAMPLES=	Yes
MODCPAN_EXAMPLES_DIST=	demo
SRCDIR=			${WRKSRC}/${MODCPAN_EXAMPLES_DIST}

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/p5-Event
	${INSTALL_DATA} ${WRKSRC}/Tutorial.pdf ${PREFIX}/share/doc/p5-Event
	${MODCPAN_POST_INSTALL}
	${INSTALL_DATA} ${SRCDIR}/* ${MODCPAN_EXAMPLES_DIR}

.include <bsd.port.mk>
