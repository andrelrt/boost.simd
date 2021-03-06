//==================================================================================================
/*!
  @file

  @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_INRAD_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_INRAD_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{

 /*!
    @ingroup group-trigonometric
    This function object returns the convert degree to radian.

   @par Example:

     @snippet inrad.cpp inrad

   @par Possible output:

     @snippet inrad.txt inrad

  **/
  Value inrad(Value const & x);
} }
#endif

#include <boost/simd/function/scalar/inrad.hpp>
#include <boost/simd/function/simd/inrad.hpp>

#endif
