# $OpenBSD: Makefile,v 1.6 2013/09/22 14:28:13 dcoppa Exp $

SHARED_ONLY=	Yes

COMMENT-main=	multithreaded SQL database (client)
COMMENT-server=	multithreaded SQL database (server)
COMMENT-tests=	multithreaded SQL database (regression test suite/benchmark)

VERSION=	5.5.32
DISTNAME=	mariadb-${VERSION}
PKGNAME-main=	mariadb-client-${VERSION}
PKGNAME-server=	mariadb-server-${VERSION}
PKGNAME-tests= 	mariadb-tests-${VERSION}
CATEGORIES=	databases
MASTER_SITES=	http://ftp.osuosl.org/pub/mariadb/${DISTNAME}/kvm-tarbake-jaunty-x86/ \
		http://ftp.heanet.ie/mirrors/mariadb/${DISTNAME}/kvm-tarbake-jaunty-x86/

LIB_VERSION=	24
SHARED_LIBS=	mysqlclient_r	${LIB_VERSION}.0 \
		mysqlclient	${LIB_VERSION}.0

HOMEPAGE=	http://mariadb.org/

MAINTAINER=	Brad Smith <brad@comstyle.com>

# GPLv2 and LGPLv2.1
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB=	c crypto m pthread ssl stdc++ z
WANTLIB-main=	curses readline ${WANTLIB}
WANTLIB-server=	mysqlclient wrap ${WANTLIB}
WANTLIB-tests=	mysqlclient ${WANTLIB}

LOCALSTATEDIR=	${BASELOCALSTATEDIR}/mysql
SOCKET_DIR=	/var/run/mysql
SUBST_VARS=	SOCKET_DIR

MODULES=	devel/cmake
BUILD_DEPENDS=	devel/bison

RUN_DEPENDS-server=	${BASE_PKGPATH}>=5.5,<5.6 \
			databases/p5-DBD-mysql \
			devel/p5-Term-ReadKey
LIB_DEPENDS-server=	${BASE_PKGPATH}>=5.5,<5.6
LIB_DEPENDS-tests=	${BASE_PKGPATH}>=5.5,<5.6

VMEM_WARNING=	Yes

USE_GROFF=	Yes

CONFIGURE_ARGS+=-DCMAKE_INSTALL_PREFIX="${PREFIX}" \
		-DINSTALL_DOCDIR="share/doc/mysql" \
		-DINSTALL_DOCREADMEDIR="share/doc/mysql" \
		-DINSTALL_INCLUDEDIR="include/mysql" \
		-DINSTALL_INFODIR="info" \
		-DINSTALL_LIBDIR="lib/mysql" \
		-DINSTALL_MANDIR="man" \
		-DINSTALL_MYSQLDATADIR="${LOCALSTATEDIR}" \
		-DINSTALL_MYSQLSHAREDIR="share/mysql" \
		-DINSTALL_MYSQLTESTDIR="share/mysql-test" \
		-DINSTALL_PLUGINDIR="lib/mysql/plugin" \
		-DINSTALL_SBINDIR="libexec" \
		-DINSTALL_SCRIPTDIR="bin" \
		-DINSTALL_SHAREDIR="share" \
		-DINSTALL_SQLBENCHDIR="share/mysql-bench" \
		-DINSTALL_SUPPORTFILESDIR="share/examples/mysql" \
		-DMYSQL_UNIX_ADDR="${SOCKET_DIR}/mysql.sock" \
		-DWITH_COMMENT='OpenBSD port: ${FULLPKGNAME-server}' \
		-DWITH_SSL=system \
		-DWITH_LIBEDIT=Off \
		-DWITH_LIBWRAP=On

MULTI_PACKAGES=	-main -server -tests

pre-configure:
	@${SUBST_CMD} ${WRKSRC}/cmake/mysql_version.cmake

post-install:
	@cd ${PREFIX}/lib && \
		ln -sf mysql/libmysqlclient.so.${LIBmysqlclient_VERSION} . && \
		ln -sf mysql/libmysqlclient_r.so.${LIBmysqlclient_r_VERSION} .

do-regress:
	@cd ${WRKBUILD}/mysql-test && ./mysql-test-run.pl --force --max-test-fail=0

.include <bsd.port.mk>
