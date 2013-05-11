# $OpenBSD: Makefile,v 1.1.1.1 2013/04/24 11:28:32 zhuk Exp $

COMMENT =	KDE base applications
DISTNAME =	kde-baseapps-${MODKDE4_VERSION}

SHARED_LIBS =	konq			8.0	# 6.0
SHARED_LIBS +=	konqsidebarplugin	5.0	# 4.0
SHARED_LIBS +=	dolphinprivate		0.0	# 1.0
SHARED_LIBS +=	konquerorprivate	0.0	# 4.0
SHARED_LIBS +=	kbookmarkmodel_private	0.0	# 4.7

WANTLIB =  c m pthread stdc++ z
WANTLIB += ICE SM X11 Xext Xt Xrender
WANTLIB += lib/qt4/Qt3Support lib/qt4/QtDBus lib/qt4/QtGui
WANTLIB += lib/qt4/QtNetwork lib/qt4/QtScript lib/qt4/QtSvg
WANTLIB += lib/qt4/QtXml
WANTLIB += ${KDE4LIB}/kactivities ${KDE4LIB}/kcmutils ${KDE4LIB}/kde3support
WANTLIB += ${KDE4LIB}/kdesu ${KDE4LIB}/kdeui ${KDE4LIB}/kfile ${KDE4LIB}/khtml
WANTLIB += ${KDE4LIB}/kio ${KDE4LIB}/kjs ${KDE4LIB}/knewstuff3
WANTLIB += ${KDE4LIB}/kparts ${KDE4LIB}/nepomuk ${KDE4LIB}/nepomukcore
WANTLIB += ${KDE4LIB}/nepomukutils ${KDE4LIB}/nepomukwidgets ${KDE4LIB}/plasma
WANTLIB += ${KDE4LIB}/solid
WANTLIB += glib-2.0 soprano tidyp

MODULES =	multimedia/phonon

# KJS is broken, so allow KDE browsers to work out of the box
# using QtWebKit.
RUN_DEPENDS =	www/kwebkitpart

LIB_DEPENDS =	devel/glib2 \
		${MODKDE4_DEP_DIR}/kactivities \
		${MODKDE4_DEP_DIR}/libs>=4.10.2 \
		${MODKDE4_DEP_DIR}/nepomuk-core \
		${MODKDE4_DEP_DIR}/nepomuk-widgets \
		www/tidyp

.include <bsd.port.mk>