# $OpenBSD: Makefile,v 1.1.1.1 2013/05/06 16:16:30 fgsch Exp $

COMMENT =	sqlalchemy support for flask

MODPY_EGG_VERSION = 0.16
DISTNAME =	Flask-SQLAlchemy-${MODPY_EGG_VERSION}
PKGNAME =	py-${DISTNAME:L}

CATEGORIES =	databases www

HOMEPAGE =	https://github.com/mitsuhiko/flask-sqlalchemy/

# BSD
PERMIT_PACKAGE_CDROM =	Yes

MASTER_SITES =	${MASTER_SITE_PYPI:=F/Flask-SQLAlchemy/}

MODULES =	lang/python

MODPY_SETUPTOOLS = Yes

BUILD_DEPENDS =	databases/py-sqlalchemy \
		textproc/py-sphinx \
		www/py-flask
RUN_DEPENDS =	databases/py-sqlalchemy \
		www/py-flask
TEST_DEPENDS =	${RUN_DEPENDS}

MAKE_ENV =	PYTHONPATH="${WRKSRC}"

post-build:
	@cd ${WRKSRC}/docs && ${SETENV} ${MAKE_ENV} ${MAKE_PROGRAM} html

post-install:
	${INSTALL_DATA_DIR} \
	    ${PREFIX}/share/doc/${MODPY_PY_PREFIX}flask-sqlalchemy
	cd ${WRKSRC}/docs/_build/html && \
	    pax -rw * ${PREFIX}/share/doc/${MODPY_PY_PREFIX}flask-sqlalchemy
	rm -rf ${PREFIX}/share/doc/${MODPY_PY_PREFIX}flask-sqlalchemy/_sources

.include <bsd.port.mk>
