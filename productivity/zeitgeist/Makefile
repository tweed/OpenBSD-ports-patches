# $OpenBSD: Makefile,v 1.5 2013/01/30 09:42:45 jasper Exp $

COMMENT =		event logging framework

V =			0.9.5
DISTNAME =		zeitgeist-${V}
REVISION =		1

CATEGORIES =		productivity

HOMEPAGE =		http://zeitgeist-project.com/

MAINTAINER =		Jasper Lievisse Adriaanse <jasper@openbsd.org>

# LGPLv2.1
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

MASTER_SITES =		http://edge.launchpad.net/zeitgeist/${V:R}/${V}/+download/
EXTRACT_SUFX =		.tar.bz2

MODULES =		devel/gettext \
			lang/python \
			x11/gnome

BUILD_DEPENDS =		lang/vala \
			textproc/p5-XML-Parser \
			textproc/py-rdflib \
			textproc/raptor

RUN_DEPENDS =		devel/py-gobject \
			devel/py-xdg \
			x11/dbus-python

WANTLIB += c ffi gio-2.0 glib-2.0 gmodule-2.0 gobject-2.0 gthread-2.0
WANTLIB += pcre pthread sqlite3 z

LIB_DEPENDS =		devel/glib2

FAKE_FLAGS +=		zeitgeistdocdir="${PREFIX}/share/doc/zeitgeist/"

CONFIGURE_STYLE =	gnu
CONFIGURE_ARGS +=	${CONFIGURE_SHARED}
# XXX: FTS++ fails to build in controller.cpp; needs fixing.
CONFIGURE_ARGS +=	--disable-fts
# XXX: Requires dee-icu which has not been ported yet
CONFIGURE_ARGS +=	--without-dee-icu

.include <bsd.port.mk>