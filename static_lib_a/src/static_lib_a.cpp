//
// Copyright (c) 2019 Marat Abrarov (abrarov@gmail.com)
//
// Distributed under the MIT License (see accompanying LICENSE)
//

#include <iostream>
#include <static_lib_a.h>

void dependency_test::lib_a::foo()
{
  std::cout << "dependency_test::lib_a::foo" << std::endl;
}

void dependency_test::lib_a::bar()
{
  std::cout << "dependency_test::lib_a::bar" << std::endl;
}
