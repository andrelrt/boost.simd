//==================================================================================================
/*!
  @file

  @copyright 2016 NumScale SAS
  @copyright 2016 J.T. Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_ARCH_COMMON_SIMD_FUNCTION_REMCEIL_HPP_INCLUDED
#define BOOST_SIMD_ARCH_COMMON_SIMD_FUNCTION_REMCEIL_HPP_INCLUDED
#include <boost/simd/detail/overload.hpp>

#include <boost/simd/meta/hierarchy/simd.hpp>
#include <boost/simd/function/simd/div.hpp>
#include <boost/simd/function/simd/fnms.hpp>
#include <boost/simd/function/simd/ceil.hpp>
#include <boost/simd/function/simd/is_nez.hpp>
#include <boost/simd/function/simd/multiplies.hpp>
#include <boost/simd/function/simd/if_minus.hpp>
#include <boost/simd/function/simd/if_nan_else.hpp>
#include <boost/simd/function/simd/logical_or.hpp>


namespace boost { namespace simd { namespace ext
{
   namespace bd = boost::dispatch;
   namespace bs = boost::simd;
   BOOST_DISPATCH_OVERLOAD(rem_
                          , (typename A0, typename X)
                          , bd::cpu_
                          , bs::tag::ceil_
                          , bs::pack_<bd::int_<A0>, X>
                          , bs::pack_<bd::int_<A0>, X>
                          )
   {
      BOOST_FORCEINLINE A0 operator()(bd::functor<bs::tag::ceil_> const&
                                     , const A0& a0, const A0& a1) const BOOST_NOEXCEPT
      {
        return if_minus(is_nez(a1), a0, div(ceil,a0,a1)*a1);
      }
   };
   BOOST_DISPATCH_OVERLOAD(rem_
                          , (typename A0, typename X)
                          , bd::cpu_
                          , bs::fast_tag
                          , bs::tag::ceil_
                          , bs::pack_<bd::signed_<A0>, X>
                          , bs::pack_<bd::signed_<A0>, X>
                          )
   {
      BOOST_FORCEINLINE A0 operator()(const fast_tag &
                                     , bd::functor<bs::tag::ceil_> const&
                                     , const A0& a0, const A0& a1) const BOOST_NOEXCEPT
      {
        return fnms(div(ceil, a0,a1), a1, a0);
      }
   };
  BOOST_DISPATCH_OVERLOAD(rem_
                          , (typename A0, typename X)
                          , bd::cpu_
                          , bs::tag::ceil_
                          , bs::pack_<bd::floating_<A0>, X>
                          , bs::pack_<bd::floating_<A0>, X>
                          )
   {
      BOOST_FORCEINLINE A0 operator()(bd::functor<bs::tag::ceil_> const&
                                     , const A0& a0, const A0& a1) const BOOST_NOEXCEPT
      {
        return if_nan_else(logical_or(is_invalid(a1),is_invalid(a0)) ,
                           if_nan_else(is_eqz(a1),
                                       if_minus(is_nez(a1), a0, div(ceil, a0,a1)*a1)
                                      )
                          );
      }
   };

} } }

#endif
