# $OpenBSD: Makefile,v 1.14 2013/10/30 10:46:20 ajacoutot Exp $

COMMENT=		server of the Tryton application platform

DISTNAME=		trytond-${MODPY_EGG_VERSION}
REVISION=		1

CATEGORIES=		www

RUN_DEPENDS=		databases/py-psycopg2 \
			databases/py-sql \
			devel/py-dateutil \
			devel/py-simplejson \
			devel/py-tz \
			print/py-relatorio \
			security/py-openssl \
			textproc/py-lxml \
			textproc/py-polib \
			STEM-*-pgsql:textproc/sphinx,pgsql \
			www/py-webdav

# optional: graphviz has a lot of dependencies
#RUN_DEPENDS +=		graphics/py-dot

pre-configure:
	perl -pi -e 's,/var/lib,/var/db,,' ${WRKSRC}/trytond/config.py

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/trytond
	${INSTALL_DATA} ${WRKSRC}/etc/trytond.conf \
		${PREFIX}/share/examples/trytond/trytond.conf

.include <bsd.port.mk>
