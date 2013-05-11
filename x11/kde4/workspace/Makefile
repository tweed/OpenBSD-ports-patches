# $OpenBSD: Makefile,v 1.1.1.1 2013/04/24 19:17:42 zhuk Exp $

COMMENT =	KDE workspace
DISTNAME =	kde-workspace-${MODKDE4_VERSION}

# TODO:
# Port ksysguard to OpenBSD (sensors framework, lsof(1) call replace and others).
# 
# Use something else instead of pciutils.
# 
# -- Performing Test HAVE_SETLOGIN
# systrace: deny user: pers, prog: /usr/ports/pobj/kde-workspace-4.7.1/build-i386/CMakeFiles/CMakeTmp/cmTryCompileExec, pid: 19037(0)[20572], policy: /usr/bin/
# env, filters: 233, syscall: native-setlogin(50), args: 4
# -- Performing Test HAVE_SETLOGIN - Success

SHARED_LIBS =	kdecorations			0.0 # 4.7
SHARED_LIBS +=	kephal				0.0 # 4.7
SHARED_LIBS +=	kfontinst			0.0 # 4.7
SHARED_LIBS +=	kfontinstui			0.0 # 4.7
SHARED_LIBS +=	khotkeysprivate			0.0 # 4.7
SHARED_LIBS +=	kickoff				0.0
SHARED_LIBS +=	kscreensaver			0.0 # 5.0
SHARED_LIBS +=	ksgrd				0.0 # 4.7
SHARED_LIBS +=	ksignalplotter			0.0 # 4.7
SHARED_LIBS +=	kwineffects			0.0 # 1.0
SHARED_LIBS +=	kwinnvidiahack			0.0 # 4.7
SHARED_LIBS +=  kwinglutils			0.0 # 1.0
SHARED_LIBS +=	kworkspace			0.0 # 4.7
SHARED_LIBS +=	lsofui				0.0 # 4.7
SHARED_LIBS +=	oxygenstyle			0.0 # 4.7
SHARED_LIBS +=	oxygenstyleconfig		0.0 # 4.7
SHARED_LIBS +=	plasma-geolocation-interface	0.0 # 4.7
SHARED_LIBS +=	plasma_applet-system-monitor	0.0 # 4.7
SHARED_LIBS +=	plasmaclock			0.0 # 4.7
SHARED_LIBS +=	plasmagenericshell		0.0 # 4.7
SHARED_LIBS +=	powerdevilconfigcommonprivate	0.0 # 0.1
SHARED_LIBS +=	powerdevilcore			0.0 # 0.1
SHARED_LIBS +=	powerdevilui			0.0
SHARED_LIBS +=	processcore			0.0 # 4.7
SHARED_LIBS +=	processui			0.0 # 4.7
SHARED_LIBS +=	solidcontrol			0.0 # 4.7
SHARED_LIBS +=	solidcontrolifaces		0.0 # 4.7
SHARED_LIBS +=	systemsettingsview		0.0
SHARED_LIBS +=	taskmanager			0.0 # 4.7
SHARED_LIBS +=	weather_ion			0.0 # 6.0

WANTLIB =  c m pthread stdc++ util z
WANTLIB += GL GLU ICE SM X11 X11-xcb XRes Xau Xcomposite Xcursor Xdamage Xdmcp
WANTLIB += Xext Xfixes Xft Xi Xinerama Xrandr Xrender Xss Xtst Xxf86vm
WANTLIB += fontconfig freetype xcb xcb-damage xcb-xfixes xkbfile

WANTLIB += lib/qt4/QtDBus lib/qt4/QtDeclarative
WANTLIB += lib/qt4/QtGui lib/qt4/QtNetwork lib/qt4/QtOpenGL
WANTLIB += lib/qt4/QtScript lib/qt4/QtSql lib/qt4/QtSvg lib/qt4/QtTest
WANTLIB += lib/qt4/QtWebKit lib/qt4/QtXml lib/qt4/QtXmlPatterns

WANTLIB += ${KDE4LIB}/akonadi-kcal ${KDE4LIB}/akonadi-kde
WANTLIB += ${KDE4LIB}/akonadi-kmime ${KDE4LIB}/kabc ${KDE4LIB}/kactivities
WANTLIB += ${KDE4LIB}/kcalcore ${KDE4LIB}/kcalutils ${KDE4LIB}/kcmutils
WANTLIB += ${KDE4LIB}/kdeclarative ${KDE4LIB}/kdefakes ${KDE4LIB}/kdesu
WANTLIB += ${KDE4LIB}/kdewebkit ${KDE4LIB}/kdeui ${KDE4LIB}/kfile
WANTLIB += ${KDE4LIB}/kholidays ${KDE4LIB}/khtml ${KDE4LIB}/kidletime
WANTLIB += ${KDE4LIB}/kio ${KDE4LIB}/kjs ${KDE4LIB}/kmime
WANTLIB += ${KDE4LIB}/knewstuff3 ${KDE4LIB}/knotifyconfig ${KDE4LIB}/kparts
WANTLIB += ${KDE4LIB}/kpimutils ${KDE4LIB}/kpty ${KDE4LIB}/kresources
WANTLIB += ${KDE4LIB}/krosscore ${KDE4LIB}/ktexteditor
WANTLIB += ${KDE4LIB}/kunitconversion ${KDE4LIB}/microblog
WANTLIB += ${KDE4LIB}/nepomuk ${KDE4LIB}/nepomukcore
WANTLIB += ${KDE4LIB}/nepomukutils ${KDE4LIB}/plasma
WANTLIB += ${KDE4LIB}/solid ${KDE4LIB}/threadweaver
WANTLIB += ${KDE4LIB}/syndication

WANTLIB += ck-connector cln dbus-1 dbusmenu-qt glib-2.0 gps jpeg png
WANTLIB += prison qalculate qimageblitz qjson soprano streamanalyzer
WANTLIB += strigiqtdbusclient usb xml2 xmms

MODULES =	devel/gettext multimedia/phonon lang/python lang/ruby
MODKDE4_USE =	pim

MODRUBY_REV =		1.8
MODRUBY_BUILDDEP =	No

BUILD_DEPENDS =	misc/shared-desktop-ontologies \
		${MODKDE4_DEP_DIR}/py-kde>=${MODKDE4_DEP_VERSION} \

RUN_DEPENDS =	devel/desktop-file-utils \
		misc/shared-desktop-ontologies \
		sysutils/lsof \
		${MODKDE4_DEP_DIR}/py-kde>=${MODKDE4_DEP_VERSION} \
		x11/polkit-qt4

LIB_DEPENDS =	audio/xmms \
		databases/soprano \
		devel/libusb-compat \
		graphics/qimageblitz \
		math/libqalculate \
		misc/gpsd \
		sysutils/consolekit \
		x11/dbusmenu-qt \
		${MODKDE4_DEP_DIR}/kactivities>=${MODKDE4_DEP_VERSION}

CONFIGURE_ARGS =	-DWITH_Googlegadgets:Bool=False \
			-DWITH_NetworkManager:Bool=False \
			-DWITH_PCIUTILS:Bool=False \
			-DWITH_RAW1394:Bool=False \
			-DWITH_Sensors:Bool=False

MODKDE4_SYSCONF_FILES =	dbus-1		share/examples \
			ksysguarddrc	share/examples/kde

post-extract:
	cp ${FILESDIR}/checkpass_bsd.c ${WRKSRC}/kcheckpass/

post-install:
	rm -f ${PREFIX}/share/config/kdm/*.bak

.include <bsd.port.mk>