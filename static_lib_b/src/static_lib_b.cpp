//
// Copyright (c) 2019 Marat Abrarov (abrarov@gmail.com)
//
// Distributed under the MIT License (see accompanying LICENSE)
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
