# $OpenBSD: Makefile,v 1.14 2013/03/11 11:35:47 espie Exp $

COMMENT=		tool to monitor interface bandwidth usage

DISTNAME=		ifstat-1.1
REVISION=		2
CATEGORIES=		net

HOMEPAGE=		http://gael.roualland.free.fr/ifstat/

MAINTAINER=		Johan Fredin <johan@spelaroll.se>

# GPLv2+
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB=		c

MASTER_SITES=		${HOMEPAGE}

CONFIGURE_STYLE=	gnu dest
USE_GROFF =		Yes

NO_TEST=		Yes

FLAVORS=		snmp
FLAVOR?=

.if ${FLAVOR} == "snmp"
WANTLIB +=		netsnmp
LIB_DEPENDS=		net/net-snmp
CONFIGURE_ARGS+=	--with-snmp=${LOCALBASE}
WANTLIB+=		crypto m
.else
CONFIGURE_ARGS+=	--without-snmp
.endif

.include <bsd.port.mk>
