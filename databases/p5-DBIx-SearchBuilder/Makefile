# $OpenBSD: Makefile,v 1.16 2013/03/11 02:52:06 espie Exp $

COMMENT=	encapsulate SQL queries and rows in simple perl objects

MODULES=	cpan

DISTNAME=	DBIx-SearchBuilder-1.59

CATEGORIES=	databases
USE_GROFF =	Yes

# perl
PERMIT_PACKAGE_CDROM=	Yes

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	databases/p5-DBD-SQLite \
		databases/p5-DBIx-DBSchema \
		devel/p5-Cache-Simple-TimedExpiry \
		devel/p5-Class-Accessor \
		devel/p5-Class-ReturnValue \
		devel/p5-Clone \
		devel/p5-capitalization \
		devel/p5-Want

TEST_DEPENDS= devel/p5-Test-Pod \
		 devel/p5-Devel-StackTrace

.include <bsd.port.mk>
