# $OpenBSD: Makefile,v 1.16 2013/03/20 22:54:27 sthen Exp $

# Lacks p5-Term-Gnuplot regress dependency!

SHARED_ONLY=	Yes

COMMENT=	Perl interface to libPARI and GP

MODULES=	cpan
# beware may need EPOCH if updating
DISTNAME=	Math-Pari-2.01080605
CATEGORIES=	math

# Perl
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB += c m

BUILD_DEPENDS=	math/pari:configure
USE_X11 =	Yes

PARIDIR=	math/pari

CONFIGURE_ARGS=	paridir=${WRKDIST}/pari

post-extract:
	ln -s ${WRKDIR}/${PARIDIR}/pari* ${WRKDIST}/pari

.include <bsd.port.mk>
