# $FreeBSD$

PORTNAME=	iup
DISTVERSION=	3.25
CATEGORIES=	x11-toolkits
MASTER_SITES=	SF/${PORTNAME}/${PORTVERSION}/Docs%20and%20Sources/
DISTFILES=	${DISTNAME}_Sources${EXTRACT_SUFX}

MAINTAINER=	theron.tarigo@gmail.com
COMMENT=	IUP Portable User Interface

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYRIGHT

USES=		gmake
USE_GNOME=	gtk20
USE_XORG=	x11

WRKSRC=		${WRKDIR}/${PORTNAME}
ALL_TARGET=	${PORTNAME}

MAKE_ARGS+=GTK_BASE=${LOCALBASE}
MAKE_ARGS+=X11_LIB=${LOCALBASE}/lib
MAKE_ARGS+=X11_INC=${LOCALBASE}/include
MAKE_ARGS+=RANLIB=${RANLIB}
MAKE_ARGS+=FLAGS+="${CFLAGS}"
MAKE_ARGS+=FLAGS+=-Wno-int-to-pointer-cast
MAKE_ARGS+=FLAGS+=-Wno-incompatible-pointer-types-discards-qualifiers

TEC_UNAME_CMD=	${GMAKE} -C ${WRKSRC}/src -f ../tecmake.mak sysinfo \
		 | ${GREP} '^TEC_UNAME' | ${SED} 's/^.* = //'

# Per IUP documentation, normal installation procedure is to copy files
# manually
# http://webserver2.tecgraf.puc-rio.br/iup/en/building.html
do-install:
	${CP} ${WRKSRC}/lib/$$(${TEC_UNAME_CMD})/*.so \
	      ${STAGEDIR}${PREFIX}/lib/
	${CP} ${WRKSRC}/lib/$$(${TEC_UNAME_CMD})/*.a \
	      ${STAGEDIR}${PREFIX}/lib/
	${MKDIR} ${STAGEDIR}${PREFIX}/include/iup
	${CP} ${WRKSRC}/include/*.h \
	      ${STAGEDIR}${PREFIX}/include/iup/
	${RM} ${STAGEDIR}${PREFIX}/include/iup/iuplua*.h

.include <bsd.port.mk>
