#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=mingw32-gcc
CCC=mingw32-g++
CXX=mingw32-g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=MinGW-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/game/sources/MiMapa.o \
	${OBJECTDIR}/inicia.o \
	${OBJECTDIR}/src/actor.o \
	${OBJECTDIR}/src/caja.o \
	${OBJECTDIR}/src/colision.o \
	${OBJECTDIR}/src/controlador.o \
	${OBJECTDIR}/src/fisica.o \
	${OBJECTDIR}/src/game.o \
	${OBJECTDIR}/src/juego.o \
	${OBJECTDIR}/src/linea.o \
	${OBJECTDIR}/src/mapa.o \
	${OBJECTDIR}/src/objeto.o \
	${OBJECTDIR}/src/peon.o \
	${OBJECTDIR}/src/punto.o \
	${OBJECTDIR}/src/rapsody.o \
	${OBJECTDIR}/src/s_image.o \
	${OBJECTDIR}/src/tiempo.o \
	${OBJECTDIR}/src/transformacion.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=-lalleg

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/bin.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/bin.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/bin ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/game/sources/MiMapa.o: game/sources/MiMapa.cpp
	${MKDIR} -p ${OBJECTDIR}/game/sources
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -Igame/includes -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/sources/MiMapa.o game/sources/MiMapa.cpp

${OBJECTDIR}/inicia.o: inicia.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -Igame/includes -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/inicia.o inicia.cpp

${OBJECTDIR}/src/actor.o: src/actor.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -Igame/includes -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/actor.o src/actor.cpp

${OBJECTDIR}/src/caja.o: src/caja.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -Igame/includes -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/caja.o src/caja.cpp

${OBJECTDIR}/src/colision.o: src/colision.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -Igame/includes -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/colision.o src/colision.cpp

${OBJECTDIR}/src/controlador.o: src/controlador.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -Igame/includes -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/controlador.o src/controlador.cpp

${OBJECTDIR}/src/fisica.o: src/fisica.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -Igame/includes -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/fisica.o src/fisica.cpp

${OBJECTDIR}/src/game.o: src/game.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -Igame/includes -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/game.o src/game.cpp

${OBJECTDIR}/src/juego.o: src/juego.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -Igame/includes -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/juego.o src/juego.cpp

${OBJECTDIR}/src/linea.o: src/linea.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -Igame/includes -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/linea.o src/linea.cpp

${OBJECTDIR}/src/mapa.o: src/mapa.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -Igame/includes -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/mapa.o src/mapa.cpp

${OBJECTDIR}/src/objeto.o: src/objeto.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -Igame/includes -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/objeto.o src/objeto.cpp

${OBJECTDIR}/src/peon.o: src/peon.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -Igame/includes -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/peon.o src/peon.cpp

${OBJECTDIR}/src/punto.o: src/punto.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -Igame/includes -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/punto.o src/punto.cpp

${OBJECTDIR}/src/rapsody.o: src/rapsody.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -Igame/includes -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/rapsody.o src/rapsody.cpp

${OBJECTDIR}/src/s_image.o: src/s_image.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -Igame/includes -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/s_image.o src/s_image.cpp

${OBJECTDIR}/src/tiempo.o: src/tiempo.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -Igame/includes -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tiempo.o src/tiempo.cpp

${OBJECTDIR}/src/transformacion.o: src/transformacion.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -Iinclude -Igame/includes -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/transformacion.o src/transformacion.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
