# $OpenBSD: Makefile,v 1.1.1.1 2013/04/24 18:20:52 zhuk Exp $

COMMENT =	Rubik's cube simulator for KDE
DISTNAME =	kubrick-${MODKDE4_VERSION}

WANTLIB =  c m pthread stdc++ GL GLU
WANTLIB += lib/qt4/QtDBus lib/qt4/QtGui lib/qt4/QtNetwork
WANTLIB += lib/qt4/QtOpenGL lib/qt4/QtSvg lib/qt4/QtXml
WANTLIB += ${KDE4LIB}/kdeui ${KDE4LIB}/kio

MODKDE4_USE =	games

RUN_DEPENDS =	devel/desktop-file-utils \
		x11/gtk+2,-guic

.include <bsd.port.mk>
