//==================================================================================================
/**
  Copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
**/
//==================================================================================================
#include <boost/simd/function/insert.hpp>
#include <boost/simd/detail/unroll.hpp>
#include <boost/simd/litteral.hpp>
#include <boost/simd/pack.hpp>
#include <simd_test.hpp>
#include <array>

namespace bs = boost::simd;
namespace bd = boost::dispatch;

using namespace bs::literal;

template<typename A, typename P, typename... N>
void f( nsm::list<N...> const&, A& a, P& p)
{
  using T = typename P::value_type;
  BOOST_SIMD_LOCAL_UNROLL( a[N::value] = T(N::value+1) );
  BOOST_SIMD_LOCAL_UNROLL( (bs::insert(p, N{}, T(N::value+1))) );
}

template <typename T, std::size_t N, typename Env>
void test_st(Env& $)
{
  bs::pack<T, N>  p;
  std::array<T,N> a;

  f( nsm::range<std::size_t, 0, N>(),a,p);

  bs::pack<T, N> ref(&a[0], &a[0] + N);
  STF_EQUAL(ref, p);
}

STF_CASE_TPL("Check static insert on pack" , STF_NUMERIC_TYPES)
{
  static const std::size_t N = boost::simd::pack<T>::static_size;

  test_st<T, N>($);
  test_st<T, N/2>($);
  test_st<T, N*2>($);
}

template <typename T, std::size_t N, typename Env>
void test_lt(Env& $)
{
  bs::pack<T, N>  p;
  std::array<T,N> a;

  for(std::size_t i=0;i<N;++i)
    a[i] = p[i] = T(0);

  a[0] = T(1);
  insert(p,0_c, 1);

  if(N>1) { a[1] = T(2); insert(p,1_c, 2); }
  if(N>3) { a[3] = T(4); insert(p,3_c, 4); }
  if(N>7) { a[7] = T(8); insert(p,7_c, 8); }

  bs::pack<T, N> ref(&a[0], &a[0] + N);
  STF_EQUAL(ref, p);
}

STF_CASE_TPL("Check static insert on pack using literals" , STF_NUMERIC_TYPES)
{
  static const std::size_t N = boost::simd::pack<T>::static_size;

  test_lt<T, N>($);
  test_lt<T, N/2>($);
  test_lt<T, N*2>($);
}
