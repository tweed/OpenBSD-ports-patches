# $OpenBSD: Makefile,v 1.30 2013/10/12 13:11:34 sthen Exp $

COMMENT-main=	packet filter statistics visualization
COMMENT-daemon=	pfstat daemon

DISTNAME=	pfstat-2.3

PKGNAME-main=	${DISTNAME}
PKGNAME-daemon=	${DISTNAME:S/-/d-/}
REVISION=	5
CATEGORIES=	net
MASTER_SITES=	http://www.benzedrine.cx/

HOMEPAGE=	http://www.benzedrine.cx/pfstat.html

MAINTAINER=	Daniel Hartmeier <dhartmei@openbsd.org>

# BSD
PERMIT_PACKAGE_CDROM=	Yes

BUILD_DEPENDS=		graphics/gd

MODULES=		converters/libiconv

MULTI_PACKAGES=		-main -daemon

WANTLIB-main=		${MODLIBICONV_WANTLIB} c m z jpeg png gd>=20
LIB_DEPENDS-main=	${MODLIBICONV_LIB_DEPENDS} graphics/gd
WANTLIB-daemon=		c
LIB_DEPENDS-daemon=
RUN_DEPENDS-daemon=

pre-configure:
	@perl -pi -e "s,/etc,${SYSCONFDIR}," ${WRKSRC}/pfstat.c \
		${WRKSRC}/pfstat.8

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/pfstat ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/pfstat.8 ${PREFIX}/man/man8
	${INSTALL_PROGRAM} ${WRKSRC}/pfstatd/pfstatd ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/pfstatd/pfstatd.8 ${PREFIX}/man/man8
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/pfstat
	${INSTALL_DATA} ${WRKSRC}/pfstat.conf.example	\
			${PREFIX}/share/examples/pfstat/pfstat.conf

.include <bsd.port.mk>
