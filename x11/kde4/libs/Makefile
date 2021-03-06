# $OpenBSD: Makefile,v 1.35 2013/11/12 11:18:38 ajacoutot Exp $

COMMENT =	KDE core libraries
DISTNAME =	kdelibs-${MODKDE4_VERSION}
PKGSPEC =	kdelibs->=4
REVISION =	6

DPB_PROPERTIES =	parallel tag:kde4

SHARED_LIBS =	kde3support          50.1      # .4.0
SHARED_LIBS +=	kdecore              50.1      # .5.0
SHARED_LIBS +=	kdefakes             50.1      # .5.0
SHARED_LIBS +=	kdesu                50.1      # .5.0
SHARED_LIBS +=	kdeui                50.1      # .5.0
SHARED_LIBS +=	kdnssd               50.1      # .2.0
SHARED_LIBS +=	khtml                50.1      # .5.0
SHARED_LIBS +=	kimproxy             50.1      # .4.0
SHARED_LIBS +=	kio                  50.1      # .5.0
SHARED_LIBS +=	kjs                  50.1      # .2.0
SHARED_LIBS +=	kjsembed             50.1      # .4.0
SHARED_LIBS +=	kmediaplayer         50.1      # .4.0
SHARED_LIBS +=	knotifyconfig        50.1      # .4.0
SHARED_LIBS +=	kntlm                50.1      # .1.0
SHARED_LIBS +=	kparts               50.1      # .4.0
SHARED_LIBS +=	krosscore            50.1      # .4.0
SHARED_LIBS +=	ktexteditor          50.1      # .4.0
SHARED_LIBS +=	kunittest            50.1      # .4.0
SHARED_LIBS +=	kutils               50.1      # .2.0
SHARED_LIBS +=	solid                50.1      # .4.0
SHARED_LIBS +=	threadweaver         50.1      # .4.0
SHARED_LIBS +=	kfile                50.1      # .4.0
SHARED_LIBS +=	knewstuff2           50.1      # .4.0
SHARED_LIBS +=	krossui              50.1      # .4.0
SHARED_LIBS +=  kpty                 50.1      # .4.0

SHARED_LIBS +=  kjsapi 			50.1
SHARED_LIBS +=	kdewebkit		50.1
SHARED_LIBS +=	knewstuff3		50.1
SHARED_LIBS +=	kunitconversion		50.1
SHARED_LIBS +=	plasma			50.1

SHARED_LIBS +=  kcmutils		50.1 # 4.7
SHARED_LIBS +=  kdeclarative		50.1 # 5.7
SHARED_LIBS +=  kemoticons		50.1 # 4.7
SHARED_LIBS +=  kidletime		50.1 # 4.7
SHARED_LIBS +=  kprintutils		50.1 # 4.7

SHARED_LIBS +=  nepomuk			50.1 # 4.9
SHARED_LIBS +=  nepomukquery		50.1 # 4.9
SHARED_LIBS +=  nepomukutils		50.1 # 4.9

# Each lib is used by corresponding binary in libexec/,
# so technically those are not plugins.
SHARED_LIBS +=	kdeinit4_kbuildsycoca4		50.1
SHARED_LIBS +=	kdeinit4_kconf_update		50.1
SHARED_LIBS +=	kdeinit4_kded4			50.1
SHARED_LIBS +=	kdeinit4_kio_http_cache_cleaner	50.1
SHARED_LIBS +=	kdeinit4_klauncher		50.1

WANTLIB =  c com_err crypto krb5 m pthread stdc++ util z
WANTLIB += Half ICE Iex IlmImf IlmThread Imath SM X11 Xau Xcursor Xdmcp
WANTLIB += Xext Xfixes Xft Xpm Xrender Xss Xtst
WANTLIB += lib/qt4/Qt3Support lib/qt4/QtDBus lib/qt4/QtDeclarative
WANTLIB += lib/qt4/QtGui lib/qt4/QtNetwork lib/qt4/QtOpenGL
WANTLIB += lib/qt4/QtScript lib/qt4/QtSql lib/qt4/QtSvg
WANTLIB += lib/qt4/QtWebKit lib/qt4/QtXml
WANTLIB += asn1 aspell attica bz2 dbusmenu-qt enchant exslt fam
WANTLIB += gif gssapi jasper jpeg lzma pcre pcreposix
WANTLIB += png polkit-qt-core-1 qca2 soprano sopranoclient
WANTLIB += streamanalyzer streams xml2 xslt
WANTLIB += heimbase roken wind

MODULES =	devel/gettext multimedia/phonon
MODKDE4_USE =

BUILD_DEPENDS =	misc/shared-desktop-ontologies>=0.10 \
		misc/shared-mime-info \
		net/avahi \
		x11/grantlee

RUN_DEPENDS =	devel/desktop-file-utils \
		misc/shared-mime-info \
		misc/shared-desktop-ontologies \
		net/cagibi \
		sysutils/gamin \
		x11/dbus \
		x11/grantlee \
		x11/gtk+2,-guic \
		${MODKDE4_DEP_DIR}/oxygen-icons>=${MODKDE4_DEP_VERSION}

LIB_DEPENDS =	archivers/bzip2 \
		archivers/xz \
		databases/soprano>=${MIN_SOPRANO_VERSION} \
		databases/strigi \
		devel/pcre \
		graphics/giflib \
		graphics/jasper \
		graphics/openexr \
		security/qca2 \
		sysutils/gamin \
		textproc/aspell/core \
		textproc/enchant \
		textproc/libxslt \
		productivity/attica \
		x11/dbusmenu-qt \
		x11/polkit-qt4

# and do not have this stuff at all
CONFIGURE_ARGS +=	-DWITH_ACL:Bool=FALSE \
			-DWITH_HSPELL:Bool=FALSE \
			-DWITH_HUpnp:Bool=FALSE \
			-DWITH_UDev:Bool=FALSE

# some basic defines
CONFIGURE_ARGS +=	-D_KDE_DEFAULT_HOME_POSTFIX:String="4" \
			-DKDE_DISTRIBUTION_TEXT:String="OpenBSD packages" \
			-DKDE4_AUTH_BACKEND_NAME:String="PolkitQt-1" \
			-DKDESU_USE_SUDO_DEFAULT:Bool=TRUE

# Reimplemented CMake modules, because previous were totally broken
REWR_CMAKE_MODULES =	FindKexiv2 FindXine FindXKB FindPolkitQt

# Contain (required) additional functionality compared to system ones
WRAP_CMAKE_MODULES =	FindLibXslt

MODKDE4_SYSCONF_FILES =	dbus-1	share/examples \
			xdg	share/examples

TEST_IS_INTERACTIVE =	X11
TEST_DEPENDS =		${BUILD_PKGPATH} \
			${MODKDE4_DEP_DIR}/kate>=${MODKDE4_DEP_VERSION} \
			${MODKDE4_DEP_DIR}/konsole>=${MODKDE4_DEP_VERSION}

post-extract:
.for M in ${REWR_CMAKE_MODULES}
	cp ${FILESDIR}/${M}.cmake ${WRKSRC}/cmake/modules/${M}.cmake
.endfor
.for M in ${WRAP_CMAKE_MODULES}
	${SUBST_CMD} -c ${FILESDIR}/${M}.cmake \
	    ${WRKSRC}/cmake/modules/${M}.cmake
.endfor
	cp ${FILESDIR}/config-util.h.cmake ${WRKSRC}/kdecore/util/
	cp ${FILESDIR}/ConfigureChecks.cmake ${WRKSRC}/kdecore/util/

.include <bsd.port.mk>
