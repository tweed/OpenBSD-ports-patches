# $OpenBSD: Makefile,v 1.67 2013/04/06 12:29:45 sthen Exp $

COMMENT=	graphical frontend for LaTeX (nearly WYSIWYG)

DISTNAME=	lyx-2.0.4
REVISION=	0
CATEGORIES=	print editors

HOMEPAGE=	http://www.lyx.org/

MASTER_SITES=	ftp://ftp.lyx.org/pub/lyx/stable/2.0.x/ \
		ftp://ftp.lip6.fr/pub/lyx/stable/2.0.x/

# GPLv2+
PERMIT_PACKAGE_CDROM=	Yes

MODULES=	devel/gettext lang/python x11/qt4

RUN_DEPENDS=	print/texlive/base \
		graphics/ImageMagick

LIB_DEPENDS=	${MODQT4_LIB_DEPENDS}>=4.5.3 \
		devel/boost \
		textproc/enchant \
		textproc/aspell/core

WANTLIB += QtGui>=8 aspell c m pthread stdc++ z
WANTLIB += boost_regex-mt>=1 boost_signals-mt>=1
WANTLIB += glib-2.0 gmodule-2.0 enchant

SEPARATE_BUILD=	Yes
USE_GMAKE=	Yes
USE_GROFF =	Yes

CONFIGURE_STYLE=		gnu

CONFIGURE_ARGS=	--with-extra-lib="${X11BASE}/lib ${LOCALBASE}/lib" \
		--with-extra-inc="${X11BASE}/include ${LOCALBASE}/include" \
		--without-aiksaurus \
		--without-hunspell \
		--without-included-boost \
		--enable-threads=posix
CONFIGURE_ENV+=	PYTHON=${MODPY_BIN} MOC4=${MODQT4_MOC} UIC4=${MODQT4_UIC} \
		ac_cv_func_fork=yes LIBS=-pthread

pre-configure:
	perl -pi -e "s,python -tt,${MODPY_BIN} -tt," \
		${WRKSRC}/src/support/os.cpp
	perl -pi -e "s,#! ?/usr/bin/(env )?python,#!${MODPY_BIN}," \
		${WRKSRC}/lib/lyx2lyx/lyx2lyx \
		${WRKSRC}/lib/scripts/listerrors \
		${WRKSRC}/src/graphics/GraphicsConverter.cpp
	find ${WRKSRC} -name "*.py" -print0 | xargs -0 \
		perl -pi -e "s,#! ?/usr/bin/(env )?python,#!${MODPY_BIN},"

.include <bsd.port.mk>
