# $OpenBSD: Makefile,v 1.6 2013/04/27 15:44:21 ajacoutot Exp $

COMMENT=	modern gopher server
DISTNAME=	gophernicus-1.4
REVISION=	1
CATEGORIES=	net

HOMEPAGE=	http://gophernicus.org

MAINTAINER=	Brian Callahan <bcallah@openbsd.org>

# BSD
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB += c

MASTER_SITES=	${HOMEPAGE}/software/gophernicus/server/

MAKE_FLAGS=	CC="${CC}" CFLAGS="${CFLAGS}"
NO_TEST=	Yes

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/in.gophernicus ${PREFIX}/sbin
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/gophernicus
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/gophernicus
	cd ${WRKSRC} && ${INSTALL_DATA} LICENSE README INSTALL \
	    TODO ChangeLog README.Gophermap gophertag \
	    ${PREFIX}/share/doc/gophernicus/
	cd ${WRKSRC} && ${INSTALL_DATA} gophermap \
	    ${PREFIX}/share/examples/gophernicus/

.include <bsd.port.mk>
