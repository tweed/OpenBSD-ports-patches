# $OpenBSD: Makefile,v 1.12 2013/11/08 11:17:05 sthen Exp $

COMMENT =	python powered git gui

MODPY_EGG_VERSION=	1.9.1
DISTNAME =	git-cola-${MODPY_EGG_VERSION}
DISTFILES =	${DISTNAME}.tar.gz{v${MODPY_EGG_VERSION}.tar.gz}
CATEGORIES =	devel x11

HOMEPAGE =	http://cola.tuxfamily.org/

# GPLv2 only
PERMIT_PACKAGE_CDROM=	Yes

MASTER_SITES =  https://github.com/git-cola/git-cola/archive/

MODULES =	devel/gettext \
		lang/python

BUILD_DEPENDS =	devel/git \
		textproc/xxdiff \
		x11/py-qt4

RUN_DEPENDS =	devel/git \
		textproc/xxdiff \
		x11/py-qt4 \
		devel/desktop-file-utils

MODPY_ADJ_FILES=	bin/git-cola

pre-configure:
	${SUBST_CMD} ${WRKSRC}/cola/cmds.py

.include <bsd.port.mk>
