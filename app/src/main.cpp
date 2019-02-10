//
// Copyright (c) 2016 Marat Abrarov (abrarov@gmail.com)
//
// Distributed under the MIT License. (See accompanying LICENSE)
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

#include "foo_bar.h"

#if defined(WIN32)
int _tmain(int /*argc*/, _TCHAR* /*argv*/[])
#else
int main(int /*argc*/, char* /*argv*/[])
#endif
{
  try
  {
    dependency_test::app::foo();
    dependency_test::app::bar();
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