//
// Copyright (c) 2016 Marat Abrarov (abrarov@gmail.com)
//
// Distributed under the MIT License. (See accompanying LICENSE)
//

#include <iostream>
#include <static_lib_c.h>

void dependency_test::lib_c::foo()
{
  std::cout << "dependency_test::lib_c::foo" << std::endl;
}

void dependency_test::lib_c::bar()
{
  std::cout << "dependency_test::lib_c::bar" << std::endl;
}