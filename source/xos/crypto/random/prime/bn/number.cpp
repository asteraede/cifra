///////////////////////////////////////////////////////////////////////
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
///   File: number.cpp
///
/// Author: $author$
///   Date: 4/22/2022
///////////////////////////////////////////////////////////////////////
#include "xos/crypto/random/prime/bn/number.hpp"

#if !defined(XOS_CRYPTO_RANDOM_PRIME_BN_NUMBER_INSTANCE)
///#define XOS_CRYPTO_RANDOM_PRIME_BN_NUMBER_INSTANCE
#endif /// !defined(XOS_CRYPTO_RANDOM_PRIME_BN_NUMBER_INSTANCE)

namespace xos {
namespace crypto {
namespace random {
namespace prime {
namespace bn {

///  Class: numbert
#if defined(XOS_CRYPTO_RANDOM_PRIME_BN_NUMBER_INSTANCE)
static number the_number;
#endif /// defined(XOS_CRYPTO_RANDOM_PRIME_BN_NUMBER_INSTANCE)


} /// namespace bn
} /// namespace prime
} /// namespace random
} /// namespace crypto
} /// namespace xos