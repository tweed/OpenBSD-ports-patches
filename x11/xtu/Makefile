# $OpenBSD: Makefile,v 1.13 2013/03/11 11:46:19 espie Exp $

COMMENT=	configurable analog clock for X11
DISTNAME=	xtu-1.3
REVISION=	4
CATEGORIES=	x11 sysutils

# BSD license
PERMIT_PACKAGE_CDROM=	Yes

MASTER_SITES=	http://distfiles.nl/

WANTLIB=	X11 Xext Xpm c
USE_GROFF =	Yes
CONFIGURE_STYLE=imake
NO_TEST=	Yes

XTUFLAGS=	"-DUSE_XPM ${CFLAGS} -I${X11BASE}/include"
WANTLIB+=	Xpm

MAKE_FLAGS+=	CC=${CC} CDEBUGFLAGS= \
		CFLAGS="-DUSE_XPM ${CFLAGS} -I${X11BASE}/include"

.include <bsd.port.mk>
