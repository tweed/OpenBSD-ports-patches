# $OpenBSD: Makefile,v 1.26 2013/10/17 14:31:52 naddy Exp $

COMMENT=		color ascii art library

DISTNAME=		libcaca-0.99.beta17
PKGNAME=		libcaca-0.99.17
REVISION=		2
SHARED_LIBS +=  caca           1.0               # .0.99
CATEGORIES=		graphics

# LGPLv2.1/Do What The Fuck You Want To Public License
PERMIT_PACKAGE_CDROM=   Yes

WANTLIB=		c ncursesw m z

HOMEPAGE=		http://caca.zoy.org/wiki/libcaca
MASTER_SITES=		http://caca.zoy.org/files/libcaca/ \
			http://distfiles.nl/

FLAVORS=		no_x11
FLAVOR?=

.if ${FLAVOR:Mno_x11}
CONFIGURE_ARGS+=	--disable-x11 \
			--disable-imlib2
.else
LIB_DEPENDS =    	graphics/imlib2
WANTLIB +=		X11 Xext freetype xcb Imlib2>=1
.endif

CONFIGURE_STYLE= 	gnu
CONFIGURE_ARGS+=	--disable-doc \
			--disable-slang \
			--disable-ruby \
			--disable-java \
			--disable-csharp \
			--disable-cxx \
			--disable-zzuf \
			--disable-cppunit

.include <bsd.port.mk>
