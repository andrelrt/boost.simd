//==================================================================================================
/**
  Copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
**/
//==================================================================================================

#ifndef BOOST_SIMD_FUNCTION_SIMD_ABS_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_SIMD_ABS_HPP_INCLUDED

#include <boost/simd/function/scalar/abs.hpp>
#include <boost/simd/arch/common/generic/function/autodispatcher.hpp>
#include <boost/simd/arch/common/simd/function/abs.hpp>

#if defined(BOOST_HW_SIMD_X86_OR_AMD_AVAILABLE)
#  if BOOST_HW_SIMD_X86_OR_AMD >= BOOST_HW_SIMD_X86_SSSE3_VERSION
#    include <boost/simd/arch/x86/ssse3/simd/function/abs.hpp>
#  endif
#  if BOOST_HW_SIMD_X86_OR_AMD >= BOOST_HW_SIMD_X86_AVX2_VERSION
#    include <boost/simd/arch/x86/avx2/simd/function/abs.hpp>
#  endif
#endif

#endif
