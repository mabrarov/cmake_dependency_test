//
// Copyright (c) 2016 Marat Abrarov (abrarov@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#include <iostream>
#include <static_lib_a.h>
#include <static_lib_x.h>

void dependency_test::lib_x::foo()
{
  std::cout << "dependency_test::lib_x::foo" << std::endl;
}

void dependency_test::lib_x::bar()
{
  std::cout << "dependency_test::lib_x::bar begin" << std::endl;
  dependency_test::lib_a::bar();
  std::cout << "dependency_test::lib_x::bar end" << std::endl;
}