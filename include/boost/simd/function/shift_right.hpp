//==================================================================================================
/*!
  @file

  @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_SHIFT_RIGHT_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_SHIFT_RIGHT_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{

 /*!

    @ingroup group-operator
    This function object returns the first operand shifted right by the second
    that must be of integer type and of the same number
    of elements as the first parameter

    Infix notation can be used with operator '>>'

      @see  shift_left, shr, rshl, rshr, rol, ror

   @par Example:

     @snippet shift_right.cpp shift_right

   @par Possible output:

     @snippet shift_right.txt shift_right

  **/
  Value shift_right(Value const & x, IntegerValue const& n);
} }
#endif

#include <boost/simd/function/scalar/shift_right.hpp>
#include <boost/simd/function/simd/shift_right.hpp>

#endif
