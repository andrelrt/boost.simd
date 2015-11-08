//==================================================================================================
/*!
  @file

  @copyright 2015 NumScale SAS
  @copyright 2015 J.T. Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_ARCH_COMMON_FUNCTION_GENERIC_ASIND_HPP_INCLUDED
#define BOOST_SIMD_ARCH_COMMON_FUNCTION_GENERIC_ASIND_HPP_INCLUDED

#include <boost/simd/function/simd/asin.hpp>
#include <boost/simd/function/simd/indeg.hpp>
#include <boost/dispatch/function/overload.hpp>
#include <boost/config.hpp>

namespace boost { namespace simd { namespace ext
{
  namespace bd = boost::dispatch;
  namespace bs = boost::simd;
  BOOST_DISPATCH_OVERLOAD ( asind_
                          , (typename A0)
                             , bd::cpu_
                            , bd::generic_< bd::floating_<A0> >
                            )
  {
    BOOST_FORCEINLINE A0 operator() ( A0 const& a0) const BOOST_NOEXCEPT
    {
      return indeg(asin(a0));
    }
  };
} } }


#endif
