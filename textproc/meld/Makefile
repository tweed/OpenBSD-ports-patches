# $OpenBSD: Makefile,v 1.31 2013/10/18 08:22:57 ajacoutot Exp $

COMMENT=	graphical diff and merge tool

GNOME_VERSION=	1.8.2
GNOME_PROJECT=	meld

CATEGORIES=	textproc x11

HOMEPAGE=	http://meld.sourceforge.net/

# GPLv2
PERMIT_PACKAGE_CDROM=	Yes

MODULES=	lang/python \
		x11/gnome

MODGNOME_TOOLS= 	yelp
MODGNOME_DESKTOP_FILE=	Yes
MODGNOME_ICON_CACHE=	Yes
MODGNOME_MIME_FILE=	Yes

MODPY_ADJ_FILES=	bin/meld

RUN_DEPENDS=	x11/dbus-python \
		x11/py-gtk2

NO_TEST=	yes

CONFIGURE_STYLE=none

MAKE_ENV=	PYTHON=${MODPY_BIN}
MAKE_FLAGS=	libdir=${MODPY_SITEPKG} \
		localstatedir=${VARBASE}

pre-configure:
	${SUBST_CMD} ${WRKSRC}/INSTALL

post-install:
	rmdir ${PREFIX}/share/pixmaps

.include <bsd.port.mk>
