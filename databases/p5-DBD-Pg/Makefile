# $OpenBSD: Makefile,v 1.68 2013/03/11 02:52:06 espie Exp $

SHARED_ONLY=	Yes

COMMENT=	access to PostgreSQL databases through the DBI

MODULES=	cpan
DISTNAME=	DBD-Pg-2.19.3
CATEGORIES=	databases

LIB_DEPENDS=	databases/postgresql
RUN_DEPENDS=	databases/p5-DBI>=1.52
BUILD_DEPENDS=	${RUN_DEPENDS}
TEST_DEPENDS=databases/postgresql,-server \
		devel/p5-Test-Warn

TEST_FLAGS=	DBI_DSN="dbi:Pg:dbname=template1" DBI_USER="_postgresql" \
		DBI_PASS=""

MAINTAINER=	Pierre-Emmanuel Andre <pea@openbsd.org>

PERMIT_PACKAGE_CDROM=	Yes

WANTLIB+=	c m pq>=2

CONFIGURE_ENV+=	POSTGRES_HOME="${LOCALBASE}" \
		POSTGRES_LIB="${LOCALBASE}/lib" \
		POSTGRES_INCLUDE="${LOCALBASE}/include/postgresql"

.include <bsd.port.mk>
