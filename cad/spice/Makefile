# $OpenBSD: Makefile,v 1.33 2013/03/10 23:04:45 espie Exp $

COMMENT=	Simulation Program for Integrated Circuit Electronics

V=			3f5
DISTNAME=		spice${V}
PKGNAME=		spice-${V}
REVISION=		6
CATEGORIES=     	cad

# BSD
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB=		X11 Xaw Xext Xmu Xt c m termlib

MASTER_SITES=		http://embedded.eecs.berkeley.edu/pubs/downloads/spice/
HOMEPAGE=		http://bwrc.eecs.berkeley.edu/Classes/IcBook/SPICE/

MAKE_ENV=		MAKE_PROGRAM='${MAKE_PROGRAM}' CC="${CC}"

USE_GROFF=		Yes
NO_TEST=		Yes

do-configure:
	@cp ${FILESDIR}/Makefile ${WRKSRC}
	@cp ${FILESDIR}/OpenBSD ${WRKSRC}/conf

.include <bsd.port.mk>
