#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<32> diff_u_generated_compute(hw_uint<32*2> u){ return u.get<32, 1>()-u.get<32, 0>(); }

hw_uint<32> diff_r_generated_compute(hw_uint<32*2> u){ return u.get<32, 0>()-u.get<32, 1>(); }

hw_uint<32> diff_l_generated_compute(hw_uint<32*2> u){ return u.get<32, 1>()-u.get<32, 0>(); }

hw_uint<32> diff_d_generated_compute(hw_uint<32*2> u){ return u.get<32, 0>()-u.get<32, 1>(); }

hw_uint<32> one_input_mag_generated_compute(hw_uint<32*1> diff_d, hw_uint<32*1> diff_l, hw_uint<32*1> diff_r, hw_uint<32*1> diff_u){ return diff_u.get<32, 0>()+diff_d.get<32, 0>()+diff_l.get<32, 0>()+diff_r.get<32, 0>(); }



// Compute unit banks...
  // u_update_0 unroll factor: 1
hw_uint<32>  id_unrolled_1(hw_uint<32>& u_off_chip) {
  hw_uint<32> whole_result;
  hw_uint<32> lane_0_u_off_chip;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_u_off_chip, u_off_chip.extract<0, 31>());
  auto result_0 = id(lane_0_u_off_chip);
  set_at<0, 32>(whole_result, result_0);
  return whole_result;
}

  // diff_u_update_0 unroll factor: 1
hw_uint<32>  diff_u_generated_compute_unrolled_1(hw_uint<64>& u) {
  hw_uint<32> whole_result;
  hw_uint<64> lane_0_u;
  // Need offset: 0, -1
  set_at<0, 64>(lane_0_u, u.extract<0, 31>());
  // Need offset: 0, 0
  set_at<32, 64>(lane_0_u, u.extract<32, 63>());
  auto result_0 = diff_u_generated_compute(lane_0_u);
  set_at<0, 32>(whole_result, result_0);
  return whole_result;
}

  // diff_r_update_0 unroll factor: 1
hw_uint<32>  diff_r_generated_compute_unrolled_1(hw_uint<64>& u) {
  hw_uint<32> whole_result;
  hw_uint<64> lane_0_u;
  // Need offset: 0, 0
  set_at<0, 64>(lane_0_u, u.extract<0, 31>());
  // Need offset: 1, 0
  set_at<32, 64>(lane_0_u, u.extract<32, 63>());
  auto result_0 = diff_r_generated_compute(lane_0_u);
  set_at<0, 32>(whole_result, result_0);
  return whole_result;
}

  // diff_l_update_0 unroll factor: 1
hw_uint<32>  diff_l_generated_compute_unrolled_1(hw_uint<64>& u) {
  hw_uint<32> whole_result;
  hw_uint<64> lane_0_u;
  // Need offset: -1, 0
  set_at<0, 64>(lane_0_u, u.extract<0, 31>());
  // Need offset: 0, 0
  set_at<32, 64>(lane_0_u, u.extract<32, 63>());
  auto result_0 = diff_l_generated_compute(lane_0_u);
  set_at<0, 32>(whole_result, result_0);
  return whole_result;
}

  // diff_d_update_0 unroll factor: 1
hw_uint<32>  diff_d_generated_compute_unrolled_1(hw_uint<64>& u) {
  hw_uint<32> whole_result;
  hw_uint<64> lane_0_u;
  // Need offset: 0, 0
  set_at<0, 64>(lane_0_u, u.extract<0, 31>());
  // Need offset: 0, 1
  set_at<32, 64>(lane_0_u, u.extract<32, 63>());
  auto result_0 = diff_d_generated_compute(lane_0_u);
  set_at<0, 32>(whole_result, result_0);
  return whole_result;
}

  // one_input_mag_update_0 unroll factor: 1
hw_uint<32>  one_input_mag_generated_compute_unrolled_1(hw_uint<32>& diff_d, hw_uint<32>& diff_l, hw_uint<32>& diff_r, hw_uint<32>& diff_u) {
  hw_uint<32> whole_result;
  hw_uint<32> lane_0_diff_d;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_diff_d, diff_d.extract<0, 31>());
  hw_uint<32> lane_0_diff_l;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_diff_l, diff_l.extract<0, 31>());
  hw_uint<32> lane_0_diff_r;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_diff_r, diff_r.extract<0, 31>());
  hw_uint<32> lane_0_diff_u;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_diff_u, diff_u.extract<0, 31>());
  auto result_0 = one_input_mag_generated_compute(lane_0_diff_d, lane_0_diff_l, lane_0_diff_r, lane_0_diff_u);
  set_at<0, 32>(whole_result, result_0);
  return whole_result;
}

