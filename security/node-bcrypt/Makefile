# $OpenBSD: Makefile,v 1.14 2013/11/05 16:27:00 abieber Exp $

COMMENT =	bcrypt hashing library for Node.js

NPM_VERSION =	0.7.5
NPM_NAME =	bcrypt
CATEGORIES =	security
REVISION =	2

HOMEPAGE =	https://github.com/ncb000gt/node.bcrypt.js

# MIT
PERMIT_PACKAGE_CDROM = Yes

MODULES =		lang/node

CONFIGURE_STYLE =	npm ext

BUILD_DEPENDS =		${RUN_DEPENDS}
RUN_DEPENDS =		devel/node-bindings

MODNODE_DEPENDS =	bindings

pre-configure:
	${SUBST_CMD} ${WRKDIST}/binding.gyp

# needs nodeunit
NO_TEST =	Yes

.include <bsd.port.mk>
