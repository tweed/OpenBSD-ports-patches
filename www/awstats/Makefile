# $OpenBSD: Makefile,v 1.4 2012/12/28 18:13:51 rpe Exp $

COMMENT=		free real-time logfile analyzer

DISTNAME=		awstats-7.1

CATEGORIES=		www

HOMEPAGE=	 	http://awstats.sourceforge.net/

MAINTAINER=		Robert Peichaer <rpe@openbsd.org>

# GPLv2
PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM= Yes
PERMIT_DISTFILES_FTP=	Yes

MASTER_SITES=		${MASTER_SITE_SOURCEFORGE:=awstats/}

RUN_DEPENDS=		net/p5-Geo-IP \
			www/p5-libwww

NO_BUILD=		Yes
NO_REGRESS=		Yes

PKG_ARCH=		*

PREFIX=			/var/www
INSTDIR=		${PREFIX}/awstats

ACCESSLOG=		LogFile="${PREFIX}/logs/access_log"
GEOIPDAT=		${LOCALBASE}/share/examples/GeoIP/GeoIP.dat
GEOIPPLUGIN=		LoadPlugin="geoip GEOIP_STANDARD ${GEOIPDAT}"

pre-configure:
	@perl -pi \
		-e "s,/usr/local/awstats,${INSTDIR},g;" \
		-e "s,/var/lib/awstats,${INSTDIR}/data,g;" \
		${WRKSRC}/docs/*.html \
		${WRKSRC}/tools/*.pl \
		${WRKSRC}/tools/httpd_conf \
		${WRKSRC}/wwwroot/cgi-bin/awstats.model.conf \
		${WRKSRC}/wwwroot/cgi-bin/awstats.pl
	@perl -pi \
		-e 's,^LogFile="/var/log/httpd/mylog.log",${ACCESSLOG},g;' \
		-e 's,^SiteDomain="",SiteDomain="localhost",g;' \
		-e 's,^DirData=".",DirData="${INSTDIR}/data",g;' \
		-e 's,^DirCgi="/cgi-bin",DirCgi="/awstats",g;' \
		-e 's,^DirIcons="/icon",DirIcons="/awstatsicons",g;' \
		-e 's,^#LoadPlugin="geoip GEOIP_STANDARD /pathto/GeoIP.dat",${GEOIPPLUGIN},g;' \
		${WRKSRC}/wwwroot/cgi-bin/awstats.model.conf

do-install:
	${INSTALL_DATA_DIR} ${INSTDIR}/data
	cp -R ${WRKSRC}/* ${INSTDIR}/
	chown -R ${SHAREOWN}:${SHAREGRP} ${INSTDIR}
	find ${INSTDIR} -name '*.pl' -type f -exec chmod u=rwx,go=rx {} +
	find ${INSTDIR} ! -name '*.pl' -type f -exec chmod u=rw,go=r {} +

.include <bsd.port.mk>