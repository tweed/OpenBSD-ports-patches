# $OpenBSD: Makefile,v 1.5 2013/03/21 08:48:54 ajacoutot Exp $

COMMENT =	XML and HTML processing toolkit
DISTNAME =	arabica-2010-November
PKGNAME =	arabica-2010.11
CATEGORIES =	textproc
MASTER_SITES =	${MASTER_SITE_SOURCEFORGE:=arabica/}

HOMEPAGE =	http://www.jezuk.co.uk/cgi-bin/view/arabica

SHARED_LIBS +=	arabica	0.0 # 0.0

# BSD-like
PERMIT_PACKAGE_CDROM=	Yes

CONFIGURE_STYLE =	gnu

BUILD_DEPENDS =	devel/boost
CONFIGURE_ENV =	CPPFLAGS='-I${LOCALBASE}/include'
WANTLIB +=	c expat m stdc++

VMEM_WARNING =	Yes

.include <bsd.port.mk>
