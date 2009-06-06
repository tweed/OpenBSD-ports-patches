# $OpenBSD: Makefile,v 1.1.1.1 2009/04/09 12:44:12 jasper Exp $

COMMENT =		open source alternative to glut
DISTNAME =		freeglut-2.4.0
SHARED_LIBS =		glut 4.0
CATEGORIES =		graphics
HOMEPAGE =		http://freeglut.sourceforge.net/
MAINTAINER =		Tobias Ulmer <tobiasu@tmux.org>

# X11
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes
   
WANTLIB =		GL GLU X11 Xau Xdmcp Xext Xxf86vm m

MASTER_SITES =		${MASTER_SITE_SOURCEFORGE:=freeglut/}

USE_X11 =		Yes
USE_LIBTOOL =		Yes
CONFIGURE_STYLE =	gnu
CONFIGURE_ARGS +=	${CONFIGURE_SHARED} \
			--enable-warnings=no 

NO_REGRESS =		Yes

.include <bsd.port.mk>