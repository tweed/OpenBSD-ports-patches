# $OpenBSD: Makefile,v 1.3 2013/06/06 08:36:49 zhuk Exp $

COMMENT =	extra KDE plasmoids
DISTNAME =	kdeplasma-addons-${MODKDE4_VERSION}

SHARED_LIBS =	lancelot-datamodels		50.0 # 1.7
SHARED_LIBS +=	lancelot			50.0 # 1.9
SHARED_LIBS +=	plasma_groupingcontainment	50.0 # 4.7
SHARED_LIBS +=	plasmacomicprovidercore		50.0 # 1.0
SHARED_LIBS +=	plasmapotdprovidercore		50.0 # 1.0
SHARED_LIBS +=	plasmaweather			50.0 # 4.7
SHARED_LIBS +=	rtm				50.0 # 4.7

WANTLIB =  c m pthread stdc++
WANTLIB += ICE SM X11 Xext Xrender Xtst
WANTLIB += lib/qt4/QtDBus lib/qt4/QtDeclarative lib/qt4/QtGui
WANTLIB += lib/qt4/QtNetwork lib/qt4/QtScript lib/qt4/QtSql lib/qt4/QtSvg
WANTLIB += lib/qt4/QtWebKit lib/qt4/QtXml
WANTLIB += ${KDE4LIB}/akonadi-contact ${KDE4LIB}/akonadi-kde
WANTLIB += ${KDE4LIB}/kabc ${KDE4LIB}/kcalcore
WANTLIB += ${KDE4LIB}/kcmutils ${KDE4LIB}/kdeclarative ${KDE4LIB}/kdeui
WANTLIB += ${KDE4LIB}/kdewebkit ${KDE4LIB}/kexiv2 ${KDE4LIB}/kio
WANTLIB += ${KDE4LIB}/kfile ${KDE4LIB}/kmime ${KDE4LIB}/knewstuff3
WANTLIB += ${KDE4LIB}/kparts ${KDE4LIB}/kpimutils ${KDE4LIB}/kresources
WANTLIB += ${KDE4LIB}/krosscore ${KDE4LIB}/kunitconversion
WANTLIB += ${KDE4LIB}/kworkspace ${KDE4LIB}/marblewidget ${KDE4LIB}/nepomuk
WANTLIB += ${KDE4LIB}/nepomukcore ${KDE4LIB}/nepomukutils ${KDE4LIB}/plasma
WANTLIB += ${KDE4LIB}/plasmaclock ${KDE4LIB}/solid
WANTLIB += ${KDE4LIB}/taskmanager
WANTLIB += ${KDE4LIB}/threadweaver ${KDE4LIB}/weather_ion
WANTLIB += gio-2.0 glib-2.0 gmodule-2.0 gobject-2.0 gthread-2.0 ibus-1.0
WANTLIB += scim-1.0
WANTLIB += attica cln dbusmenu-qt qalculate qca2 qimageblitz qjson qoauth
WANTLIB += qwt soprano xml2

MODULES =	devel/gettext multimedia/phonon

MODKDE4_USE =	pim workspace

BUILD_DEPENDS =	math/eigen2

RUN_DEPENDS =	misc/shared-mime-info \
		x11/gtk+2,-guic

LIB_DEPENDS =	devel/qjson \
		graphics/qimageblitz \
		inputmethods/ibus \
		inputmethods/scim \
		math/libqalculate \
		productivity/attica \
		security/qca2 \
		security/qoauth \
		x11/dbusmenu-qt \
		${MODKDE4_DEP_DIR}/libkexiv2>=${MODKDE4_DEP_VERSION} \
		${MODKDE4_DEP_DIR}/marble>=${MODKDE4_DEP_VERSION} \
		${MODKDE4_DEP_DIR}/nepomuk-core>=${MODKDE4_DEP_VERSION} \
		x11/qwt

.include <bsd.port.mk>
