# $OpenBSD: Makefile,v 1.13 2013/03/11 10:50:07 espie Exp $

COMMENT =		Haskell bindings to libglade2

DISTNAME =		glade-0.12.1
REVISION =		2
CATEGORIES =		devel

HOMEPAGE =		http://www.haskell.org/gtk2hs/

MAINTAINER =		Matthias Kilian <kili@openbsd.org>

# LGPLv2.1
PERMIT_PACKAGE_CDROM =	Yes

MODULES =		lang/ghc

MODGHC_BUILD =		cabal hackage haddock register

BUILD_DEPENDS =		devel/gtk2hs-buildtools \
			${RUN_DEPENDS}
LIB_DEPENDS =           devel/libglade2
RUN_DEPENDS =		devel/hs-glib>=0.12,<0.13 \
			x11/hs-gtk>=0.12,<0.13 \

# This is much simpler than fiddling with MODGHC_SETUP_CONF_ARGS:
post-install:
	mv ${PREFIX}/share/${PKGNAME} ${PREFIX}/share/examples

.include <bsd.port.mk>
