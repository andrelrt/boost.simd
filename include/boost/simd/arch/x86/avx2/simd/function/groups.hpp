//==================================================================================================
/**
  Copyright 2016 Numscale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
**/
//==================================================================================================
#ifndef BOOST_SIMD_ARCH_X86_SSE4_1_SIMD_FUNCTION_GROUPS_HPP_INCLUDED
#define BOOST_SIMD_ARCH_X86_SSE4_1_SIMD_FUNCTION_GROUPS_HPP_INCLUDED

#include <boost/simd/detail/overload.hpp>
#include <boost/simd/constant/constant.hpp>
#include <boost/simd/function/simd/bitwise_cast.hpp>
#include <boost/simd/function/simd/shift_right.hpp>
#include <boost/simd/function/saturated.hpp>
#include <boost/dispatch/meta/downgrade.hpp>

namespace boost { namespace simd { namespace ext
{
  namespace bd =  boost::dispatch;
  namespace bs =  boost::simd;

  BOOST_DISPATCH_OVERLOAD ( group_
                          , (typename A0)
                          , bs::avx2_
                          , bs::saturated_tag
                          , bs::pack_<bd::int16_<A0>, bs::avx_>
                          , bs::pack_<bd::int16_<A0>, bs::avx_>
                         )
  {
    BOOST_FORCEINLINE bd::downgrade_t<A0>
    operator()(const saturated_tag &,const A0 & a0, const A0 & a1 ) const BOOST_NOEXCEPT
    {
      return _mm256_permute4x64_epi64(_mm256_packs_epi16(a0, a1), 0xD8);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( group_
                          , (typename A0)
                          , bs::avx2_
                          , bs::saturated_tag
                          , bs::pack_<bd::uint16_<A0>, bs::avx_>
                          , bs::pack_<bd::uint16_<A0>, bs::avx_>
                         )
  {
    BOOST_FORCEINLINE bd::downgrade_t<A0>
    operator()(const saturated_tag &,const A0 & a0, const A0 & a1 ) const BOOST_NOEXCEPT
    {
      return _mm256_permute4x64_epi64(_mm256_packus_epi16( (a0 & 0x7FFF) | shri(a0 & 0xF000, 1)
                                                         , (a1 & 0x7FFF) | shri(a1 & 0xF000, 1)
                                                         )
                                     , 0xD8
                                     );
    }
  };

  BOOST_DISPATCH_OVERLOAD ( group_
                          , (typename A0)
                          , bs::avx2_
                          , bs::saturated_tag
                          , bs::pack_<bd::int32_<A0>, bs::avx_>
                          , bs::pack_<bd::int32_<A0>, bs::avx_>
                         )
  {
    BOOST_FORCEINLINE bd::downgrade_t<A0>
    operator()(const saturated_tag &,const A0 & a0, const A0 & a1 ) const BOOST_NOEXCEPT
    {
      return _mm256_permute4x64_epi64(_mm256_packs_epi32(a0, a1), 0xD8);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( group_
                          , (typename A0)
                          , bs::avx2_
                          , bs::saturated_tag
                          , bs::pack_<bd::uint32_<A0>, bs::avx_>
                          , bs::pack_<bd::uint32_<A0>, bs::avx_>
                         )
  {
    BOOST_FORCEINLINE bd::downgrade_t<A0>
    operator()(const saturated_tag &,const A0 & a0, const A0 & a1 ) const BOOST_NOEXCEPT
    {
      return _mm256_permute4x64_epi64(_mm256_packus_epi32( (a0 & 0x7FFFFFFF) | shri(a0 & 0xF0000000, 1)
                                                         , (a1 & 0x7FFFFFFF) | shri(a1 & 0xF0000000, 1)
                                                         )
                                     , 0xD8
                                     );
    }
  };
} } }

#endif
