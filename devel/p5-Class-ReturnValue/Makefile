# $OpenBSD: Makefile,v 1.12 2013/03/11 10:50:14 espie Exp $

COMMENT=	smart return-value object

MODULES=	cpan
DISTNAME=	Class-ReturnValue-0.55
REVISION=	1
CATEGORIES=	devel
USE_GROFF =	Yes

# Artistic License
PERMIT_PACKAGE_CDROM=	Yes

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	devel/p5-Devel-StackTrace

CONFIGURE_ARGS= 	--no-prompts

.include <bsd.port.mk>
