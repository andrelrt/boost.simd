//==================================================================================================
/*!

  Copyright 2015 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#include <boost/simd/pack.hpp>
#include <boost/simd/function/simd/aligned_load.hpp>
#include <simd_test.hpp>
#include <boost/align/aligned_allocator.hpp>
#include <vector>

template<class T, std::size_t Alignment = 1>
using aligned_vector = std::vector<T, boost::alignment::aligned_allocator<T, Alignment> >;

template <typename T, std::size_t N, typename Env>
void test(Env& $)
{
  namespace bs = boost::simd;
  using p_t = bs::pack<T, N>;

  aligned_vector<T, 32 > a1(3*N);
  STF_TYPE_IS(p_t, decltype(bs::aligned_load<p_t>(&a1[0])));
  STF_TYPE_IS(p_t, decltype(bs::aligned_load<p_t>(&a1[0], std::size_t())));

  for(std::size_t i = 0; i < 3*N; ++i){
    a1[i] = T(i);
  }

  p_t aa1(&a1[0], &a1[N]);
  STF_IEEE_EQUAL(bs::aligned_load<p_t>(&a1[0]), aa1);

}

STF_CASE_TPL( "Check aligned_load behavior with all types", STF_NUMERIC_TYPES )
{
  namespace bs = boost::simd;
  using p_t = bs::pack<T>;
  static const std::size_t N = p_t::static_size;
  test<T, N>($);
  test<T, N/2>($);
  test<T, N*2>($);
}

