# $OpenBSD: Makefile,v 1.1.1.1 2013/11/18 21:51:11 edd Exp $

COMMENT =		xrandr gui
MODPY_EGG_VERSION =	0.1.7.1
DISTNAME =		arandr-${MODPY_EGG_VERSION}
CATEGORIES =		x11 sysutils
HOMEPAGE =		http://christian.amsuess.com/tools/arandr/

MAINTAINER =		Edd Barrett <edd@openbsd.org>

# GPLv3
PERMIT_PACKAGE_CDROM =	Yes

MASTER_SITES =		http://christian.amsuess.com/tools/arandr/files/

MODULES =		lang/python
RUN_DEPENDS =		x11/py-gtk2 \
			devel/desktop-file-utils
BUILD_DEPENDS =		textproc/py-docutils

NO_TEST =		Yes

.include <bsd.port.mk>
