//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_IS_NOT_EQUAL_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_IS_NOT_EQUAL_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!

    @ingroup group-operator

    Returns True if a0 and a1 are not equal else False.
    Infix notation can be used with operator '!='.


    @par Semantic:

    For every parameters of types respectively T0, T1:

    @code
    as_logical_t<T0> r = is_not_equal(a0,a1);
    @endcode

    is similar to:

    @code
    as_logical_t<T0> r = a0 != a1;
    @endcode

    @par Alias:
    @c ne, @c neq, @c is_neq

    @see  is_equal, is_nez, is_not_equal_with_equal_nans


    @return a logical value

**/
  template<typename T> auto is_not_equal(T const& x) {}

  namespace functional
  {
    /*!
      @ingroup group-arithmetic

      Function object tied to simd::is_not_equal

      @see simd::is_not_equal
    **/
    const boost::dispatch::functor<tag::is_not_equal_> is_not_equal = {};
  }
} }
#endif

#include <boost/simd/function/definition/is_not_equal.hpp>
#include <boost/simd/arch/common/scalar/function/is_not_equal.hpp>
//#include <boost/simd/arch/common/function/simd/is_not_equal.hpp>

#endif