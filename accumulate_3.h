#pragma once

#include "hw_classes.h"

#include <iostream>

using namespace std;

static inline
int accumulate_3(hw_uint<96>& in) {
  hw_uint<32> a = in.extract<0, 31>();
  hw_uint<32> b = in.extract<32, 63>();
  hw_uint<32> c = in.extract<64, 95>();

<<<<<<< HEAD
  //cout << "a = " << a << endl;
  //cout << "b = " << b << endl;
  //cout << "c = " << c << endl;
  int res = (a + b + c).to_int();
  //cout << "res = " << res << endl;
=======
  int res = (a + b + c).to_int();
>>>>>>> origin/master
  return res;
}