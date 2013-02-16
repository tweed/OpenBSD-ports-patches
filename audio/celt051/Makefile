# $OpenBSD: Makefile,v 1.2 2013/01/30 08:13:45 dcoppa Exp $

COMMENT =	ultra-low delay audio codec (051 API)

V =		0.5.1.1
DISTNAME =	celt-$V
PKGNAME =	celt051-$V
REVISION =	0
CATEGORIES =   	audio

HOMEPAGE =	http://www.celt-codec.org/

SHARED_LIBS +=  celt051                   0.0 # 0.0

# BSD
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

MASTER_SITES =		http://downloads.xiph.org/releases/celt/

WANTLIB =		c m ogg sndio

LIB_DEPENDS =		audio/libogg

USE_LIBTOOL =		Yes

CONFIGURE_STYLE =	gnu

CONFIGURE_ARGS =	${CONFIGURE_SHARED} \
			--with-ogg=${LOCALBASE}

CONFIGURE_ENV =		CPPFLAGS="-DUSE_SNDIO"

.include <bsd.port.mk>