# $OpenBSD: Makefile,v 1.16 2013/03/20 19:13:50 jeremy Exp $

COMMENT=		Ruby Development Tools for Eclipse IDE

V=			0.8.0
DISTNAME=		org.rubypeople.rdt-0.8.0.604272100PRD
PKGNAME=		eclipse-plugin-rdt-${V}
REVISION=		4
CATEGORIES+=		lang/ruby

HOMEPAGE=		http://rubyeclipse.sourceforge.net/

MAINTAINER=		Carlos Valiente <yo@virutass.net>

# Common Public License Version 1.0 (http://www.eclipse.org/legal/cpl-v10.html)
PERMIT_PACKAGE_CDROM=	commercial distribution defend and indemnify clauses
PERMIT_PACKAGE_FTP=	Yes

MASTER_SITES=		${MASTER_SITE_SOURCEFORGE:=rubyeclipse/}

MODULES=		lang/ruby
MODRUBY_BUILDDEP=	No
MODRUBY_REV=		1.8

do-install:
	${INSTALL_DATA_DIR} ${PREFIX}/eclipse
	cd ${WRKDIST} && tar cfL - features plugins | \
		(cd ${PREFIX}/eclipse && tar -xf -)

.include <bsd.port.mk>
