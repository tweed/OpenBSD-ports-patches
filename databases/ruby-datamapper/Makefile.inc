# $OpenBSD: Makefile.inc,v 1.1.1.1 2009/01/30 02:40:55 bernd Exp $

VERSION ?=	0.9.10
PKGNAME ?=	ruby-${DISTNAME}
CATEGORIES ?=	databases

HOMEPAGE ?=	http://www.datamapper.org/

# MIT
PERMIT_PACKAGE_CDROM ?= Yes
PERMIT_PACKAGE_FTP ?= Yes
PERMIT_DISTFILES_CDROM ?= Yes
PERMIT_DISTFILES_FTP ?= Yes

MASTER_SITES ?= ${MASTER_SITE_RUBYFORGE:=datamapper/}

MODULES ?= lang/ruby

BUILD_DEPENDS ?= ${RUN_DEPENDS}

CONFIGURE_STYLE ?= ruby gem

PKG_ARCH ?=	*