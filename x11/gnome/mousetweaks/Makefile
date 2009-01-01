# $OpenBSD: Makefile,v 1.2 2008/12/17 18:47:58 jasper Exp $

COMMENT=	mouse accessibility enhancements for GNOME

GNOME_PROJECT=	mousetweaks
GNOME_VERSION=	2.24.2
PKGNAME=	${DISTNAME}p0

HOMEPAGE=	http://live.gnome.org/Mousetweaks/Home

# GPLv3 - GFDLv1.2
PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

WANTLIB=	ICE ORBit-2 SM X11 Xau Xcomposite Xcursor Xdamage \
		Xdmcp Xext Xfixes Xi Xinerama Xrandr Xrender Xtst \
		art_lgpl_2 atk-1.0 audiofile bonobo-2 \
		bonobo-activation bonoboui-2 c cairo dbus-1 \
		dbus-glib-1 esd expat fontconfig freetype gailutil \
		gconf-2 gdk-x11-2.0 gdk_pixbuf-2.0 gio-2.0 glade-2.0 \
		glib-2.0 glitz gmodule-2.0 gnome-2 gnome-keyring \
		gnomecanvas-2 gnomeui-2 gnomevfs-2 gobject-2.0 \
		gthread-2.0 gtk-x11-2.0 m pango-1.0 pangocairo-1.0 \
		pangoft2-1.0 pixman-1 png popt pthread xml2 z

MODULES=	devel/gettext \
		x11/gnome

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	::textproc/rarian
LIB_DEPENDS=	panel-applet-2.>=2::x11/gnome/applets2 \
		spi,cspi::x11/gnome/at-spi

CONFIGURE_ENV=	CPPFLAGS="-I${LOCALBASE}/include" \
		LDFLAGS="-L${LOCALBASE}/lib"
CONFIGURE_ARGS=	${CONFIGURE_SHARED} \
		--with-gconf-schema-file-dir=${LOCALBASE}/share/schemas/mousetweaks \
		--disable-schemas-install

USE_X11=	Yes
MODGNOME_HELP_FILES= Yes

post-patch:
	@ln -s /usr/bin/true ${WRKDIR}/bin/scrollkeeper-update

.include <bsd.port.mk>