//==================================================================================================
/**
  Copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
**/
//==================================================================================================
#include <boost/simd/function/extract.hpp>
#include <boost/simd/detail/unroll.hpp>
#include <boost/simd/litteral.hpp>
#include <boost/simd/pack.hpp>
#include <simd_test.hpp>
#include <array>

namespace bs = boost::simd;
namespace bd = boost::dispatch;

using namespace bs::literal;

template <typename T, std::size_t N, typename Env, typename Idx>
void unroll_step ( bs::pack<T,N> const& p, std::array<T,N> const& ref, Idx const&, Env& $)
{
  STF_EQUAL(bs::extract<Idx::value>(p), ref[Idx::value]);
}

template <typename T, std::size_t N, typename Env, typename... Idx>
void unroll ( bs::pack<T,N> const& p, std::array<T,N> const& ref
            , nsm::list<Idx...> const&, Env& $
            )
{
  BOOST_SIMD_LOCAL_UNROLL( unroll_step(p,ref,Idx{},$) );
}

template <typename T, std::size_t N, typename Env>
void test_st(Env& $)
{
  namespace bs = boost::simd;
  STF_TYPE_IS(T, decltype(bs::extract<0>(bs::pack<T, N>{})) );

  std::array<T,N> ref;
  for(std::size_t i = 0; i < N; ++i) ref[i] = T(i*2);

  bs::pack<T,N> p(&ref[0], &ref[0]+N);
  unroll(p,ref,nsm::range<std::size_t, 0, N>(),$);
}

STF_CASE_TPL("Check static extract on pack" , STF_NUMERIC_TYPES)
{
  static const std::size_t N = boost::simd::pack<T>::static_size;

  test_st<T, N/2>($);
  test_st<T, N>($);
  test_st<T, N*2>($);
}

template <typename T, std::size_t N, typename Env>
void test_lt(Env& $)
{
  std::array<T,N> ref;
  for(std::size_t i = 0; i < N; ++i) ref[i] = T(i*2);
  bs::pack<T,N> p(&ref[0], &ref[0]+N);

          STF_EQUAL(bs::extract(p, 0_c), ref[0]);
  if(N>1) STF_EQUAL(bs::extract(p, 1_c), ref[1]);
  if(N>3) STF_EQUAL(bs::extract(p, 3_c), ref[3]);
  if(N>7) STF_EQUAL(bs::extract(p, 7_c), ref[7]);
}

STF_CASE_TPL("Check extract on pack using literals" , STF_NUMERIC_TYPES)
{
  static const std::size_t N = boost::simd::pack<T>::static_size;

  test_lt<T, N/2>($);
  test_lt<T, N>($);
  test_lt<T, N*2>($);
}
