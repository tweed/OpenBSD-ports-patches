# $OpenBSD: Makefile,v 1.30 2013/11/09 23:19:02 naddy Exp $

COMMENT=	GNU Problem Report Management System

DISTNAME=	gnats-3.113.1
REVISION=	11
CATEGORIES=	databases devel
MASTER_SITES=	${MASTER_SITE_GNU:=gnats/}

HOMEPAGE=	https://www.gnu.org/software/gnats/

# GPLv2+
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB=		c

USE_GROFF =	Yes
NO_TEST=	Yes

CONFIGURE_STYLE=gnu dest
CONFIGURE_ARGS+=--with-full-gnats --with-release-based --with-gnats-user=_gnats
CONFIGURE_ENV+=	SEND_PR=/usr/bin/false

INSTALL_TARGET=	install-gnats install-send-pr install-info

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/gnats/
	sed "s%/var/lib%${TRUEPREFIX}/share%g" \
		${WRKDIST}/gnats/gnats-db.conf > \
		${PREFIX}/share/examples/gnats/gnats-db.conf
	${INSTALL_PROGRAM} ${WRKDIST}/contrib/gnatsweb/gnatsweb.pl \
		${PREFIX}/lib/gnatsweb
	${INSTALL_DATA} ${WRKDIST}/contrib/gnatsweb/gnats.pm \
		${PREFIX}/libdata/perl5/site_perl

.include <bsd.port.mk>
