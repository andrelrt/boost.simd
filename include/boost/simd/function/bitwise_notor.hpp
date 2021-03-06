//==================================================================================================
/*!
  @file

  @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_BITWISE_NOTOR_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_BITWISE_NOTOR_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{

 /*!
    @ingroup group-bitwise
    This function object computes the bitwise not or of its parameters.
    The operands must share the same bit size.
    The result type is the one of the first operand.

   @par Example:

     @snippet bitwise_notor.cpp bitwise_notor

   @par Possible output:

     @snippet bitwise_notor.txt bitwise_notor

  **/
  T0 bitwise_notor(T0 const &x, T1 const& y);
} }
#endif

#include <boost/simd/function/scalar/bitwise_notor.hpp>
#include <boost/simd/function/simd/bitwise_notor.hpp>

#endif
