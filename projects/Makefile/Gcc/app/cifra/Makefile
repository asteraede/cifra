########################################################################
# Copyright (c) 1988-2022 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: Makefile
#
# Author: $author$
#   Date: 10/15/2022
#
# generic Makefile for framework cifra executable cifra
########################################################################
# Depends: bn;mp;rostra;nadir;fila;crono

#
# target
#
cifra_exe_EXETARGET = cifra

########################################################################

#
# user c++ flags
#
cifra_exe_USRCXXFLAGS += \
${cifra_USRCXXFLAGS} \

#
# user defines
#
cifra_exe_USRDEFINES += \
${cifra_USRDEFINES} \
-DDEFAULT_LOGGING_LEVELS_ERROR \
-DXOS_CONSOLE_MAIN_MAIN \


#
# user includes
#
cifra_exe_USRINCLUDES += \
${cifra_USRINCLUDES} \

#
# user libdirs
#
cifra_exe_USRLIBDIRS += \
${cifra_USRLIBDIRS} \

########################################################################

#
# executable .c sources
#
#cifra_exe_EXE_C_SOURCES += \
#${CIFRA_SRC}/xos/app/console/cifra/main.c \

#
# executable .cc sources
#
#cifra_exe_EXE_CC_SOURCES += \
#${CIFRA_SRC}/xos/app/console/cifra/main.cc \

#
# executable .cxx sources
#
#cifra_exe_EXE_CXX_SOURCES += \
#${CIFRA_SRC}/xos/app/console/cifra/main.cxx \

#
# executable .cpp sources
#
cifra_exe_EXE_CPP_SOURCES += \
${CIFRA_SRC}/xos/app/console/cifra/main_opt.cpp \
${CIFRA_SRC}/xos/app/console/cifra/main.cpp \

#
# executable .m sources
#
#cifra_exe_EXE_M_SOURCES += \
#${CIFRA_SRC}/xos/app/console/cifra/main.m \

#
# executable .mm sources
#
#cifra_exe_EXE_MM_SOURCES += \
#${CIFRA_SRC}/xos/app/console/cifra/main.mm \


########################################################################

#
# executable libraries
#
cifra_exe_LIBS += \
${cifra_LIBS}

