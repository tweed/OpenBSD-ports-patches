# $OpenBSD: Makefile,v 1.16 2013/09/13 16:41:46 ajacoutot Exp $

COMMENT=	CUPS drivers for SPL printers

V=		2.0.0
SNV_REV=	308
DISTNAME=	splix-${V}r${SNV_REV}
PKGNAME=	splix-${V}.${SNV_REV}
REVISION=	1

CATEGORIES=	print

HOMEPAGE=	http://splix.ap2c.org/

MAINTAINER=	Antoine Jacoutot <ajacoutot@openbsd.org>

# GPLv2
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB += c cups cupsimage jbig85 m pthread stdc++

# snapshot of SVN at revision 308 pending new release
MASTER_SITES=	http://www.zen103022.zen.co.uk/download/
#MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=splix/}

LIB_DEPENDS=	print/cups,-libs \
		graphics/jbigkit>=2.0

# gstoraster
RUN_DEPENDS=	print/cups-filters

USE_GMAKE=	Yes
NO_TEST=	Yes

MAKE_FLAGS=	V=1 \
		MAKE=${MAKE_PROGRAM} \
		CXX=${CXX} \
		OPTIM_CXXFLAGS="${CXXFLAGS}" \
		PSTORASTER=gstoraster

.include <bsd.port.mk>
