# $OpenBSD: Makefile,v 1.6 2013/11/08 22:49:44 bcallah Exp $

MODPY_EGG_VERSION =	1.7.0
COMMENT =	pipe video streams into a video player
DISTNAME =	livestreamer-${MODPY_EGG_VERSION}
CATEGORIES =	multimedia net

HOMEPAGE =	http://livestreamer.tanuki.se/

MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# BSD
# src/livestreamer/packages/pbs.py: MIT
# src/livestreamer/plugins/gomtv.py: Apache 2.0
PERMIT_PACKAGE_CDROM =	Yes

MASTER_SITES =	${MASTER_SITE_PYPI:=l/livestreamer/}

MODULES =	lang/python
MODPY_SETUPTOOLS =	Yes

RUN_DEPENDS =	net/rtmpdump \
		security/py-crypto \
		www/py-requests

NO_TEST =	Yes

.include <bsd.port.mk>
