///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2022 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: main.cpp
///
/// Author: $author$
///   Date: 1/28/2022
///////////////////////////////////////////////////////////////////////
#include "xos/app/console/mp/main.hpp"

#if defined(XOS_CONSOLE_MAIN_MAIN)
#if !defined(XOS_APP_CONSOLE_MP_MAIN_INSTANCE)
#define XOS_APP_CONSOLE_MP_MAIN_INSTANCE
#endif /// !defined(XOS_APP_CONSOLE_MP_MAIN_INSTANCE)
#endif /// defined(XOS_CONSOLE_MAIN_MAIN)

#if defined(XOS_APP_CONSOLE_MP_MAIN_INSTANCE)
#if !defined(NO_XOS_CONSOLE_MAIN_MAIN)
#include "xos/console/main_main.cpp"
#endif /// !defined(NO_XOS_CONSOLE_MAIN_MAIN)
#endif /// defined(XOS_APP_CONSOLE_MP_MAIN_INSTANCE)

namespace xos {
namespace app {
namespace console {
namespace mp {

/// class maint
#if defined(XOS_APP_CONSOLE_MP_MAIN_INSTANCE)
static main the_main;
#endif /// defined(XOS_APP_CONSOLE_MP_MAIN_INSTANCE)

} /// namespace mp
} /// namespace console
} /// namespace app
} /// namespace xos
