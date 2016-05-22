//==================================================================================================
/**
  Copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
**/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_SIMD_BITWISE_SELECT_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_SIMD_BITWISE_SELECT_HPP_INCLUDED

#include <boost/simd/function/scalar/bitwise_select.hpp>
#include <boost/simd/arch/common/generic/function/autodispatcher.hpp>
#include <boost/simd/arch/common/generic/function/bitwise_select.hpp>

#if defined(BOOST_HW_SIMD_X86)
#  if BOOST_HW_SIMD_X86 >= BOOST_HW_SIMD_X86_AMD_XOP_VERSION
#    include <boost/simd/arch/x86/xop/simd/function/bitwise_select.hpp>
#  endif
#endif

#if defined(BOOST_HW_SIMD_PPC)
#  if BOOST_HW_SIMD_PPC >= BOOST_HW_SIMD_PPC_VMX_VERSION
// #    include <boost/simd/arch/power/vmx/simd/function/bitwise_select.hpp>
#  endif
#endif

#endif
