//
// Copyright (c) 2016 Marat Abrarov (abrarov@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#if defined(WIN32)
#include <tchar.h>
#include <windows.h>
#endif

#include <cstdlib>
#include <exception>
#include <iostream>

#include <static_lib_a.h>
#include <static_lib_b.h>
#include <static_lib_c.h>
#include <static_lib_x.h>
#include <static_lib_y.h>

namespace {

void foo()
{
  std::cout << "app foo" << std::endl;
}

} // anonymous namespace

#if defined(WIN32)
int _tmain(int /*argc*/, _TCHAR* /*argv*/[])
#else
int main(int /*argc*/, char* /*argv*/[])
#endif
{
  try
  {
    foo();
    dependency_test::lib_a::foo();
    dependency_test::lib_b::foo();
    dependency_test::lib_c::foo();
    dependency_test::lib_x::foo();
    dependency_test::lib_y::bar();
    return EXIT_SUCCESS;
  }
  catch (const std::exception& e)
  {
    std::cerr << "Error: " << e.what() << std::endl;
  }
  catch (...)
  {
    std::cerr << "Unexpected error" << std::endl;
  }
  return EXIT_FAILURE;
}