# $OpenBSD: Makefile,v 1.2 2013/03/10 23:04:44 espie Exp $

COMMENT=		philosophy of problem solving, applied to Forth

DISTNAME=		thinking-forth-color
PKGNAME=		thinking-forth-1.0
CATEGORIES=		books

HOMEPAGE=		http://thinking-forth.sourceforge.net/

# Creative Commons license
# attribute, non-commercial, share-alike
PERMIT_PACKAGE_CDROM=	Yes

MASTER_SITES=		${MASTER_SITE_SOURCEFORGE:=thinking-forth/}
DISTFILES=		${DISTNAME}.pdf
EXTRACT_ONLY=

NO_BUILD=		Yes
NO_TEST=		Yes
PKG_ARCH=		*

do-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/thinking-forth/
	${INSTALL_DATA} ${FULLDISTDIR}/${DISTFILES} \
		${PREFIX}/share/doc/thinking-forth/

.include <bsd.port.mk>
