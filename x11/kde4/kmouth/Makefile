# $OpenBSD: Makefile,v 1.2 2013/06/06 08:36:48 zhuk Exp $

COMMENT =	speech tool for mute persons for KDE
DISTNAME =	kmouth-${MODKDE4_VERSION}

WANTLIB =  c m pthread stdc++
WANTLIB += lib/qt4/QtDBus lib/qt4/QtGui lib/qt4/QtNetwork lib/qt4/QtSql
WANTLIB += lib/qt4/QtSvg lib/qt4/Qt3Support lib/qt4/QtXml
WANTLIB += ${KDE4LIB}/kde3support ${KDE4LIB}/kdeui ${KDE4LIB}/kio

RUN_DEPENDS =	devel/desktop-file-utils \
		x11/gtk+2,-guic \
		${MODKDE4_DEP_DIR}/jovie>=${MODKDE4_DEP_VERSION}

.include <bsd.port.mk>
