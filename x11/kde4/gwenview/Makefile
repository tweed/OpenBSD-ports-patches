# $OpenBSD: Makefile,v 1.3 2013/08/24 17:33:38 zhuk Exp $

COMMENT =	KDE image viewer
DISTNAME =	gwenview-${MODKDE4_VERSION}
REVISION =	0

SHARED_LIBS =	gwenviewlib               50.0 # 4.7

WANTLIB =  c m pthread stdc++ z
WANTLIB += X11
WANTLIB += lib/qt4/QtDBus lib/qt4/QtGui lib/qt4/QtNetwork
WANTLIB += lib/qt4/QtSvg lib/qt4/QtXml lib/qt4/QtOpenGL
WANTLIB += ${KDE4LIB}/kactivities ${KDE4LIB}/kdeui ${KDE4LIB}/kfile
WANTLIB += ${KDE4LIB}/kio ${KDE4LIB}/kipi ${KDE4LIB}/konq ${KDE4LIB}/kparts
WANTLIB += ${KDE4LIB}/nepomuk ${KDE4LIB}/nepomukutils ${KDE4LIB}/solid
WANTLIB += exiv2 jpeg lcms2 png soprano

MODULES =	multimedia/phonon

BUILD_DEPENDS =	misc/shared-desktop-ontologies

RUN_DEPENDS =	devel/desktop-file-utils \
		misc/shared-desktop-ontologies \
		x11/gtk+2,-guic

LIB_DEPENDS = 	graphics/exiv2 \
		graphics/jpeg \
		graphics/lcms2 \
		graphics/png \
		${MODKDE4_DEP_DIR}/baseapps>=${MODKDE4_DEP_VERSION} \
		${MODKDE4_DEP_DIR}/kactivities>=${MODKDE4_DEP_VERSION} \
		${MODKDE4_DEP_DIR}/libkipi>=${MODKDE4_DEP_VERSION}

.include <bsd.port.mk>
