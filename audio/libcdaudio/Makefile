# $OpenBSD: Makefile,v 1.21 2013/03/21 08:45:12 ajacoutot Exp $

COMMENT=	multi-platform cd player development library
DISTNAME=	libcdaudio-0.99.12
REVISION=	0
SHARED_LIBS +=	cdaudio              1.1      # .1.0
CATEGORIES=	audio

HOMEPAGE=	http://libcdaudio.sourceforge.net/

MAINTAINER=	Kevin Lo <kevlo@openbsd.org>

# LGPLv2+
PERMIT_PACKAGE_CDROM=   Yes

MASTER_SITES=   ${MASTER_SITE_SOURCEFORGE:=libcdaudio/}

CONFIGURE_STYLE= gnu
CONFIGURE_ARGS+= ${CONFIGURE_SHARED}

.include <bsd.port.mk>
