# $OpenBSD: Makefile,v 1.37 2013/06/19 20:26:05 steven Exp $

COMMENT=	syslogd replacement

SHARED_ONLY =	Yes

V =		3.3.11
DISTNAME =	syslog-ng-$V
CATEGORIES =	sysutils

MAINTAINER =	Steven Mestdagh <steven@openbsd.org>

HOMEPAGE =	http://www.balabit.com/network-security/syslog-ng/

# GPL v2
PERMIT_PACKAGE_CDROM =		Yes

MASTER_SITES =	http://www.balabit.com/downloads/files/syslog-ng/open-source-edition/$V/source/
DISTFILES =	syslog-ng_$V.tar.gz

SHARED_LIBS =	syslog-ng		0.0 \
		syslog-ng-${V}		0.0

MODULES =	devel/gettext
 
WANTLIB =	c m pcre wrap crypto ssl z evtlog dbi ffi ivykis pthread \
		gio-2.0 glib-2.0 gmodule-2.0 gobject-2.0 gthread-2.0 \
		json-glib-1.0
 
LIB_DEPENDS = 	devel/glib2 \
 		devel/json-glib \
 		devel/libivykis \
 		sysutils/eventlog \
		databases/libdbi

CONFIGURE_STYLE =	gnu
CONFIGURE_ARGS +=	--enable-tcp-wrapper \
			--with-pidfile-dir=/var/run \
			--with-json=json-glib \
			--with-libmongo-client=no \
			--disable-mongodb \
			--with-ivykis=system \
			--enable-sql
CONFIGURE_ENV +=	OPENSSL_CFLAGS="-I/usr/include/openssl" \
			OPENSSL_LIBS="-lssl -lcrypto" \
			LIBDBI_CFLAGS="-I/usr/include/openssl" \
			LIBDBI_LIBS="-ldbi"
USE_GMAKE =	Yes
USE_GROFF =	Yes

CFLAGS +=	-I${LOCALBASE}/include

SUBST_VARS +=	V
 
DOC =		${PREFIX}/share/doc/syslog-ng/
EXAMPLES =	${PREFIX}/share/examples/syslog-ng/
 
pre-install:
	cd ${WRKSRC}/doc/man && perl -pi -e 's@/opt/syslog\\-ng/etc/syslog\\-ng/@${SYSCONFDIR:S/-/\\-/g}/@g' *.[158]
 
post-install:
	${INSTALL_DATA_DIR} ${EXAMPLES}
	${INSTALL_DATA} ${FILESDIR}/syslog-ng.conf \
		${EXAMPLES}/syslog-ng.conf.sample
	rm -rf ${PREFIX}/share/{include,tools,xsd}
# XXX hack for libtool dropping -rpath
	ln -s syslog-ng/libsyslog-ng-crypto.so ${PREFIX}/lib/libsyslog-ng-crypto.so

.include <bsd.port.mk>
CONFIGURE_ARGS+=	--sysconfdir=${SYSCONFDIR}/syslog-ng
