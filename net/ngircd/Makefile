# $OpenBSD: Makefile,v 1.4 2013/02/15 09:54:36 fgsch Exp $

COMMENT =	lightweight irc server

DISTNAME =	ngircd-20.1
REVISION =	1

CATEGORIES =	net

HOMEPAGE =	http://ngircd.barton.de/

MAINTAINER =	Federico G. Schwindt <fgsch@openbsd.org>

# GPLv2
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM = Yes
PERMIT_DISTFILES_FTP =	Yes

WANTLIB =	c crypto ssl z

MASTER_SITES =	ftp://ftp.berlios.de/pub/ngircd/ \
		http://ngircd.barton.de/pub/ngircd/

REGRESS_DEPENDS = lang/expect \
		  ${BASE_PKGPATH}

CONFIGURE_STYLE = gnu
CONFIGURE_ARGS += --with-openssl \
		  --enable-ipv6

.include <bsd.port.mk>