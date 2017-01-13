## -------------------------------------------------------------------------------------------------
##                              Copyright 2017 - NumScale SAS
##
##                   Distributed under the Boost Software License, Version 1.0.
##                        See accompanying file LICENSE.txt or copy at
##                            http://www.boost.org/LICENSE_1_0.txt
## -------------------------------------------------------------------------------------------------

NS_include(make_bench)

set(CMAKE_BUILD_TYPE "Release")

make_bench_from_sources(
  "function/std/log2/float.m10_10.cpp"
  "function/std/log2/double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/reverse/regular.float.m10_10.cpp"
  "function/scalar/reverse/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/bitwise_and/regular.float.m10_10_m10_10.cpp"
  "function/scalar/bitwise_and/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/logical_notor/regular.float.m10_10_m10_10.cpp"
  "function/scalar/logical_notor/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/exp10/regular.float.m10_10.cpp"
  "function/simd/exp10/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/if_zero_else/regular.float.m10_10.cpp"
  "function/simd/if_zero_else/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/atan2d/regular.float.m10_10_m10_10.cpp"
  "function/simd/atan2d/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/meanof/regular.float.m10_10_m10_10.cpp"
  "function/simd/meanof/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/inearbyint/regular.float.m10_10.cpp"
  "function/simd/inearbyint/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/successor/regular.float.m10_10.cpp"
  "function/scalar/successor/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/std/minnum/float.m10_10_m10_10.cpp"
  "function/std/minnum/double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
)

make_bench_from_sources(
  "function/scalar/bitwise_not/regular.float.m10_10_m10_10.cpp"
  "function/scalar/bitwise_not/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/atanh/regular.float.m1_1.cpp"
  "function/simd/atanh/regular.double.m1_1.cpp"
  "function/simd/atanh/raw.float.m1_1.cpp"
  "function/simd/atanh/raw.double.m1_1.cpp"
)

make_bench_from_sources(
  "function/scalar/tand/regular.float.m10_10.cpp"
  "function/scalar/tand/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/sech/regular.float.m1_m10.cpp"
  "function/simd/sech/regular.double.m1_m10.cpp"
)

make_bench_from_sources(
  "function/scalar/fpclassify/regular.float.m10_10.cpp"
  "function/scalar/fpclassify/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/ifnot_minus/regular.float.m10_10_m10_10_m10_10.cpp"
  "function/scalar/ifnot_minus/regular.double.m10_10_m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/if_inc/regular.float.m10_10_m10_10.cpp"
  "function/scalar/if_inc/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/rsqrt/regular.float.0_10000.cpp"
  "function/simd/rsqrt/regular.double.0_10000.cpp"
  "function/simd/rsqrt/raw.float.0_10000.cpp"
  "function/simd/rsqrt/raw.double.0_10000.cpp"
)

make_bench_from_sources(
  "function/scalar/rec/regular.float.m10_10.cpp"
  "function/scalar/rec/regular.double.m10_10.cpp"
  "function/scalar/rec/raw.float.m10_10.cpp"
  "function/scalar/rec/raw.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/any/regular.float.m10_10.cpp"
  "function/simd/any/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/std/log1p/float.m1_10.cpp"
  "function/std/log1p/double.m1_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_denormal/regular.float.m10_10.cpp"
  "function/scalar/is_denormal/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/atan/regular.float.m10_10.cpp"
  "function/simd/atan/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/std/tan/float.m10_10.cpp"
  "function/std/tan/double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/shift_left/regular.float.N.cpp"
  "function/scalar/shift_left/regular.double.N.cpp"
)

make_bench_from_sources(
  "function/simd/safe_min/regular.float.m10_10.cpp"
  "function/simd/safe_min/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/ldexp/regular.float..cpp"
  "function/simd/ldexp/regular.double..cpp"
  "function/simd/ldexp/pedantic.float..cpp"
  "function/simd/ldexp/pedantic.double..cpp"
)

make_bench_from_sources(
  "function/scalar/acoth/regular.float.m1_m10.cpp"
  "function/scalar/acoth/regular.double.m1_m10.cpp"
)

make_bench_from_sources(
  "function/scalar/bitwise_ornot/regular.float.m10_10_m10_10.cpp"
  "function/scalar/bitwise_ornot/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/coth/regular.float.m10_10.cpp"
  "function/scalar/coth/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/sign/regular.float.0_N.cpp"
  "function/scalar/sign/regular.double.0_N.cpp"
)

make_bench_from_sources(
  "function/simd/cospi/regular.float.m10_10.cpp"
  "function/simd/cospi/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/bitget/regular.float..cpp"
  "function/simd/bitget/regular.double..cpp"
)

make_bench_from_sources(
  "function/simd/expm1/regular.float.m10_10.cpp"
  "function/simd/expm1/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/if_allbits_else/regular.float.m10_10_m10_10.cpp"
  "function/simd/if_allbits_else/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/arg/regular.float.m10_10.cpp"
  "function/scalar/arg/regular.double.m10_10.cpp"
  "function/scalar/arg/pedantic.float.m10_10.cpp"
  "function/scalar/arg/pedantic.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/ilog2/regular.float.m10_10.cpp"
  "function/simd/ilog2/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/ifnot_plus/regular.float.m10_10_m10_10_m10_10.cpp"
  "function/simd/ifnot_plus/regular.double.m10_10_m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/std/min/float.m10_10_m10_10.cpp"
  "function/std/min/double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_normal/regular.float.m10_10.cpp"
  "function/simd/is_normal/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/bitwise_cast/regular.float.a.cpp"
  "function/simd/bitwise_cast/regular.double.a.cpp"
)

make_bench_from_sources(
  "function/scalar/erfc/regular.float.m10_10.cpp"
  "function/scalar/erfc/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/fpclassify/regular.float.m10_10.cpp"
  "function/simd/fpclassify/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_inf/regular.float.m10_10.cpp"
  "function/simd/is_inf/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/fma/regular.float.m10_10_m10_10_m10_10.cpp"
  "function/scalar/fma/regular.double.m10_10_m10_10_m10_10.cpp"
  "function/scalar/fma/pedantic.float.m10_10_m10_10_m10_10.cpp"
  "function/scalar/fma/pedantic.double.m10_10_m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/round/regular.float.m10_10.cpp"
  "function/scalar/round/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/std/nearbyint/float.m10_10.cpp"
  "function/std/nearbyint/double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_ngez/regular.float.m10_10.cpp"
  "function/scalar/is_ngez/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/sqrt/regular.float.0_10.cpp"
  "function/scalar/sqrt/regular.double.0_10.cpp"
  "function/scalar/sqrt/raw.float.0_10.cpp"
  "function/scalar/sqrt/raw.double.0_10.cpp"
)

make_bench_from_sources(
  "function/simd/rrol/regular.float.m10_10.cpp"
  "function/simd/rrol/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/floor/regular.float.m10_10.cpp"
  "function/scalar/floor/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/acospi/regular.float.m1_1.cpp"
  "function/simd/acospi/regular.double.m1_1.cpp"
)

make_bench_from_sources(
  "function/scalar/inrad/regular.float.m10_10.cpp"
  "function/scalar/inrad/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/csch/regular.float.m10_10.cpp"
  "function/simd/csch/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/average/regular.float.m10_10_m10_10.cpp"
  "function/simd/average/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_not_less_equal/regular.float.m10_10_m10_10.cpp"
  "function/simd/is_not_less_equal/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/none/regular.float.m10_10.cpp"
  "function/simd/none/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/round/regular.float.m10_10.cpp"
  "function/simd/round/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/min/regular.float.m10_10_m10_10.cpp"
  "function/scalar/min/regular.double.m10_10_m10_10.cpp"
  "function/scalar/min/pedantic.float.m10_10_m10_10.cpp"
  "function/scalar/min/pedantic.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_finite/regular.float.m10_10.cpp"
  "function/simd/is_finite/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/compare_less_equal/regular.float.m10_10_m10_10.cpp"
  "function/scalar/compare_less_equal/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/if_else_allbits/regular.float.m10_10_m10_10.cpp"
  "function/simd/if_else_allbits/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/ilog2/regular.float.m10_10.cpp"
  "function/scalar/ilog2/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/ldexp/regular.float.N.cpp"
  "function/scalar/ldexp/regular.double.N.cpp"
  "function/scalar/ldexp/pedantic.float.N.cpp"
  "function/scalar/ldexp/pedantic.double.N.cpp"
)

make_bench_from_sources(
  "function/scalar/hmsb/regular.float.m10_10.cpp"
  "function/scalar/hmsb/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/isincluded/regular.float.m10_10_m10_10.cpp"
  "function/scalar/isincluded/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/std/round/float.m10_10.cpp"
  "function/std/round/double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/dec/regular.float.m10_10.cpp"
  "function/scalar/dec/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/safe_max/regular.float.m10_10.cpp"
  "function/scalar/safe_max/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/tofloat/regular.float.m10_10.cpp"
  "function/simd/tofloat/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/inearbyint/regular.float.m10_10.cpp"
  "function/scalar/inearbyint/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/bitwise_notor/regular.float.m10_10_m10_10.cpp"
  "function/scalar/bitwise_notor/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_flint/regular.float.m10_10.cpp"
  "function/scalar/is_flint/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/acsc/regular.float.m10_m1.cpp"
  "function/simd/acsc/regular.double.m10_m1.cpp"
)

make_bench_from_sources(
  "function/scalar/cscpi/regular.float.m10_10.cpp"
  "function/scalar/cscpi/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/std/gammaln/float.m10_10.cpp"
  "function/std/gammaln/double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/sincosd/regular.float.m10_10.cpp"
  "function/simd/sincosd/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/bitwise_ornot/regular.float.m10_10_m10_10.cpp"
  "function/simd/bitwise_ornot/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/log1p/regular.float.m10_10.cpp"
  "function/simd/log1p/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/sqrt1pm1/regular.float.m10_10.cpp"
  "function/scalar/sqrt1pm1/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/exprecnegc/regular.float.m10_10.cpp"
  "function/scalar/exprecnegc/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/minmag/regular.float.m10_10_m10_10.cpp"
  "function/simd/minmag/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_ord/regular.float.m10_10_m10_10.cpp"
  "function/scalar/is_ord/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/acsch/regular.float.m10_m1.cpp"
  "function/scalar/acsch/regular.double.m10_m1.cpp"
)

make_bench_from_sources(
  "function/simd/acos/regular.float.m1_1.cpp"
  "function/simd/acos/regular.double.m1_1.cpp"
)

make_bench_from_sources(
  "function/simd/dot/regular.float.m10_10_m10_10.cpp"
  "function/simd/dot/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/std/abs/float.m10_10.cpp"
  "function/std/abs/double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/reversebits/regular.int8_t.valmin_valmax.cpp"
  "function/scalar/reversebits/regular.int16_t.valmin_valmax.cpp"
)

make_bench_from_sources(
  "function/scalar/is_negative/regular.float.m10_10.cpp"
  "function/scalar/is_negative/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/if_inc/regular.float.m10_10_m10_10.cpp"
  "function/simd/if_inc/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/acosd/regular.float.m1_1.cpp"
  "function/simd/acosd/regular.double.m1_1.cpp"
)

make_bench_from_sources(
  "function/std/exp/float.m10_10.cpp"
  "function/std/exp/double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/acospi/regular.float.m1_1.cpp"
  "function/scalar/acospi/regular.double.m1_1.cpp"
)

make_bench_from_sources(
  "function/scalar/if_else_allbits/regular.float.m10_10_m10_10.cpp"
  "function/scalar/if_else_allbits/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/pow/regular.float.m10_10_m10_10.cpp"
  "function/simd/pow/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/std/remquo/float.m10_10_m10_10.cpp"
  "function/std/remquo/double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/maxmag/regular.float.m10_10_m10_10.cpp"
  "function/scalar/maxmag/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/compare_equal/regular.float.m10_10_m10_10.cpp"
  "function/scalar/compare_equal/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/frexp/regular.float.m10_10.cpp"
  "function/simd/frexp/regular.double.m10_10.cpp"
  "function/simd/frexp/pedantic.float.m10_10.cpp"
  "function/simd/frexp/pedantic.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/sinhcosh/regular.float.m10_10.cpp"
  "function/simd/sinhcosh/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/bitwise_andnot/regular.float.m10_10_m10_10.cpp"
  "function/scalar/bitwise_andnot/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/sinhcosh/regular.float.m10_10.cpp"
  "function/scalar/sinhcosh/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/conj/regular.float.m10_10.cpp"
  "function/scalar/conj/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_nlez/regular.float.m10_10.cpp"
  "function/scalar/is_nlez/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/fnma/regular.float.m10_10_m10_10_m10_10.cpp"
  "function/scalar/fnma/regular.double.m10_10_m10_10_m10_10.cpp"
  "function/scalar/fnma/pedantic.float.m10_10_m10_10_m10_10.cpp"
  "function/scalar/fnma/pedantic.double.m10_10_m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/sincospi/regular.float.m10_10.cpp"
  "function/scalar/sincospi/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_less_equal/regular.float.m10_10_m10_10.cpp"
  "function/simd/is_less_equal/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/dist/regular.float.m10_10_m10_10.cpp"
  "function/simd/dist/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/safe_min/regular.float.m10_10.cpp"
  "function/scalar/safe_min/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_ngtz/regular.float.m10_10.cpp"
  "function/scalar/is_ngtz/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/dist/regular.float.m10_10_m10_10.cpp"
  "function/scalar/dist/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/acscpi/regular.float.m10_m1.cpp"
  "function/simd/acscpi/regular.double.m10_m1.cpp"
)

make_bench_from_sources(
  "function/simd/ifnot_minus/regular.float.m10_10_m10_10_m10_10.cpp"
  "function/simd/ifnot_minus/regular.double.m10_10_m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/bitfloating/regular.float.m10_10.cpp"
  "function/simd/bitfloating/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/maxnummag/regular.float.m10_10_m10_10.cpp"
  "function/simd/maxnummag/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/sech/regular.float.m1_1.cpp"
  "function/scalar/sech/regular.double.m1_1.cpp"
)

make_bench_from_sources(
  "function/scalar/two_split/regular.float.m10_10_m10_10.cpp"
  "function/scalar/two_split/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/unary_minus/regular.float.m10_10.cpp"
  "function/scalar/unary_minus/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/sinh/regular.float.m10_10.cpp"
  "function/scalar/sinh/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/genmaskc/regular.float.m10_10.cpp"
  "function/simd/genmaskc/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/ctz/regular.float.m10_10.cpp"
  "function/scalar/ctz/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/negif/regular.float.m10_10_m10_10.cpp"
  "function/scalar/negif/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/remquo/regular.float.m10_10_m10_10.cpp"
  "function/simd/remquo/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_greater/regular.float.m10_10_m10_10.cpp"
  "function/simd/is_greater/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_positive/regular.float.m10_10.cpp"
  "function/scalar/is_positive/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/pow_abs/regular.float.m10_10_m10_10.cpp"
  "function/simd/pow_abs/regular.double.m10_10_m10_10.cpp"
  "function/simd/pow_abs/raw.float.m10_10_m10_10.cpp"
  "function/simd/pow_abs/raw.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_not_equal_with_equal_nans/regular.float.m10_10_m10_10.cpp"
  "function/simd/is_not_equal_with_equal_nans/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_not_greater/regular.float.m10_10_m10_10.cpp"
  "function/scalar/is_not_greater/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/asind/regular.float.m1_1.cpp"
  "function/simd/asind/regular.double.m1_1.cpp"
)

make_bench_from_sources(
  "function/scalar/acot/regular.float.m10_10.cpp"
  "function/scalar/acot/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/rol/regular.float.m10_10_m10_10.cpp"
  "function/scalar/rol/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_nlt/regular.float.m10_10.cpp"
  "function/scalar/is_nlt/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/erf/regular.float.m10_10.cpp"
  "function/simd/erf/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/bitwise_select/regular.float.m10_10_m10_10_m10_10.cpp"
  "function/simd/bitwise_select/regular.double.m10_10_m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/average/regular.float.m10_10_m10_10.cpp"
  "function/scalar/average/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/cosd/regular.float.m10_10.cpp"
  "function/scalar/cosd/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/shift_right/regular.float.N.cpp"
  "function/scalar/shift_right/regular.double.N.cpp"
)

make_bench_from_sources(
  "function/simd/indeg/regular.float.m10_10.cpp"
  "function/simd/indeg/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/bitwise_xor/regular.float.m10_10_m10_10.cpp"
  "function/simd/bitwise_xor/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/bitwise_notand/regular.float.m10_10_m10_10.cpp"
  "function/simd/bitwise_notand/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/bitwise_or/regular.float.m10_10_m10_10.cpp"
  "function/scalar/bitwise_or/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/logical_or/regular.float.m10_10_m10_10.cpp"
  "function/scalar/logical_or/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/touint/regular.float.m10_10.cpp"
  "function/simd/touint/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/bitinteger/regular.float.m10_10.cpp"
  "function/scalar/bitinteger/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/if_zero_else_one/regular.float.m10_10.cpp"
  "function/simd/if_zero_else_one/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/expm1/regular.float.m10_10.cpp"
  "function/scalar/expm1/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/std/trunc/float.m10_10.cpp"
  "function/std/trunc/double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_less_equal/regular.float.m10_10_m10_10.cpp"
  "function/scalar/is_less_equal/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/abs/regular.float.m10_10.cpp"
  "function/scalar/abs/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/rrol/regular.float.m10_10.cpp"
  "function/scalar/rrol/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/tanh/regular.float.m10_10.cpp"
  "function/scalar/tanh/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_imag/regular.float.m10_10.cpp"
  "function/scalar/is_imag/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_gtz/regular.float.m10_10.cpp"
  "function/simd/is_gtz/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/acsc/regular.float.m10_m1.cpp"
  "function/scalar/acsc/regular.double.m10_m1.cpp"
)

make_bench_from_sources(
  "function/simd/copysign/regular.float.m10_10_m10_10.cpp"
  "function/simd/copysign/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/sinc/regular.float.m10_10.cpp"
  "function/simd/sinc/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/firstbitunset/regular.float.m10_10.cpp"
  "function/scalar/firstbitunset/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/sinhc/regular.float.m10_10.cpp"
  "function/simd/sinhc/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_not_greater/regular.float.m10_10_m10_10.cpp"
  "function/simd/is_not_greater/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/shr/regular.float.N.cpp"
  "function/simd/shr/regular.double.N.cpp"
)

make_bench_from_sources(
  "function/scalar/signnz/regular.float.m10_10.cpp"
  "function/scalar/signnz/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/secpi/regular.float.m10_10.cpp"
  "function/scalar/secpi/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/tan/regular.float.m10_10.cpp"
  "function/scalar/tan/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/acotd/regular.float.m10_10.cpp"
  "function/scalar/acotd/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/iround/regular.float.m10_10.cpp"
  "function/scalar/iround/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_not_less/regular.float.m10_10_m10_10.cpp"
  "function/scalar/is_not_less/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/pow_abs/regular.float.m10_10_m10_10.cpp"
  "function/scalar/pow_abs/regular.double.m10_10_m10_10.cpp"
  "function/scalar/pow_abs/raw.float.m10_10_m10_10.cpp"
  "function/scalar/pow_abs/raw.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/logical_xor/regular.float.m10_10_m10_10.cpp"
  "function/simd/logical_xor/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/predecessor/regular.float.m10_10.cpp"
  "function/simd/predecessor/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/logical_notand/regular.float.m10_10_m10_10.cpp"
  "function/scalar/logical_notand/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/shr/regular.float.N.cpp"
  "function/scalar/shr/regular.double.N.cpp"
)

make_bench_from_sources(
  "function/std/erfc/float.m10_10.cpp"
  "function/std/erfc/double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_not_nan/regular.float.m10_10.cpp"
  "function/scalar/is_not_nan/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/std/ceil/float.m10_10.cpp"
  "function/std/ceil/double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/frac/regular.float.m10_10.cpp"
  "function/simd/frac/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/logical_ornot/regular.float.m10_10_m10_10.cpp"
  "function/scalar/logical_ornot/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/ifloor/regular.float.m10_10.cpp"
  "function/scalar/ifloor/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/bitwise_notand/regular.float.m10_10_m10_10.cpp"
  "function/scalar/bitwise_notand/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_lessgreater/regular.float.m10_10_m10_10.cpp"
  "function/simd/is_lessgreater/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/all/regular.float.m10_10.cpp"
  "function/simd/all/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/logical_or/regular.float.m10_10_m10_10.cpp"
  "function/simd/logical_or/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_nan/regular.float.m10_10.cpp"
  "function/scalar/is_nan/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/negifnot/regular.float.m10_10_m10_10.cpp"
  "function/scalar/negifnot/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/interleave_second/regular.float.m10_10_m10_10.cpp"
  "function/simd/interleave_second/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/majority/regular.float.m10_10_m10_10_m10_10.cpp"
  "function/simd/majority/regular.double.m10_10_m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/compare_not_equal/regular.float.m10_10_m10_10.cpp"
  "function/simd/compare_not_equal/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/cbrt/regular.float.m10_10.cpp"
  "function/scalar/cbrt/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/two_add/regular.float.m10_10_m10_10.cpp"
  "function/simd/two_add/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/cotpi/regular.float.m10_10.cpp"
  "function/scalar/cotpi/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/rem_pio2_straight/regular.float.m10_10.cpp"
  "function/scalar/rem_pio2_straight/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_not_greater_equal/regular.float.m10_10_m10_10.cpp"
  "function/simd/is_not_greater_equal/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/asecpi/regular.float.m10_m1.cpp"
  "function/scalar/asecpi/regular.double.m10_m1.cpp"
)

make_bench_from_sources(
  "function/simd/if_else_zero/regular.float.m10_10_m10_10.cpp"
  "function/simd/if_else_zero/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/acscpi/regular.float.m10_m1.cpp"
  "function/scalar/acscpi/regular.double.m10_m1.cpp"
)

make_bench_from_sources(
  "function/simd/ceil/regular.float.m10_10.cpp"
  "function/simd/ceil/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_not_infinite/regular.float.m10_10.cpp"
  "function/simd/is_not_infinite/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/complement/regular.float.m10_10.cpp"
  "function/scalar/complement/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/enumerate/regular.float.a.cpp"
  "function/simd/enumerate/regular.double.a.cpp"
)

make_bench_from_sources(
  "function/simd/is_ord/regular.float.m10_10_m10_10.cpp"
  "function/simd/is_ord/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/firstbitset/regular.float.m10_10.cpp"
  "function/simd/firstbitset/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/asinh/regular.float.m1_1.cpp"
  "function/simd/asinh/regular.double.m1_1.cpp"
)

make_bench_from_sources(
  "function/scalar/cot/regular.float.m10_10.cpp"
  "function/scalar/cot/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_unord/regular.float.m10_10_10_10.cpp"
  "function/simd/is_unord/regular.double.m10_10_10_10.cpp"
)

make_bench_from_sources(
  "function/simd/erfc/regular.float.m10_10.cpp"
  "function/simd/erfc/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_not_real/regular.float.m10_10.cpp"
  "function/scalar/is_not_real/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/exp10/regular.float.m10_10.cpp"
  "function/scalar/exp10/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/nthroot/regular.float.2.cpp"
  "function/simd/nthroot/regular.double.2.cpp"
  "function/simd/nthroot/raw.float.2.cpp"
  "function/simd/nthroot/raw.double.2.cpp"
)

make_bench_from_sources(
  "function/std/is_finite/float.m10_10.cpp"
  "function/std/is_finite/double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/compare_greater_equal/regular.float.m10_10_m10_10.cpp"
  "function/simd/compare_greater_equal/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_ngez/regular.float.m10_10.cpp"
  "function/simd/is_ngez/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/atand/regular.float.m10_10.cpp"
  "function/simd/atand/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/dec/regular.float.m10_10.cpp"
  "function/simd/dec/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/sinc/regular.float.m10_10.cpp"
  "function/scalar/sinc/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/sqr_abs/regular.float.m10_10.cpp"
  "function/scalar/sqr_abs/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_equal_with_equal_nans/regular.float.m10_10_m10_10.cpp"
  "function/simd/is_equal_with_equal_nans/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/lookup/regular.float.m10_10.cpp"
  "function/simd/lookup/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/logical_notand/regular.float.m10_10_m10_10.cpp"
  "function/simd/logical_notand/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_greater_equal/regular.float.m10_10_m10_10.cpp"
  "function/simd/is_greater_equal/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_ltz/regular.float.m10_10.cpp"
  "function/scalar/is_ltz/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/conj/regular.float.m10_10.cpp"
  "function/simd/conj/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/modf/regular.float.m10_10.cpp"
  "function/scalar/modf/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/atan2/regular.float.m10_10_m10_10.cpp"
  "function/scalar/atan2/regular.double.m10_10_m10_10.cpp"
  "function/scalar/atan2/pedantic.float.m10_10_m10_10.cpp"
  "function/scalar/atan2/pedantic.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/acotpi/regular.float.m10_10.cpp"
  "function/scalar/acotpi/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/tenpower/regular.float.m10_10.cpp"
  "function/scalar/tenpower/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_not_equal/regular.float.m10_10_m10_10.cpp"
  "function/scalar/is_not_equal/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/atanpi/regular.float.m10_10.cpp"
  "function/scalar/atanpi/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_greater/regular.float.m10_10_m10_10.cpp"
  "function/scalar/is_greater/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/std/ldexp/float.N.cpp"
  "function/std/ldexp/double.N.cpp"
)

make_bench_from_sources(
  "function/scalar/log/regular.float.m10_10.cpp"
  "function/scalar/log/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/std/log10/float.m10_10.cpp"
  "function/std/log10/double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/bitwise_select/regular.float.m10_10_m10_10_m10_10.cpp"
  "function/scalar/bitwise_select/regular.double.m10_10_m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/rem_pio2/regular.float.m10_10.cpp"
  "function/simd/rem_pio2/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/floor/regular.float.m10_10.cpp"
  "function/simd/floor/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/if_one_else_zero/regular.float.m10_10.cpp"
  "function/scalar/if_one_else_zero/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/std/expm1/float.m10_10.cpp"
  "function/std/expm1/double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/genmaskc/regular.float.m10_10.cpp"
  "function/scalar/genmaskc/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/ilogb/regular.float.0_10.cpp"
  "function/simd/ilogb/regular.double.0_10.cpp"
)

make_bench_from_sources(
  "function/scalar/atan/regular.float.m10_10_m10_10.cpp"
  "function/scalar/atan/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/bitfloating/regular.float.m10_10.cpp"
  "function/scalar/bitfloating/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/hypot/regular.float.m10_10_m10_10.cpp"
  "function/simd/hypot/regular.double.m10_10_m10_10.cpp"
  "function/simd/hypot/pedantic.float.m10_10_m10_10.cpp"
  "function/simd/hypot/pedantic.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/atan2d/regular.float.m10_10_m10_10.cpp"
  "function/scalar/atan2d/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/split_multiplies/regular.float.m10_10_m10_10.cpp"
  "function/scalar/split_multiplies/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/std/erf/float.m6_6.cpp"
  "function/std/erf/double.m6_6.cpp"
)

make_bench_from_sources(
  "function/scalar/asec/regular.float.m10_m1.cpp"
  "function/scalar/asec/regular.double.m10_m1.cpp"
)

make_bench_from_sources(
  "function/simd/hi/regular.float.m10_10.cpp"
  "function/simd/hi/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/reversebits/regular.int8_t.valmin_valmax.cpp"
  "function/simd/reversebits/regular.int16_t.valmin_valmax.cpp"
)

make_bench_from_sources(
  "function/simd/csc/regular.float.m10_10.cpp"
  "function/simd/csc/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/sqr/regular.float.m10_10.cpp"
  "function/scalar/sqr/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/isincluded/regular.float.m10_10_m10_10.cpp"
  "function/simd/isincluded/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/ifloor/regular.float.m10_10.cpp"
  "function/simd/ifloor/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/fma/regular.float.m10_10_m10_10_m10_10.cpp"
  "function/simd/fma/regular.double.m10_10_m10_10_m10_10.cpp"
  "function/simd/fma/pedantic.float.m10_10_m10_10_m10_10.cpp"
  "function/simd/fma/pedantic.double.m10_10_m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/bitwise_andnot/regular.float.m10_10_m10_10.cpp"
  "function/simd/bitwise_andnot/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/std/atan/float.m10_10_m10_10.cpp"
  "function/std/atan/double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_nez/regular.float.m10_10.cpp"
  "function/simd/is_nez/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/maxnum/regular.float.m10_10_m10_10.cpp"
  "function/scalar/maxnum/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/bitwise_and/regular.float.m10_10_m10_10.cpp"
  "function/simd/bitwise_and/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_not_real/regular.float.m10_10.cpp"
  "function/simd/is_not_real/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/max/regular.float.m10_10_m10_10.cpp"
  "function/simd/max/regular.double.m10_10_m10_10.cpp"
  "function/simd/max/pedantic.float.m10_10_m10_10.cpp"
  "function/simd/max/pedantic.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/modf/regular.float.m10_10.cpp"
  "function/simd/modf/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/log10/regular.float.0_10000.cpp"
  "function/simd/log10/regular.double.0_10000.cpp"
)

make_bench_from_sources(
  "function/simd/acsch/regular.float.m10_10.cpp"
  "function/simd/acsch/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/nearbyint/regular.float.m10_10.cpp"
  "function/simd/nearbyint/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/gamma/regular.float.0.0_35.0.cpp"
  "function/scalar/gamma/regular.double.0.0_35.0.cpp"
)

make_bench_from_sources(
  "function/simd/negif/regular.float.m10_10_m10_10.cpp"
  "function/simd/negif/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/ror/regular.float.m10_10.cpp"
  "function/scalar/ror/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_real/regular.float.m10_10.cpp"
  "function/simd/is_real/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/rem_pio2_medium/regular.float.m10_10.cpp"
  "function/simd/rem_pio2_medium/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/two_add/regular.float.m10_10.cpp"
  "function/scalar/two_add/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/significants/regular.float.0_N.cpp"
  "function/simd/significants/regular.double.0_N.cpp"
)

make_bench_from_sources(
  "function/scalar/ifnot_dec/regular.float.m10_10_m10_10.cpp"
  "function/scalar/ifnot_dec/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/if_else/regular.float.m10_10_m10_10.cpp"
  "function/scalar/if_else/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_normal/regular.float.m10_10.cpp"
  "function/scalar/is_normal/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/frac/regular.float.m10_10.cpp"
  "function/scalar/frac/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/isincluded_c/regular.float.m10_10_m10_10.cpp"
  "function/scalar/isincluded_c/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/sinhc/regular.float.m10_10.cpp"
  "function/scalar/sinhc/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_flint/regular.float.m10_10.cpp"
  "function/simd/is_flint/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/bitwise_or/regular.float.m10_10_m10_10.cpp"
  "function/simd/bitwise_or/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/ceil/regular.float.m10_10.cpp"
  "function/scalar/ceil/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/bitwise_not/regular.float.m10_10.cpp"
  "function/simd/bitwise_not/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/two_prod/regular.float.m10_10_m10_10.cpp"
  "function/simd/two_prod/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/erf/regular.float.m6_6.cpp"
  "function/scalar/erf/regular.double.m6_6.cpp"
)

make_bench_from_sources(
  "function/scalar/remquo/regular.float.m10_10_m10_10.cpp"
  "function/scalar/remquo/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/ifnot_dec/regular.float.m10_10_m10_10.cpp"
  "function/simd/ifnot_dec/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/unary_minus/regular.float.m10_10.cpp"
  "function/simd/unary_minus/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/complement/regular.float.m10_10.cpp"
  "function/simd/complement/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/sinh/regular.float.m10_10.cpp"
  "function/simd/sinh/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/restricted/regular.float.m10_10.cpp"
  "function/scalar/restricted/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/repeat_lower_half/regular.float.m10_10.cpp"
  "function/simd/repeat_lower_half/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/compare_greater_equal/regular.float.m10_10_m10_10.cpp"
  "function/scalar/compare_greater_equal/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/unary_plus/regular.float.m10_10.cpp"
  "function/simd/unary_plus/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/any/regular.float.m10_10.cpp"
  "function/scalar/any/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/acot/regular.float.m10_10.cpp"
  "function/simd/acot/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_eqz/regular.float.m10_10.cpp"
  "function/simd/is_eqz/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/fnms/regular.float.m10_10_m10_10_m10_10.cpp"
  "function/simd/fnms/regular.double.m10_10_m10_10_m10_10.cpp"
  "function/simd/fnms/pedantic.float.m10_10_m10_10_m10_10.cpp"
  "function/simd/fnms/pedantic.double.m10_10_m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/tofloat/regular.float.m10_10.cpp"
  "function/scalar/tofloat/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/lo/regular.float.m10_10.cpp"
  "function/simd/lo/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/rsqrt/regular.float.0_1000.cpp"
  "function/scalar/rsqrt/regular.double.0_1000.cpp"
  "function/scalar/rsqrt/raw.float.0_1000.cpp"
  "function/scalar/rsqrt/raw.double.0_1000.cpp"
)

make_bench_from_sources(
  "function/simd/toint/regular.float.m10_10.cpp"
  "function/simd/toint/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/trunc/regular.float.m10_10.cpp"
  "function/scalar/trunc/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/interleave_first/regular.float.m10_10_m10_10.cpp"
  "function/simd/interleave_first/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/trunc/regular.float.m10_10.cpp"
  "function/simd/trunc/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/tanh/regular.float.m10_10.cpp"
  "function/simd/tanh/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/sincos/regular.float.m10_10.cpp"
  "function/scalar/sincos/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_positive/regular.float.m10_10.cpp"
  "function/simd/is_positive/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/cospi/regular.float.m10_10.cpp"
  "function/scalar/cospi/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/pow2/regular.float.m10_10.cpp"
  "function/simd/pow2/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/asin/regular.float.m1_1.cpp"
  "function/simd/asin/regular.double.m1_1.cpp"
)

make_bench_from_sources(
  "function/scalar/minnummag/regular.float.m10_10_m10_10.cpp"
  "function/scalar/minnummag/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/cotd/regular.float.m10_10.cpp"
  "function/scalar/cotd/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_nan/regular.float.m10_10.cpp"
  "function/simd/is_nan/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/iceil/regular.float.m10_10.cpp"
  "function/scalar/iceil/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/asech/regular.float.0_1.cpp"
  "function/scalar/asech/regular.double.0_1.cpp"
)

make_bench_from_sources(
  "function/simd/fms/regular.float.m10_10_m10_10_m10_10.cpp"
  "function/simd/fms/regular.double.m10_10_m10_10_m10_10.cpp"
  "function/simd/fms/pedantic.float.m10_10_m10_10_m10_10.cpp"
  "function/simd/fms/pedantic.double.m10_10_m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/logical_not/regular.float.m10_10_m10_10.cpp"
  "function/scalar/logical_not/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/inc/regular.float.m10_10.cpp"
  "function/simd/inc/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/prev/regular.float.m10_10.cpp"
  "function/simd/prev/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/gammaln/regular.float.0_13.cpp"
  "function/simd/gammaln/regular.double.0_13.cpp"
)

make_bench_from_sources(
  "function/scalar/meanof/regular.float.m10_10_m10_10.cpp"
  "function/scalar/meanof/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/sqr_abs/regular.float.m10_10.cpp"
  "function/simd/sqr_abs/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/tand/regular.float.m10_10.cpp"
  "function/simd/tand/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/std/atan2/float.m10_10_m10_10.cpp"
  "function/std/atan2/double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/std/is_normal/float.m10_10.cpp"
  "function/std/is_normal/double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/nbtrue/regular.float.m10_10.cpp"
  "function/scalar/nbtrue/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/ffs/regular.float.m10_10.cpp"
  "function/simd/ffs/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/log2/regular.float.m10_10.cpp"
  "function/scalar/log2/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/group/regular.float.m10_10_m10_10.cpp"
  "function/simd/group/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/tanpi/regular.float.m10_10.cpp"
  "function/scalar/tanpi/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/divides/regular.float.m10_10_m10_10.cpp"
  "function/simd/divides/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_negative/regular.float.m10_10.cpp"
  "function/simd/is_negative/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/maxnummag/regular.float.m10_10_m10_10.cpp"
  "function/scalar/maxnummag/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/nthroot/regular.float.2.cpp"
  "function/scalar/nthroot/regular.double.2.cpp"
  "function/scalar/nthroot/raw.float.2.cpp"
  "function/scalar/nthroot/raw.double.2.cpp"
)

make_bench_from_sources(
  "function/scalar/is_gtz/regular.float.m10_10.cpp"
  "function/scalar/is_gtz/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/compare_not_equal/regular.float.m10_10_m10_10.cpp"
  "function/scalar/compare_not_equal/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/negate/regular.float.m10_10_m10_10.cpp"
  "function/simd/negate/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/bitwise_notor/regular.float.m10_10_m10_10.cpp"
  "function/simd/bitwise_notor/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/firstbitunset/regular.float.m10_10.cpp"
  "function/simd/firstbitunset/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_equal/regular.float.m10_10_m10_10.cpp"
  "function/scalar/is_equal/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/genmask/regular.float.m10_10.cpp"
  "function/simd/genmask/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/ulpdist/regular.float.m10_10_m10_10.cpp"
  "function/simd/ulpdist/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/two_split/regular.float.m10_10.cpp"
  "function/simd/two_split/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/std/exp2/float.m10_10.cpp"
  "function/std/exp2/double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_equal_with_equal_nans/regular.float.m10_10_m10_10.cpp"
  "function/scalar/is_equal_with_equal_nans/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/acotpi/regular.float.m10_10.cpp"
  "function/simd/acotpi/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_invalid/regular.float.m10_10.cpp"
  "function/scalar/is_invalid/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/expx2/regular.float.m10_10.cpp"
  "function/simd/expx2/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/std/is_inf/float.m10_10.cpp"
  "function/std/is_inf/double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/acscd/regular.float.m10_m1.cpp"
  "function/scalar/acscd/regular.double.m10_m1.cpp"
)

make_bench_from_sources(
  "function/std/pow/float.m10_10.cpp"
  "function/std/pow/double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_not_less_equal/regular.float.m10_10_m10_10.cpp"
  "function/scalar/is_not_less_equal/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/next/regular.float.m10_10.cpp"
  "function/scalar/next/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/atan2pi/regular.float.m10_10_m10_10.cpp"
  "function/scalar/atan2pi/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_imag/regular.float.m10_10.cpp"
  "function/simd/is_imag/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/compare_greater/regular.float.m10_10_m10_10.cpp"
  "function/scalar/compare_greater/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_eqz/regular.float.m10_10.cpp"
  "function/scalar/is_eqz/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/inc/regular.float.m10_10.cpp"
  "function/scalar/inc/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/minus/regular.float.m10_10_m10_10.cpp"
  "function/scalar/minus/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/signnz/regular.float.m10_10.cpp"
  "function/simd/signnz/regular.double.m10_10.cpp"
)

make_bench_from_sources(
)

make_bench_from_sources(
  "function/scalar/compare_less/regular.float.m10_10_m10_10.cpp"
  "function/scalar/compare_less/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/nextafter/regular.float.m10_10_m10_10.cpp"
  "function/scalar/nextafter/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_not_denormal/regular.float.m10_10.cpp"
  "function/scalar/is_not_denormal/regular.double.m10_10.cpp"
)

make_bench_from_sources(
)

make_bench_from_sources(
  "function/scalar/expx2/regular.float.m10_10.cpp"
  "function/scalar/expx2/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/secpi/regular.float.m10_10.cpp"
  "function/simd/secpi/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/isincluded_c/regular.float.m10_10_m10_10.cpp"
  "function/simd/isincluded_c/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/sign/regular.float.0_N.cpp"
  "function/simd/sign/regular.double.0_N.cpp"
)

make_bench_from_sources(
  "function/scalar/sincosd/regular.float.m10_10.cpp"
  "function/scalar/sincosd/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/exp2/regular.float.m10_10.cpp"
  "function/scalar/exp2/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/minmod/regular.float.m10_10_m10_10.cpp"
  "function/scalar/minmod/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/if_one_else_zero/regular.float.m10_10.cpp"
  "function/simd/if_one_else_zero/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/mantissa/regular.float.m10_10.cpp"
  "function/scalar/mantissa/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/asecpi/regular.float.m10_m1.cpp"
  "function/simd/asecpi/regular.double.m10_m1.cpp"
)

make_bench_from_sources(
  "function/std/nextafter/float.m10_10_m10_10.cpp"
  "function/std/nextafter/double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/plus/regular.float.m10_10_m10_10.cpp"
  "function/scalar/plus/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/cscd/regular.float.m10_10.cpp"
  "function/scalar/cscd/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/rror/regular.float.m10_10.cpp"
  "function/scalar/rror/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/cscd/regular.float.m10_10.cpp"
  "function/simd/cscd/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/interleave/regular.float.m10_10_m10_10.cpp"
  "function/simd/interleave/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/ifnot_inc/regular.float.m10_10_m10_10.cpp"
  "function/scalar/ifnot_inc/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/bitset/regular.float..cpp"
  "function/scalar/bitset/regular.double..cpp"
)

make_bench_from_sources(
  "function/simd/exprecneg/regular.float.m10_10.cpp"
  "function/simd/exprecneg/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/atan2/regular.float.m10_10_m10_10.cpp"
  "function/simd/atan2/regular.double.m10_10_m10_10.cpp"
  "function/simd/atan2/pedantic.float.m10_10_m10_10.cpp"
  "function/simd/atan2/pedantic.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/logical_xor/regular.float.m10_10_m10_10.cpp"
  "function/scalar/logical_xor/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/maxnum/regular.float.m10_10_m10_10.cpp"
  "function/simd/maxnum/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_nez/regular.float.m10_10.cpp"
  "function/scalar/is_nez/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_odd/regular.float.m10_10.cpp"
  "function/scalar/is_odd/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/minmod/regular.float.m10_10_m10_10.cpp"
  "function/simd/minmod/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_not_finite/regular.float.m10_10.cpp"
  "function/scalar/is_not_finite/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/mantissa/regular.float.m10_10.cpp"
  "function/simd/mantissa/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/std/max/float.m10_10_m10_10.cpp"
  "function/std/max/double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/logical_notor/regular.float.m10_10_m10_10.cpp"
  "function/simd/logical_notor/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/toint/regular.float.m10_10.cpp"
  "function/scalar/toint/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_not_infinite/regular.float.m10_10.cpp"
  "function/scalar/is_not_infinite/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/sin/regular.float.m10_10.cpp"
  "function/scalar/sin/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/minimum/regular.float.m10_10.cpp"
  "function/simd/minimum/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/std/frexp/float.m10_10.cpp"
  "function/std/frexp/double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/copysign/regular.float.m10_10_m10_10.cpp"
  "function/scalar/copysign/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/asec/regular.float.m10_m1.cpp"
  "function/simd/asec/regular.double.m10_m1.cpp"
)

make_bench_from_sources(
  "function/simd/acoth/regular.float.m10_m1.cpp"
  "function/simd/acoth/regular.double.m10_m1.cpp"
)

make_bench_from_sources(
  "function/simd/ctz/regular.float.m10_10.cpp"
  "function/simd/ctz/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/ifnot_plus/regular.float.m10_10_m10_10_m10_10.cpp"
  "function/scalar/ifnot_plus/regular.double.m10_10_m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/rem_pio2_medium/regular.float.m10_10.cpp"
  "function/scalar/rem_pio2_medium/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/clz/regular.float.m10_10.cpp"
  "function/scalar/clz/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/dot/regular.float.m10_10_m10_10.cpp"
  "function/scalar/dot/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_unord/regular.float.m10_10_10_10.cpp"
  "function/scalar/is_unord/regular.double.m10_10_10_10.cpp"
)

make_bench_from_sources(
  "function/simd/coth/regular.float.m10_10.cpp"
  "function/simd/coth/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_less/regular.float.m10_10_m10_10.cpp"
  "function/simd/is_less/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/atan2pi/regular.float.m10_10_m10_10.cpp"
  "function/simd/atan2pi/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/std/sinh/float.m10_10.cpp"
  "function/std/sinh/double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/rem_pio2/regular.float.m10_10.cpp"
  "function/scalar/rem_pio2/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/cscpi/regular.float.m10_10.cpp"
  "function/simd/cscpi/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/sind/regular.float.m10_10.cpp"
  "function/scalar/sind/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/std/is_negative/float.m10_10.cpp"
  "function/std/is_negative/double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_nltz/regular.float.m10_10.cpp"
  "function/simd/is_nltz/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/oneminus/regular.float.m10_10.cpp"
  "function/simd/oneminus/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/std/sqrt/float.0_10.cpp"
  "function/std/sqrt/double.0_10.cpp"
)

make_bench_from_sources(
  "function/simd/multiplies/regular.float.m10_10_m10_10.cpp"
  "function/simd/multiplies/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/arg/regular.float.m10_10.cpp"
  "function/simd/arg/regular.double.m10_10.cpp"
  "function/simd/arg/pedantic.float.m10_10.cpp"
  "function/simd/arg/pedantic.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_lez/regular.float.m10_10.cpp"
  "function/simd/is_lez/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/if_zero_else/regular.float.m10_10.cpp"
  "function/scalar/if_zero_else/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/rem/regular.float.m10_10_m10_10.cpp"
  "function/simd/rem/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/shift_left/regular.float.N.cpp"
  "function/simd/shift_left/regular.double.N.cpp"
)

make_bench_from_sources(
  "function/scalar/bitget/regular.float..cpp"
  "function/scalar/bitget/regular.double..cpp"
)

make_bench_from_sources(
  "function/scalar/is_lez/regular.float.m10_10.cpp"
  "function/scalar/is_lez/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_real/regular.float.m10_10.cpp"
  "function/scalar/is_real/regular.double.m10_10.cpp"
)

make_bench_from_sources(
)

make_bench_from_sources(
  "function/simd/bitset/regular.float..cpp"
  "function/simd/bitset/regular.double..cpp"
)

make_bench_from_sources(
  "function/scalar/broadcast/regular.float.a.cpp"
  "function/scalar/broadcast/regular.double.a.cpp"
)

make_bench_from_sources(
  "function/scalar/fms/regular.float.m10_10_m10_10_m10_10.cpp"
  "function/scalar/fms/regular.double.m10_10_m10_10_m10_10.cpp"
  "function/scalar/fms/pedantic.float.m10_10_m10_10_m10_10.cpp"
  "function/scalar/fms/pedantic.double.m10_10_m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/negatenz/regular.float.m10_10_m10_10.cpp"
  "function/simd/negatenz/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/twopower/regular.float.0_10.cpp"
  "function/simd/twopower/regular.double.0_10.cpp"
)

make_bench_from_sources(
  "function/simd/shift_right/regular.float.N.cpp"
  "function/simd/shift_right/regular.double.N.cpp"
)

make_bench_from_sources(
  "function/simd/rem_pio2_cephes/regular.float.m10_10.cpp"
  "function/simd/rem_pio2_cephes/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/exp2/regular.float.m10_10.cpp"
  "function/simd/exp2/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/nearbyint/regular.float.m10_10.cpp"
  "function/scalar/nearbyint/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_not_denormal/regular.float.m10_10.cpp"
  "function/simd/is_not_denormal/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/broadcast/regular.float.a.cpp"
  "function/simd/broadcast/regular.double.a.cpp"
)

make_bench_from_sources(
  "function/simd/inrad/regular.float.m10_10.cpp"
  "function/simd/inrad/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/cot/regular.float.m10_10.cpp"
  "function/simd/cot/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/nextafter/regular.float.m10_10_m10_10.cpp"
  "function/simd/nextafter/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/std/acosh/float.1_10.cpp"
  "function/std/acosh/double.1_10.cpp"
)

make_bench_from_sources(
  "function/simd/ifnot_inc/regular.float.m10_10_m10_10.cpp"
  "function/simd/ifnot_inc/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_not_equal_with_equal_nans/regular.float.m10_10_m10_10.cpp"
  "function/scalar/is_not_equal_with_equal_nans/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/clz/regular.float.m10_10.cpp"
  "function/simd/clz/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/regular/regular.float.0_1000.cpp"
  "function/scalar/regular/regular.double.0_1000.cpp"
)

make_bench_from_sources(
)

make_bench_from_sources(
  "function/simd/sind/regular.float.m10_10.cpp"
  "function/simd/sind/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/exprecneg/regular.float.m10_10.cpp"
  "function/scalar/exprecneg/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/logical_andnot/regular.float.m10_10_m10_10.cpp"
  "function/simd/logical_andnot/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/atanh/regular.float.m1_1.cpp"
  "function/scalar/atanh/regular.double.m1_1.cpp"
  "function/scalar/atanh/raw.float.m1_1.cpp"
  "function/scalar/atanh/raw.double.m1_1.cpp"
)

make_bench_from_sources(
)

make_bench_from_sources(
  "function/simd/minnum/regular.float.m10_10_m10_10.cpp"
  "function/simd/minnum/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/multiplies/regular.float.m10_10_m10_10.cpp"
  "function/scalar/multiplies/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/sincpi/regular.float.m10_10.cpp"
  "function/simd/sincpi/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/cos/regular.float.m10_10.cpp"
  "function/scalar/cos/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/cosd/regular.float.m10_10.cpp"
  "function/simd/cosd/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/compare_less_equal/regular.float.m10_10_m10_10.cpp"
  "function/simd/compare_less_equal/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/ilogb/regular.float.m10_10.cpp"
  "function/scalar/ilogb/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_ngtz/regular.float.m10_10.cpp"
  "function/simd/is_ngtz/regular.double.m10_10.cpp"
)

make_bench_from_sources(
)

make_bench_from_sources(
  "function/simd/maxmag/regular.float.m10_10_m10_10.cpp"
  "function/simd/maxmag/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/exp/regular.float.m10_10.cpp"
  "function/scalar/exp/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_invalid/regular.float.m10_10.cpp"
  "function/simd/is_invalid/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/cotpi/regular.float.m10_10.cpp"
  "function/simd/cotpi/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/cbrt/regular.float.m10_10.cpp"
  "function/simd/cbrt/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_gez/regular.float.m10_10.cpp"
  "function/scalar/is_gez/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/acotd/regular.float.m10_10.cpp"
  "function/simd/acotd/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/reverse/regular.float.m10_10.cpp"
  "function/simd/reverse/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/std/asin/float.m1_1.cpp"
  "function/std/asin/double.m1_1.cpp"
)

make_bench_from_sources(
  "function/scalar/asin/regular.float.m1_1.cpp"
  "function/scalar/asin/regular.double.m1_1.cpp"
)

make_bench_from_sources(
  "function/simd/successor/regular.float.m10_10.cpp"
  "function/simd/successor/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/std/is_lessgreater/float.m10_10_m10_10.cpp"
  "function/std/is_lessgreater/double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/ffs/regular.float.m10_10.cpp"
  "function/scalar/ffs/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/sincpi/regular.float.m10_10.cpp"
  "function/scalar/sincpi/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_not_less/regular.float.m10_10_m10_10.cpp"
  "function/simd/is_not_less/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/divides/regular.float.m10_10_m10_10.cpp"
  "function/scalar/divides/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/indeg/regular.float.m10_10.cpp"
  "function/scalar/indeg/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_equal/regular.float.m10_10_m10_10.cpp"
  "function/simd/is_equal/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/if_dec/regular.float.m10_10_m10_10.cpp"
  "function/simd/if_dec/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_ltz/regular.float.m10_10.cpp"
  "function/simd/is_ltz/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_nltz/regular.float.m10_10.cpp"
  "function/scalar/is_nltz/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/atand/regular.float.m10_10.cpp"
  "function/scalar/atand/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/std/fma/float.m10_10_m10_10_m10_10.cpp"
  "function/std/fma/double.m10_10_m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/negatenz/regular.float.m10_10_m10_10.cpp"
  "function/scalar/negatenz/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_even/regular.float.m10_10.cpp"
  "function/scalar/is_even/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/rem_pio2_straight/regular.float.m10_10.cpp"
  "function/simd/rem_pio2_straight/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/atanpi/regular.float.m10_10.cpp"
  "function/simd/atanpi/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/cosh/regular.float.m10_10.cpp"
  "function/simd/cosh/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/compare_greater/regular.float.m10_10_m10_10.cpp"
  "function/simd/compare_greater/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/logical_and/regular.float.m10_10_m10_10.cpp"
  "function/simd/logical_and/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/negate/regular.float.m10_10_m10_10.cpp"
  "function/scalar/negate/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/asinh/regular.float.m10_10.cpp"
  "function/scalar/asinh/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_lessgreater/regular.float.m10_10_m10_10.cpp"
  "function/scalar/is_lessgreater/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/asecd/regular.float.m10_m1.cpp"
  "function/simd/asecd/regular.double.m10_m1.cpp"
)

make_bench_from_sources(
  "function/simd/gamma/regular.float.0_35.cpp"
  "function/simd/gamma/regular.double.0_35.cpp"
)

make_bench_from_sources(
  "function/simd/tanpi/regular.float.m10_10.cpp"
  "function/simd/tanpi/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/significants/regular.float.0_N.cpp"
  "function/scalar/significants/regular.double.0_N.cpp"
)

make_bench_from_sources(
  "function/simd/sin/regular.float.m10_10.cpp"
  "function/simd/sin/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/rem/regular.float.m10_10_m10_10.cpp"
  "function/scalar/rem/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/cast/regular.float.a.cpp"
  "function/simd/cast/regular.double.a.cpp"
)

make_bench_from_sources(
  "function/std/sin/float.m10_10.cpp"
  "function/std/sin/double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/log/regular.float.0_10000.cpp"
  "function/simd/log/regular.double.0_10000.cpp"
)

make_bench_from_sources(
  "function/scalar/csc/regular.float.m10_10.cpp"
  "function/scalar/csc/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/quadrant/regular.float.m10_10.cpp"
  "function/simd/quadrant/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/bitinteger/regular.float.m10_10.cpp"
  "function/simd/bitinteger/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/acosh/regular.float.1_10.cpp"
  "function/simd/acosh/regular.double.1_10.cpp"
)

make_bench_from_sources(
  "function/scalar/fnms/regular.float.m10_10_m10_10_m10_10.cpp"
  "function/scalar/fnms/regular.double.m10_10_m10_10_m10_10.cpp"
  "function/scalar/fnms/pedantic.float.m10_10_m10_10_m10_10.cpp"
  "function/scalar/fnms/pedantic.double.m10_10_m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/tan/regular.float.m10_10.cpp"
  "function/simd/tan/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/asech/regular.float.0_1.cpp"
  "function/simd/asech/regular.double.0_1.cpp"
)

make_bench_from_sources(
  "function/scalar/is_not_greater_equal/regular.float.m10_10_m10_10.cpp"
  "function/scalar/is_not_greater_equal/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/deinterleave/regular.float.m10_10_m10_10.cpp"
  "function/simd/deinterleave/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/asecd/regular.float.m10_m1.cpp"
  "function/scalar/asecd/regular.double.m10_m1.cpp"
)

make_bench_from_sources(
  "function/simd/is_nlez/regular.float.m10_10.cpp"
  "function/simd/is_nlez/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/bitwise_cast/regular.float.a.cpp"
  "function/scalar/bitwise_cast/regular.double.a.cpp"
)

make_bench_from_sources(
  "function/scalar/if_zero_else_one/regular.float.m10_10.cpp"
  "function/scalar/if_zero_else_one/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/logical_andnot/regular.float.m10_10_m10_10.cpp"
  "function/scalar/logical_andnot/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/std/cbrt/float.m10_10.cpp"
  "function/std/cbrt/double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/correct_fma/regular.float.m10_10_m10_10_m10_10.cpp"
  "function/scalar/correct_fma/regular.double.m10_10_m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/repeat_upper_half/regular.float.m10_10.cpp"
  "function/simd/repeat_upper_half/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/acos/regular.float.m1_1.cpp"
  "function/scalar/acos/regular.double.m1_1.cpp"
)

make_bench_from_sources(
  "function/simd/sqrt/regular.float.0_1000.cpp"
  "function/simd/sqrt/regular.double.0_1000.cpp"
  "function/simd/sqrt/raw.float.0_1000.cpp"
  "function/simd/sqrt/raw.double.0_1000.cpp"
)

make_bench_from_sources(
  "function/scalar/two_prod/regular.float.m10_10_m10_10.cpp"
  "function/scalar/two_prod/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/majority/regular.float.m10_10_m10_10_m10_10.cpp"
  "function/scalar/majority/regular.double.m10_10_m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/std/maxnum/float.m10_10_m10_10.cpp"
  "function/std/maxnum/double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/acosh/regular.float.1_10.cpp"
  "function/scalar/acosh/regular.double.1_10.cpp"
)

make_bench_from_sources(
  "function/simd/sincos/regular.float.m10_10.cpp"
  "function/simd/sincos/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/sqr/regular.float.m10_10.cpp"
  "function/simd/sqr/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/std/atanh/float.m1_1.cpp"
  "function/std/atanh/double.m1_1.cpp"
)

make_bench_from_sources(
  "function/std/asinh/float.1_10.cpp"
  "function/std/asinh/double.1_10.cpp"
)

make_bench_from_sources(
  "function/scalar/all/regular.float.m10_10.cpp"
  "function/scalar/all/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/sinpi/regular.float.m10_10.cpp"
  "function/simd/sinpi/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/firstbitset/regular.float.m10_10.cpp"
  "function/scalar/firstbitset/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/minnummag/regular.float.m10_10_m10_10.cpp"
  "function/simd/minnummag/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/asinpi/regular.float.m1_1.cpp"
  "function/scalar/asinpi/regular.double.m1_1.cpp"
)

make_bench_from_sources(
  "function/simd/negifnot/regular.float.m10_10_m10_10.cpp"
  "function/simd/negifnot/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/twopower/regular.float.m10_10.cpp"
  "function/scalar/twopower/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/ror/regular.float.m10_10.cpp"
  "function/simd/ror/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/unary_plus/regular.float.m10_10.cpp"
  "function/scalar/unary_plus/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/oneminus/regular.float.m10_10.cpp"
  "function/scalar/oneminus/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/tenpower/regular.float.0_10.cpp"
  "function/simd/tenpower/regular.double.0_10.cpp"
)

make_bench_from_sources(
  "function/scalar/pow/regular.float.m10_10.cpp"
  "function/scalar/pow/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/compare_less/regular.float.m10_10_m10_10.cpp"
  "function/simd/compare_less/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/logical_not/regular.float.m10_10_m10_10.cpp"
  "function/simd/logical_not/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/hypot/regular.float.m10_10_m10_10.cpp"
  "function/scalar/hypot/regular.double.m10_10_m10_10.cpp"
  "function/scalar/hypot/pedantic.float.m10_10_m10_10.cpp"
  "function/scalar/hypot/pedantic.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/next/regular.float.m10_10.cpp"
  "function/simd/next/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/predecessor/regular.float.m10_10.cpp"
  "function/scalar/predecessor/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/pow2/regular.float.m10_10.cpp"
  "function/scalar/pow2/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/lo/regular.float.m10_10.cpp"
  "function/scalar/lo/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/logical_and/regular.float.m10_10_m10_10.cpp"
  "function/scalar/logical_and/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/cos/regular.float.m10_10.cpp"
  "function/simd/cos/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_even/regular.float.m10_10.cpp"
  "function/simd/is_even/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/std/gamma/float.0.0_35.0.cpp"
  "function/std/gamma/double.0.0_35.0.cpp"
)

make_bench_from_sources(
  "function/scalar/if_else_zero/regular.float.m10_10_m10_10.cpp"
  "function/scalar/if_else_zero/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/acosd/regular.float.m1_1.cpp"
  "function/scalar/acosd/regular.double.m1_1.cpp"
)

make_bench_from_sources(
  "function/scalar/log10/regular.float.m10_10.cpp"
  "function/scalar/log10/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/if_else/regular.float.m10_10_m10_10.cpp"
  "function/simd/if_else/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_odd/regular.float.m10_10.cpp"
  "function/simd/is_odd/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/sec/regular.float.m10_10.cpp"
  "function/simd/sec/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/safe_max/regular.float.m10_10.cpp"
  "function/simd/safe_max/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/acscd/regular.float.m10_m1.cpp"
  "function/simd/acscd/regular.double.m10_m1.cpp"
)

make_bench_from_sources(
)

make_bench_from_sources(
)

make_bench_from_sources(
  "function/simd/rol/regular.float.m10_10.cpp"
  "function/simd/rol/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/sec/regular.float.m10_10.cpp"
  "function/scalar/sec/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/secd/regular.float.m10_10.cpp"
  "function/simd/secd/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/secd/regular.float.m10_10.cpp"
  "function/scalar/secd/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/std/acos/float.m1_1.cpp"
  "function/std/acos/double.m1_1.cpp"
)

make_bench_from_sources(
  "function/scalar/asind/regular.float.m1_1.cpp"
  "function/scalar/asind/regular.double.m1_1.cpp"
)

make_bench_from_sources(
  "function/scalar/touint/regular.float.m10_10.cpp"
  "function/scalar/touint/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/prev/regular.float.m10_10.cpp"
  "function/scalar/prev/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/std/hypot/float.m10_10_m10_10.cpp"
  "function/std/hypot/double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/deinterleave_second/regular.float.m10_10_m10_10.cpp"
  "function/simd/deinterleave_second/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/ulpdist/regular.float.m10_10_m10_10.cpp"
  "function/scalar/ulpdist/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/exp/regular.float.m10_10.cpp"
  "function/simd/exp/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/none/regular.float.m10_10.cpp"
  "function/scalar/none/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/if_dec/regular.float.m10_10_m10_10.cpp"
  "function/scalar/if_dec/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_denormal/regular.float.m10_10.cpp"
  "function/simd/is_denormal/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/std/is_nan/float.m10_10.cpp"
  "function/std/is_nan/double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/logical_ornot/regular.float.m10_10_m10_10.cpp"
  "function/simd/logical_ornot/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/minus/regular.float.m10_10_m10_10.cpp"
  "function/simd/minus/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/bitwise_xor/regular.float.m10_10_m10_10.cpp"
  "function/scalar/bitwise_xor/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/iceil/regular.float.m10_10.cpp"
  "function/simd/iceil/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/genmask/regular.float.m10_10.cpp"
  "function/scalar/genmask/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_not_equal/regular.float.m10_10_m10_10.cpp"
  "function/simd/is_not_equal/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_gez/regular.float.m10_10.cpp"
  "function/simd/is_gez/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/enumerate/regular.float.m10_10.cpp"
  "function/scalar/enumerate/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_inf/regular.float.m10_10.cpp"
  "function/scalar/is_inf/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/interleave_even/regular.float.m10_10_m10_10.cpp"
  "function/simd/interleave_even/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/std/cosh/float.m10_10.cpp"
  "function/std/cosh/double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/abs/regular.float.m10_10.cpp"
  "function/simd/abs/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/is_not_nan/regular.float.m10_10.cpp"
  "function/simd/is_not_nan/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/minnum/regular.float.m10_10_m10_10.cpp"
  "function/scalar/minnum/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/minmag/regular.float.m10_10_m10_10.cpp"
  "function/scalar/minmag/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/rror/regular.float.m10_10.cpp"
  "function/simd/rror/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/deinterleave_first/regular.float.m10_10_m10_10.cpp"
  "function/simd/deinterleave_first/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/iround/regular.float.m10_10.cpp"
  "function/simd/iround/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/cosh/regular.float.m10_10.cpp"
  "function/scalar/cosh/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/std/is_unord/float.m10_10_m10_10.cpp"
  "function/std/is_unord/double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/compare_equal/regular.float.m10_10_m10_10.cpp"
  "function/simd/compare_equal/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/min/regular.float.m10_10_m10_10.cpp"
  "function/simd/min/regular.double.m10_10_m10_10.cpp"
  "function/simd/min/pedantic.float.m10_10_m10_10.cpp"
  "function/simd/min/pedantic.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_greater_equal/regular.float.m10_10_m10_10.cpp"
  "function/scalar/is_greater_equal/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/csch/regular.float.m10_10.cpp"
  "function/scalar/csch/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/sqrt1pm1/regular.float.m10_10.cpp"
  "function/simd/sqrt1pm1/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/sinpi/regular.float.m10_10.cpp"
  "function/scalar/sinpi/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/maximum/regular.float.m10_10.cpp"
  "function/simd/maximum/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/asinpi/regular.float.m1_1.cpp"
  "function/simd/asinpi/regular.double.m1_1.cpp"
)

make_bench_from_sources(
  "function/scalar/frexp/regular.float.m10_10.cpp"
  "function/scalar/frexp/regular.double.m10_10.cpp"
  "function/scalar/frexp/pedantic.float.m10_10.cpp"
  "function/scalar/frexp/pedantic.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/lookup/regular.float.m10_10_m10_10.cpp"
  "function/scalar/lookup/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/max/regular.float.m10_10_m10_10.cpp"
  "function/scalar/max/regular.double.m10_10_m10_10.cpp"
  "function/scalar/max/pedantic.float.m10_10_m10_10.cpp"
  "function/scalar/max/pedantic.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/nbtrue/regular.float.m10_10.cpp"
  "function/simd/nbtrue/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/log1p/regular.float.m10_10.cpp"
  "function/scalar/log1p/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/std/cos/float.m10_10.cpp"
  "function/std/cos/double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/gammaln/regular.float.m10_10.cpp"
  "function/scalar/gammaln/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/is_less/regular.float.m10_10_m10_10.cpp"
  "function/scalar/is_less/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/interleave_odd/regular.float.m10_10_m10_10.cpp"
  "function/simd/interleave_odd/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/log2/regular.float.0_1000.cpp"
  "function/simd/log2/regular.double.0_1000.cpp"
)

make_bench_from_sources(
  "function/scalar/is_finite/regular.float.m10_10.cpp"
  "function/scalar/is_finite/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/exprecnegc/regular.float.m10_10.cpp"
  "function/simd/exprecnegc/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/if_allbits_else/regular.float.m10_10_m10_10.cpp"
  "function/scalar/if_allbits_else/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/plus/regular.float.m10_10_m10_10.cpp"
  "function/simd/plus/regular.double.m10_10_m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/hmsb/regular.float.m10_10.cpp"
  "function/simd/hmsb/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/cotd/regular.float.m10_10.cpp"
  "function/simd/cotd/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/hi/regular.float.m10_10.cpp"
  "function/scalar/hi/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/rec/regular.float.m10_10.cpp"
  "function/simd/rec/regular.double.m10_10.cpp"
  "function/simd/rec/raw.float.m10_10.cpp"
  "function/simd/rec/raw.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/sincospi/regular.float.m10_10.cpp"
  "function/simd/sincospi/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/scalar/rem_pio2_cephes/regular.float.m10_10.cpp"
  "function/scalar/rem_pio2_cephes/regular.double.m10_10.cpp"
)

make_bench_from_sources(
  "function/simd/fnma/regular.float.m10_10_m10_10_m10_10.cpp"
  "function/simd/fnma/regular.double.m10_10_m10_10_m10_10.cpp"
  "function/simd/fnma/pedantic.float.m10_10_m10_10_m10_10.cpp"
  "function/simd/fnma/pedantic.double.m10_10_m10_10_m10_10.cpp"
)
