# $OpenBSD: Makefile,v 1.25 2013/10/01 12:28:03 stu Exp $

SHARED_ONLY =	Yes

COMMENT =	circuit drawing and schematic capture

BASEVER =	3.7
DISTNAME =	xcircuit-${BASEVER}.52
CATEGORIES =	cad
HOMEPAGE =	http://opencircuitdesign.com/xcircuit/
MAINTAINER =	Stuart Cassoff <stwo@users.sourceforge.net>

# GPLv2
PERMIT_PACKAGE_CDROM =	Yes

WANTLIB =	c m z ICE Xt X11 SM Xpm ${MODTK_WANTLIB}

MASTER_SITES =	${HOMEPAGE:=archive/}
EXTRACT_SUFX =	.tgz

MODULES =	x11/tk
LIB_DEPENDS =	${MODTK_LIB_DEPENDS}

USE_GMAKE =	Yes

CONFIGURE_STYLE =	autoconf no-autoheader
AUTOCONF_VERSION =	2.68
CONFIGURE_ARGS +=	${CONFIGURE_SHARED} \
			--with-tcl=${MODTCL_LIBDIR} \
			--with-tk=${MODTK_LIBDIR}

NO_TEST =	Yes

SUBST_VARS =	BASEVER

post-install:
	@cd ${WRKSRC} && ${MAKE} install-man
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/xcircuit
	${INSTALL_DATA} ${WRKSRC}/README* ${PREFIX}/share/doc/xcircuit
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/xcircuit
	${INSTALL_DATA} ${WRKSRC}/examples/*.* \
		${PREFIX}/share/examples/xcircuit
	${INSTALL_DATA} ${WRKSRC}/examples/.xcircuitrc \
		${PREFIX}/share/examples/xcircuit/dot.xcircuitrc

.include <bsd.port.mk>
