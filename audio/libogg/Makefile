# $OpenBSD: Makefile,v 1.33 2013/05/22 14:47:34 naddy Exp $

COMMENT=	Ogg bitstream library

DISTNAME=	libogg-1.3.1
CATEGORIES=    	audio
HOMEPAGE=	https://www.xiph.org/ogg/
SHARED_LIBS=	ogg	6.2	# 8.1

MAINTAINER=	Christian Weisgerber <naddy@openbsd.org>

# BSD
PERMIT_PACKAGE_CDROM=	Yes

MASTER_SITES=	http://downloads.xiph.org/releases/ogg/

CONFIGURE_STYLE=gnu
CONFIGURE_ARGS=	${CONFIGURE_SHARED}
SEPARATE_BUILD=	Yes

.include <bsd.port.mk>
