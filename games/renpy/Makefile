# $OpenBSD: Makefile,v 1.2 2013/02/02 08:14:49 ajacoutot Exp $

COMMENT =		visual novel engine

V =			6.14.1
MODPY_EGG_VERSION =	${V}.366
DISTNAME =		renpy-${V}-source
PKGNAME =		${DISTNAME:S/-source//}
REVISION =		0

CATEGORIES =		games

HOMEPAGE =		http://www.renpy.org/

# mostly MIT, some files LGPLv2.1+
PERMIT_PACKAGE_CDROM =		Yes
PERMIT_PACKAGE_FTP =		Yes
PERMIT_DISTFILES_CDROM =	Yes
PERMIT_DISTFILES_FTP =		Yes

WANTLIB +=		GLEW SDL avcodec avformat avutil freetype fribidi m
WANTLIB +=		png pthread ${MODPY_WANTLIB} swscale z

MASTER_SITES =		http://www.renpy.org/dl/${V}/
EXTRACT_SUFX =		.tar.bz2

MODULES =		lang/python
BUILD_DEPENDS =		devel/pygame
RUN_DEPENDS =		devel/pygame \
			x11/gnome/zenity
LIB_DEPENDS =		devel/fribidi \
			graphics/ffmpeg \
			graphics/glew

MAKE_ENV =		RENPY_DEPS_INSTALL=/usr::${LOCALBASE}::${X11BASE} \
			CPPFLAGS="${CPPFLAGS} -I${LOCALBASE}/include/libpng"

NO_REGRESS =		Yes

WRKSRC =		${WRKDIST}/module

MODPY_ADJ_FILES =	../renpy.py

pre-install:
	rm ${WRKDIST}/launcher/game/project.rpy.orig
	${INSTALL_DATA_DIR} ${PREFIX}/share/renpy
	cd ${WRKDIST} && \
	cp -r launcher renpy common template the_question tutorial LICENSE.txt \
		${PREFIX}/share/renpy
	${INSTALL_SCRIPT} ${WRKDIST}/renpy.py ${PREFIX}/share/renpy
	${SUBST_CMD} -o root -g bin -c ${FILESDIR}/renpy ${PREFIX}/bin/renpy
	chmod ${BINMODE} ${PREFIX}/bin/renpy

.include <bsd.port.mk>