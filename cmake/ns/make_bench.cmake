## -------------------------------------------------------------------------------------------------
##                              Copyright 2016 - NumScale SAS
##
##                   Distributed under the Boost Software License, Version 1.0.
##                        See accompanying file LICENSE.txt or copy at
##                            http://www.boost.org/LICENSE_1_0.txt
## -------------------------------------------------------------------------------------------------

include(${NS_CMAKE_ROOT}/ns.cmake)
NS_guard(NS_CMAKE_MAKE_BENCH)
NS_include(compilers)
NS_include(add_target_parent)

## INTERNAL: Setup bench target
## -------------------------------------------------------------------------------------------------
function(_make_bench bench file)
  add_executable(${bench} ${file})
  set_property( TARGET ${bench}
                PROPERTY RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bench"
              )
  set_target_properties ( ${bench} PROPERTIES
                          EXCLUDE_FROM_DEFAULT_BUILD TRUE
                          EXCLUDE_FROM_ALL TRUE
                        )
  if (MAKE_BENCH_TARGET_LINK_LIBRARIES)
      target_link_libraries(${bench} ${MAKE_BENCH_TARGET_LINK_LIBRARIES})
  endif()

  message(STATUS ${bench})
  add_target_parent(${bench})
  add_dependencies(bench ${bench})
endfunction()

## Process a list of source files to generate corresponding bench target and prepend a root name
## -------------------------------------------------------------------------------------------------
function(make_bench root)
  foreach(file ${ARGN})
    string(REPLACE ".cpp" ".bench" base ${file})
    set(bench "${root}.${base}")
    _make_bench(${bench} ${file})
  endforeach()
endfunction()

## Process a list of source files to generate corresponding bench target
## -------------------------------------------------------------------------------------------------
function(make_bench_from_sources)
  foreach(file ${ARGN})
    string(REPLACE ".cpp" ".bench" base ${file})
    string(REPLACE "/" "." bench ${base})
    _make_bench(${bench} ${file})
  endforeach()
endfunction()

