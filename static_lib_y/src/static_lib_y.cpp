//
// Copyright (c) 2019 Marat Abrarov (abrarov@gmail.com)
//
// Distributed under the MIT License (see accompanying LICENSE)
//

#include <iostream>
#include <static_lib_a.h>
#include <static_lib_y.h>

void dependency_test::lib_y::foo()
{
  std::cout << "dependency_test::lib_ya::foo" << std::endl;
}

void dependency_test::lib_y::bar()
{
  std::cout << "dependency_test::lib_y::bar begin" << std::endl;
  dependency_test::lib_a::bar();
  std::cout << "dependency_test::lib_y::bar end" << std::endl;
}
