# $OpenBSD: Makefile,v 1.27 2013/03/11 11:37:53 espie Exp $

COMMENT=		strip TeX/LaTeX codes from a file

DISTNAME=		detex-2.8
REVISION=		0
CATEGORIES=		print

MASTER_SITES=		ftp://ftp.cs.purdue.edu/pub/trinkle/
EXTRACT_SUFX=		.tar

# NCSA/University of Illinois Open Source License
PERMIT_PACKAGE_CDROM=	Yes
WANTLIB=		c

NO_TEST=		Yes
MAKE_FLAGS=		CFLAGS="${CFLAGS} -DNO_MALLOC_DECL"
USE_GROFF =		Yes

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/detex ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/detex.1l ${PREFIX}/man/man1/detex.1

.include <bsd.port.mk>
