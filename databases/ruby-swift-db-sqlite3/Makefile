# $OpenBSD: Makefile,v 1.2 2013/06/21 22:37:02 sthen Exp $

COMMENT =	sqlite3 driver for swift

DISTNAME =	swift-db-sqlite3-0.1.3
REVISION =	0
CATEGORIES =	databases

MAINTAINER =	Jeremy Evans <jeremy@openbsd.org>

# MIT
PERMIT_PACKAGE_CDROM =	Yes

MODULES =	lang/ruby
FLAVOR ?=	ruby19
FLAVORS =	ruby19 ruby20

WANTLIB =	uuid sqlite3
LIB_DEPENDS =	sysutils/e2fsprogs>=1.42.7
RUN_DEPENDS =	databases/ruby-swift,${MODRUBY_FLAVOR}

CONFIGURE_STYLE = ruby gem ext

pre-configure:
	${SUBST_CMD} ${WRKSRC}/ext/swift/db/sqlite3/extconf.rb

.include <bsd.port.mk>
