//
// Copyright (c) 2016 Marat Abrarov (abrarov@gmail.com)
//
// Distributed under the MIT License. (See accompanying LICENSE)
//

#include <iostream>
#include <static_lib_b.h>

void dependency_test::lib_b::foo()
{
  std::cout << "dependency_test::lib_b::foo" << std::endl;
}

void dependency_test::lib_b::bar()
{
  std::cout << "dependency_test::lib_b::bar" << std::endl;
}
