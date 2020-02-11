#include "conv_3x3.h"

#include "hw_classes.h"

<<<<<<< HEAD
struct I_store_I_from_in_12_cache {
	// Capacity: 131
=======
struct I_store_I_from_in_10_cache {
	// Capacity: 33
>>>>>>> origin/master
	// Parition [0, 1) capacity = 1
	fifo<int, 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<int, 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<int, 1> f4;
<<<<<<< HEAD
	// Parition [3, 64) capacity = 61
	fifo<int, 61> f5;
	// Parition [64, 65) capacity = 1
	fifo<int, 1> f6;
	// Parition [65, 66) capacity = 1
	fifo<int, 1> f8;
	// Parition [66, 67) capacity = 1
	fifo<int, 1> f10;
	// Parition [67, 128) capacity = 61
	fifo<int, 61> f11;
	// Parition [128, 129) capacity = 1
	fifo<int, 1> f12;
	// Parition [129, 130) capacity = 1
	fifo<int, 1> f14;
	// Parition [130, 130] capacity = 1
=======
	// Parition [3, 15) capacity = 12
	fifo<int, 12> f5;
	// Parition [15, 16) capacity = 1
	fifo<int, 1> f6;
	// Parition [16, 17) capacity = 1
	fifo<int, 1> f8;
	// Parition [17, 18) capacity = 1
	fifo<int, 1> f10;
	// Parition [18, 30) capacity = 12
	fifo<int, 12> f11;
	// Parition [30, 31) capacity = 1
	fifo<int, 1> f12;
	// Parition [31, 32) capacity = 1
	fifo<int, 1> f14;
	// Parition [32, 32] capacity = 1
>>>>>>> origin/master
	fifo<int, 1> f16;


	inline int peek_0() {
		return f0.back();
	}

	inline int peek_1() {
		return f2.back();
	}

	inline int peek_2() {
		return f4.back();
	}

<<<<<<< HEAD
	inline int peek_63() {
		return f5.back();
	}

	inline int peek_64() {
		return f6.back();
	}

	inline int peek_65() {
		return f8.back();
	}

	inline int peek_66() {
		return f10.back();
	}

	inline int peek_127() {
		return f11.back();
	}

	inline int peek_128() {
		return f12.back();
	}

	inline int peek_129() {
		return f14.back();
	}

	inline int peek_130() {
=======
	inline int peek_14() {
		return f5.back();
	}

	inline int peek_15() {
		return f6.back();
	}

	inline int peek_16() {
		return f8.back();
	}

	inline int peek_17() {
		return f10.back();
	}

	inline int peek_29() {
		return f11.back();
	}

	inline int peek_30() {
		return f12.back();
	}

	inline int peek_31() {
		return f14.back();
	}

	inline int peek_32() {
>>>>>>> origin/master
		return f16.back();
	}



	inline int peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 2) {
			return f4.back();
		}
<<<<<<< HEAD
		if (offset == 63) {
			return f5.back();
		}
		if (offset == 64) {
			return f6.back();
		}
		if (offset == 65) {
			return f8.back();
		}
		if (offset == 66) {
			return f10.back();
		}
		if (offset == 127) {
			return f11.back();
		}
		if (offset == 128) {
			return f12.back();
		}
		if (offset == 129) {
			return f14.back();
		}
		if (offset == 130) {
			return f16.back();
		}
		cout << "Error: Unsupported offset in I: " << offset << endl;
=======
		if (offset == 14) {
			return f5.back();
		}
		if (offset == 15) {
			return f6.back();
		}
		if (offset == 16) {
			return f8.back();
		}
		if (offset == 17) {
			return f10.back();
		}
		if (offset == 29) {
			return f11.back();
		}
		if (offset == 30) {
			return f12.back();
		}
		if (offset == 31) {
			return f14.back();
		}
		if (offset == 32) {
			return f16.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I: " << offset << endl;
#endif // __VIVADO_SYNTH__
>>>>>>> origin/master
		assert(false);
		return 0;

	}

	inline void push(const int value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f11.back());
		f11.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f5.back());
		f5.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};



<<<<<<< HEAD
inline void I_store_I_from_in_12_write(int& I_store_I_from_in_12, I_store_I_from_in_12_cache& I_store_I_from_in_12_delay) {
	I_store_I_from_in_12_delay.push(I_store_I_from_in_12);
}

inline int I_blurred_0_conv_3_30_1_select(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay
, int root, int br, int bc) {
// Pieces...
// { blurred_0_conv_3_30[root = 0, br, bc] : 0 <= br <= 61 and 0 <= bc <= 61 } -> { blurred_0_conv_3_30[root, br, bc] -> 130 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_store_I_from_in_12 = I_store_I_from_in_12_delay.peek_130();
	return value_I_store_I_from_in_12;
}

inline int I_blurred_0_conv_3_30_2_select(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay
, int root, int br, int bc) {
// Pieces...
// { blurred_0_conv_3_30[root = 0, br, bc] : 0 <= br <= 61 and 0 <= bc <= 61 } -> { blurred_0_conv_3_30[root, br, bc] -> 129 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_store_I_from_in_12 = I_store_I_from_in_12_delay.peek_129();
	return value_I_store_I_from_in_12;
}

inline int I_blurred_0_conv_3_30_3_select(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay
, int root, int br, int bc) {
// Pieces...
// { blurred_0_conv_3_30[root = 0, br, bc] : 0 <= br <= 61 and 0 <= bc <= 60 } -> { blurred_0_conv_3_30[root, br, bc] -> 128 }
// 	is always true on iteration domain: 0
// { blurred_0_conv_3_30[root = 0, br, bc = 61] : 0 <= br <= 61 } -> { blurred_0_conv_3_30[root, br, bc] -> (67 + bc) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 1
	int value_I_store_I_from_in_12 = I_store_I_from_in_12_delay.peek_128();
	return value_I_store_I_from_in_12;
}

inline int I_blurred_0_conv_3_30_4_select(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay
, int root, int br, int bc) {
// Pieces...
// { blurred_0_conv_3_30[root = 0, br, bc] : 0 <= br <= 61 and 0 <= bc <= 61 } -> { blurred_0_conv_3_30[root, br, bc] -> 66 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_store_I_from_in_12 = I_store_I_from_in_12_delay.peek_66();
	return value_I_store_I_from_in_12;
}

inline int I_blurred_0_conv_3_30_5_select(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay
, int root, int br, int bc) {
// Pieces...
// { blurred_0_conv_3_30[root = 0, br, bc] : 0 <= br <= 61 and 0 <= bc <= 61 } -> { blurred_0_conv_3_30[root, br, bc] -> 65 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_store_I_from_in_12 = I_store_I_from_in_12_delay.peek_65();
	return value_I_store_I_from_in_12;
}

inline int I_blurred_0_conv_3_30_6_select(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay
, int root, int br, int bc) {
// Pieces...
// { blurred_0_conv_3_30[root = 0, br, bc] : 0 <= br <= 61 and 0 <= bc <= 60 } -> { blurred_0_conv_3_30[root, br, bc] -> 64 }
// 	is always true on iteration domain: 0
// { blurred_0_conv_3_30[root = 0, br, bc = 61] : 0 <= br <= 61 } -> { blurred_0_conv_3_30[root, br, bc] -> (3 + bc) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 1
	int value_I_store_I_from_in_12 = I_store_I_from_in_12_delay.peek_64();
	return value_I_store_I_from_in_12;
}

inline int I_blurred_0_conv_3_30_7_select(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay
, int root, int br, int bc) {
// Pieces...
// { blurred_0_conv_3_30[root = 0, br, bc] : 0 <= br <= 61 and 0 <= bc <= 61 } -> { blurred_0_conv_3_30[root, br, bc] -> 2 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_store_I_from_in_12 = I_store_I_from_in_12_delay.peek_2();
	return value_I_store_I_from_in_12;
}

inline int I_blurred_0_conv_3_30_8_select(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay
, int root, int br, int bc) {
// Pieces...
// { blurred_0_conv_3_30[root = 0, br, bc] : 0 <= br <= 61 and 0 <= bc <= 61 } -> { blurred_0_conv_3_30[root, br, bc] -> 1 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_store_I_from_in_12 = I_store_I_from_in_12_delay.peek_1();
	return value_I_store_I_from_in_12;
}

inline int I_blurred_0_conv_3_30_9_select(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay
, int root, int br, int bc) {
// Pieces...
//	is optimizable constant: 0
	int value_I_store_I_from_in_12 = I_store_I_from_in_12_delay.peek_0();
	return value_I_store_I_from_in_12;
}

// Bundles...
// blurred_0_conv_3_30_read
//	I_blurred_0_conv_3_30_1
//	I_blurred_0_conv_3_30_2
//	I_blurred_0_conv_3_30_3
//	I_blurred_0_conv_3_30_4
//	I_blurred_0_conv_3_30_5
//	I_blurred_0_conv_3_30_6
//	I_blurred_0_conv_3_30_7
//	I_blurred_0_conv_3_30_8
//	I_blurred_0_conv_3_30_9
inline hw_uint<288> I_blurred_0_conv_3_30_read_bundle_read(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay, int root, int br, int bc) {
	hw_uint<288> result;
	int I_blurred_0_conv_3_30_1_res = I_blurred_0_conv_3_30_1_select(I_store_I_from_in_12_delay, root, br, bc);
	set_at<0, 288>(result, I_blurred_0_conv_3_30_1_res);
	int I_blurred_0_conv_3_30_2_res = I_blurred_0_conv_3_30_2_select(I_store_I_from_in_12_delay, root, br, bc);
	set_at<32, 288>(result, I_blurred_0_conv_3_30_2_res);
	int I_blurred_0_conv_3_30_3_res = I_blurred_0_conv_3_30_3_select(I_store_I_from_in_12_delay, root, br, bc);
	set_at<64, 288>(result, I_blurred_0_conv_3_30_3_res);
	int I_blurred_0_conv_3_30_4_res = I_blurred_0_conv_3_30_4_select(I_store_I_from_in_12_delay, root, br, bc);
	set_at<96, 288>(result, I_blurred_0_conv_3_30_4_res);
	int I_blurred_0_conv_3_30_5_res = I_blurred_0_conv_3_30_5_select(I_store_I_from_in_12_delay, root, br, bc);
	set_at<128, 288>(result, I_blurred_0_conv_3_30_5_res);
	int I_blurred_0_conv_3_30_6_res = I_blurred_0_conv_3_30_6_select(I_store_I_from_in_12_delay, root, br, bc);
	set_at<160, 288>(result, I_blurred_0_conv_3_30_6_res);
	int I_blurred_0_conv_3_30_7_res = I_blurred_0_conv_3_30_7_select(I_store_I_from_in_12_delay, root, br, bc);
	set_at<192, 288>(result, I_blurred_0_conv_3_30_7_res);
	int I_blurred_0_conv_3_30_8_res = I_blurred_0_conv_3_30_8_select(I_store_I_from_in_12_delay, root, br, bc);
	set_at<224, 288>(result, I_blurred_0_conv_3_30_8_res);
	int I_blurred_0_conv_3_30_9_res = I_blurred_0_conv_3_30_9_select(I_store_I_from_in_12_delay, root, br, bc);
	set_at<256, 288>(result, I_blurred_0_conv_3_30_9_res);
=======
inline void I_store_I_from_in_10_write(int& I_store_I_from_in_10, I_store_I_from_in_10_cache& I_store_I_from_in_10_delay) {
	I_store_I_from_in_10_delay.push(I_store_I_from_in_10);
}

inline int I_I_blr_conv_3_30_1_select(I_store_I_from_in_10_cache& I_store_I_from_in_10_delay
, int root, int I_blr_r, int I_blr_c) {
// Pieces...
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 32 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_store_I_from_in_10 = I_store_I_from_in_10_delay.peek_32();
	return value_I_store_I_from_in_10;
}

inline int I_I_blr_conv_3_30_2_select(I_store_I_from_in_10_cache& I_store_I_from_in_10_delay
, int root, int I_blr_r, int I_blr_c) {
// Pieces...
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 31 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_store_I_from_in_10 = I_store_I_from_in_10_delay.peek_31();
	return value_I_store_I_from_in_10;
}

inline int I_I_blr_conv_3_30_3_select(I_store_I_from_in_10_cache& I_store_I_from_in_10_delay
, int root, int I_blr_r, int I_blr_c) {
// Pieces...
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 11 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 30 }
// 	is always true on iteration domain: 0
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c = 12] : 0 <= I_blr_r <= 12 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> (18 + I_blr_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 1
	int value_I_store_I_from_in_10 = I_store_I_from_in_10_delay.peek_30();
	return value_I_store_I_from_in_10;
}

inline int I_I_blr_conv_3_30_4_select(I_store_I_from_in_10_cache& I_store_I_from_in_10_delay
, int root, int I_blr_r, int I_blr_c) {
// Pieces...
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 17 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_store_I_from_in_10 = I_store_I_from_in_10_delay.peek_17();
	return value_I_store_I_from_in_10;
}

inline int I_I_blr_conv_3_30_5_select(I_store_I_from_in_10_cache& I_store_I_from_in_10_delay
, int root, int I_blr_r, int I_blr_c) {
// Pieces...
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 16 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_store_I_from_in_10 = I_store_I_from_in_10_delay.peek_16();
	return value_I_store_I_from_in_10;
}

inline int I_I_blr_conv_3_30_6_select(I_store_I_from_in_10_cache& I_store_I_from_in_10_delay
, int root, int I_blr_r, int I_blr_c) {
// Pieces...
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 11 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 15 }
// 	is always true on iteration domain: 0
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c = 12] : 0 <= I_blr_r <= 12 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> (3 + I_blr_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 1
	int value_I_store_I_from_in_10 = I_store_I_from_in_10_delay.peek_15();
	return value_I_store_I_from_in_10;
}

inline int I_I_blr_conv_3_30_7_select(I_store_I_from_in_10_cache& I_store_I_from_in_10_delay
, int root, int I_blr_r, int I_blr_c) {
// Pieces...
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 2 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_store_I_from_in_10 = I_store_I_from_in_10_delay.peek_2();
	return value_I_store_I_from_in_10;
}

inline int I_I_blr_conv_3_30_8_select(I_store_I_from_in_10_cache& I_store_I_from_in_10_delay
, int root, int I_blr_r, int I_blr_c) {
// Pieces...
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 1 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_store_I_from_in_10 = I_store_I_from_in_10_delay.peek_1();
	return value_I_store_I_from_in_10;
}

inline int I_I_blr_conv_3_30_9_select(I_store_I_from_in_10_cache& I_store_I_from_in_10_delay
, int root, int I_blr_r, int I_blr_c) {
// Pieces...
// Always 0
//	is optimizable constant: 0
	int value_I_store_I_from_in_10 = I_store_I_from_in_10_delay.peek_0();
	return value_I_store_I_from_in_10;
}

// Bundles...
// I_blr_conv_3_30_read
//	I_I_blr_conv_3_30_1
//	I_I_blr_conv_3_30_2
//	I_I_blr_conv_3_30_3
//	I_I_blr_conv_3_30_4
//	I_I_blr_conv_3_30_5
//	I_I_blr_conv_3_30_6
//	I_I_blr_conv_3_30_7
//	I_I_blr_conv_3_30_8
//	I_I_blr_conv_3_30_9
inline hw_uint<288> I_I_blr_conv_3_30_read_bundle_read(I_store_I_from_in_10_cache& I_store_I_from_in_10_delay, int root, int I_blr_r, int I_blr_c) {
	hw_uint<288> result;
	int I_I_blr_conv_3_30_1_res = I_I_blr_conv_3_30_1_select(I_store_I_from_in_10_delay, root, I_blr_r, I_blr_c);
	set_at<0, 288>(result, I_I_blr_conv_3_30_1_res);
	int I_I_blr_conv_3_30_2_res = I_I_blr_conv_3_30_2_select(I_store_I_from_in_10_delay, root, I_blr_r, I_blr_c);
	set_at<32, 288>(result, I_I_blr_conv_3_30_2_res);
	int I_I_blr_conv_3_30_3_res = I_I_blr_conv_3_30_3_select(I_store_I_from_in_10_delay, root, I_blr_r, I_blr_c);
	set_at<64, 288>(result, I_I_blr_conv_3_30_3_res);
	int I_I_blr_conv_3_30_4_res = I_I_blr_conv_3_30_4_select(I_store_I_from_in_10_delay, root, I_blr_r, I_blr_c);
	set_at<96, 288>(result, I_I_blr_conv_3_30_4_res);
	int I_I_blr_conv_3_30_5_res = I_I_blr_conv_3_30_5_select(I_store_I_from_in_10_delay, root, I_blr_r, I_blr_c);
	set_at<128, 288>(result, I_I_blr_conv_3_30_5_res);
	int I_I_blr_conv_3_30_6_res = I_I_blr_conv_3_30_6_select(I_store_I_from_in_10_delay, root, I_blr_r, I_blr_c);
	set_at<160, 288>(result, I_I_blr_conv_3_30_6_res);
	int I_I_blr_conv_3_30_7_res = I_I_blr_conv_3_30_7_select(I_store_I_from_in_10_delay, root, I_blr_r, I_blr_c);
	set_at<192, 288>(result, I_I_blr_conv_3_30_7_res);
	int I_I_blr_conv_3_30_8_res = I_I_blr_conv_3_30_8_select(I_store_I_from_in_10_delay, root, I_blr_r, I_blr_c);
	set_at<224, 288>(result, I_I_blr_conv_3_30_8_res);
	int I_I_blr_conv_3_30_9_res = I_I_blr_conv_3_30_9_select(I_store_I_from_in_10_delay, root, I_blr_r, I_blr_c);
	set_at<256, 288>(result, I_I_blr_conv_3_30_9_res);
>>>>>>> origin/master
	return result;
}

// store_I_from_in_write
<<<<<<< HEAD
//	I_store_I_from_in_12
inline void I_store_I_from_in_write_bundle_write(int& /* width = 32*/store_I_from_in_write, I_store_I_from_in_12_cache& I_store_I_from_in_12_delay) {
	I_store_I_from_in_12_write(store_I_from_in_write, I_store_I_from_in_12_delay);
=======
//	I_store_I_from_in_10
inline void I_store_I_from_in_write_bundle_write(int& /* width = 32*/store_I_from_in_write, I_store_I_from_in_10_cache& I_store_I_from_in_10_delay) {
	I_store_I_from_in_10_write(store_I_from_in_write, I_store_I_from_in_10_delay);
>>>>>>> origin/master
}



#include "hw_classes.h"

<<<<<<< HEAD
struct blurred_0_blurred_0_conv_3_30_0_cache {
=======
struct I_blr_I_blr_conv_3_30_0_cache {
>>>>>>> origin/master
	// Capacity: 1
	fifo<int, 1> f;
	inline int peek(const int offset) {
		return f.peek(0 - offset);
	}

	inline int peek_0() {
		return f.peek(0);
	}



	inline void push(const int value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		return f.push(value);
	}

};



<<<<<<< HEAD
inline void blurred_0_blurred_0_conv_3_30_0_write(int& blurred_0_blurred_0_conv_3_30_0, blurred_0_blurred_0_conv_3_30_0_cache& blurred_0_blurred_0_conv_3_30_0_delay) {
	blurred_0_blurred_0_conv_3_30_0_delay.push(blurred_0_blurred_0_conv_3_30_0);
}

inline int blurred_0_out_id0_11_select(blurred_0_blurred_0_conv_3_30_0_cache& blurred_0_blurred_0_conv_3_30_0_delay
, int root, int dr, int dc) {
// Pieces...
//	is optimizable constant: 0
	int value_blurred_0_blurred_0_conv_3_30_0 = blurred_0_blurred_0_conv_3_30_0_delay.peek_0();
	return value_blurred_0_blurred_0_conv_3_30_0;
}

// Bundles...
// blurred_0_conv_3_30_write
//	blurred_0_blurred_0_conv_3_30_0
inline void blurred_0_blurred_0_conv_3_30_write_bundle_write(int& /* width = 32*/blurred_0_conv_3_30_write, blurred_0_blurred_0_conv_3_30_0_cache& blurred_0_blurred_0_conv_3_30_0_delay) {
	blurred_0_blurred_0_conv_3_30_0_write(blurred_0_conv_3_30_write, blurred_0_blurred_0_conv_3_30_0_delay);
}

// out_id0_read
//	blurred_0_out_id0_11
inline int blurred_0_out_id0_read_bundle_read(blurred_0_blurred_0_conv_3_30_0_cache& blurred_0_blurred_0_conv_3_30_0_delay, int root, int dr, int dc) {
	int result;
	int blurred_0_out_id0_11_res = blurred_0_out_id0_11_select(blurred_0_blurred_0_conv_3_30_0_delay, root, dr, dc);
	set_at<0, 32>(result, blurred_0_out_id0_11_res);
=======
inline void I_blr_I_blr_conv_3_30_0_write(int& I_blr_I_blr_conv_3_30_0, I_blr_I_blr_conv_3_30_0_cache& I_blr_I_blr_conv_3_30_0_delay) {
	I_blr_I_blr_conv_3_30_0_delay.push(I_blr_I_blr_conv_3_30_0);
}

inline int I_blr_I_blr_ds_id0_13_select(I_blr_I_blr_conv_3_30_0_cache& I_blr_I_blr_conv_3_30_0_delay
, int root, int I_blr_ds_r, int I_blr_ds_c) {
// Pieces...
// Always 0
//	is optimizable constant: 0
	int value_I_blr_I_blr_conv_3_30_0 = I_blr_I_blr_conv_3_30_0_delay.peek_0();
	return value_I_blr_I_blr_conv_3_30_0;
}

// Bundles...
// I_blr_conv_3_30_write
//	I_blr_I_blr_conv_3_30_0
inline void I_blr_I_blr_conv_3_30_write_bundle_write(int& /* width = 32*/I_blr_conv_3_30_write, I_blr_I_blr_conv_3_30_0_cache& I_blr_I_blr_conv_3_30_0_delay) {
	I_blr_I_blr_conv_3_30_0_write(I_blr_conv_3_30_write, I_blr_I_blr_conv_3_30_0_delay);
}

// I_blr_ds_id0_read
//	I_blr_I_blr_ds_id0_13
inline int I_blr_I_blr_ds_id0_read_bundle_read(I_blr_I_blr_conv_3_30_0_cache& I_blr_I_blr_conv_3_30_0_delay, int root, int I_blr_ds_r, int I_blr_ds_c) {
	int result;
	int I_blr_I_blr_ds_id0_13_res = I_blr_I_blr_ds_id0_13_select(I_blr_I_blr_conv_3_30_0_delay, root, I_blr_ds_r, I_blr_ds_c);
	set_at<0, 32>(result, I_blr_I_blr_ds_id0_13_res);
	return result;
}



#include "hw_classes.h"

struct I_blr_ds_I_blr_ds_id0_12_cache {
	// Capacity: 15
	// Parition [0, 1) capacity = 1
	fifo<int, 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<int, 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<int, 1> f4;
	// Parition [3, 6) capacity = 3
	fifo<int, 3> f5;
	// Parition [6, 7) capacity = 1
	fifo<int, 1> f6;
	// Parition [7, 8) capacity = 1
	fifo<int, 1> f8;
	// Parition [8, 9) capacity = 1
	fifo<int, 1> f10;
	// Parition [9, 12) capacity = 3
	fifo<int, 3> f11;
	// Parition [12, 13) capacity = 1
	fifo<int, 1> f12;
	// Parition [13, 14) capacity = 1
	fifo<int, 1> f14;
	// Parition [14, 14] capacity = 1
	fifo<int, 1> f16;


	inline int peek_0() {
		return f0.back();
	}

	inline int peek_1() {
		return f2.back();
	}

	inline int peek_2() {
		return f4.back();
	}

	inline int peek_5() {
		return f5.back();
	}

	inline int peek_6() {
		return f6.back();
	}

	inline int peek_7() {
		return f8.back();
	}

	inline int peek_8() {
		return f10.back();
	}

	inline int peek_11() {
		return f11.back();
	}

	inline int peek_12() {
		return f12.back();
	}

	inline int peek_13() {
		return f14.back();
	}

	inline int peek_14() {
		return f16.back();
	}



	inline int peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 2) {
			return f4.back();
		}
		if (offset == 5) {
			return f5.back();
		}
		if (offset == 6) {
			return f6.back();
		}
		if (offset == 7) {
			return f8.back();
		}
		if (offset == 8) {
			return f10.back();
		}
		if (offset == 11) {
			return f11.back();
		}
		if (offset == 12) {
			return f12.back();
		}
		if (offset == 13) {
			return f14.back();
		}
		if (offset == 14) {
			return f16.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_blr_ds: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const int value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f11.back());
		f11.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f5.back());
		f5.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};



inline void I_blr_ds_I_blr_ds_id0_12_write(int& I_blr_ds_I_blr_ds_id0_12, I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12_delay) {
	I_blr_ds_I_blr_ds_id0_12_delay.push(I_blr_ds_I_blr_ds_id0_12);
}

inline int I_blr_ds_I_blr_ds_blr_conv_3_30_17_select(I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
// Pieces...
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 14 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_blr_ds_I_blr_ds_id0_12 = I_blr_ds_I_blr_ds_id0_12_delay.peek_14();
	return value_I_blr_ds_I_blr_ds_id0_12;
}

inline int I_blr_ds_I_blr_ds_blr_conv_3_30_18_select(I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
// Pieces...
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 13 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_blr_ds_I_blr_ds_id0_12 = I_blr_ds_I_blr_ds_id0_12_delay.peek_13();
	return value_I_blr_ds_I_blr_ds_id0_12;
}

inline int I_blr_ds_I_blr_ds_blr_conv_3_30_19_select(I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
// Pieces...
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 2 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 12 }
// 	is always true on iteration domain: 0
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c = 3] : 0 <= I_blr_ds_blr_r <= 3 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> (9 + I_blr_ds_blr_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 1
	int value_I_blr_ds_I_blr_ds_id0_12 = I_blr_ds_I_blr_ds_id0_12_delay.peek_12();
	return value_I_blr_ds_I_blr_ds_id0_12;
}

inline int I_blr_ds_I_blr_ds_blr_conv_3_30_20_select(I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
// Pieces...
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 8 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_blr_ds_I_blr_ds_id0_12 = I_blr_ds_I_blr_ds_id0_12_delay.peek_8();
	return value_I_blr_ds_I_blr_ds_id0_12;
}

inline int I_blr_ds_I_blr_ds_blr_conv_3_30_21_select(I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
// Pieces...
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 7 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_blr_ds_I_blr_ds_id0_12 = I_blr_ds_I_blr_ds_id0_12_delay.peek_7();
	return value_I_blr_ds_I_blr_ds_id0_12;
}

inline int I_blr_ds_I_blr_ds_blr_conv_3_30_22_select(I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
// Pieces...
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 2 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 6 }
// 	is always true on iteration domain: 0
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c = 3] : 0 <= I_blr_ds_blr_r <= 3 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> (3 + I_blr_ds_blr_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 1
	int value_I_blr_ds_I_blr_ds_id0_12 = I_blr_ds_I_blr_ds_id0_12_delay.peek_6();
	return value_I_blr_ds_I_blr_ds_id0_12;
}

inline int I_blr_ds_I_blr_ds_blr_conv_3_30_23_select(I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
// Pieces...
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 2 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_blr_ds_I_blr_ds_id0_12 = I_blr_ds_I_blr_ds_id0_12_delay.peek_2();
	return value_I_blr_ds_I_blr_ds_id0_12;
}

inline int I_blr_ds_I_blr_ds_blr_conv_3_30_24_select(I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
// Pieces...
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 1 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_blr_ds_I_blr_ds_id0_12 = I_blr_ds_I_blr_ds_id0_12_delay.peek_1();
	return value_I_blr_ds_I_blr_ds_id0_12;
}

inline int I_blr_ds_I_blr_ds_blr_conv_3_30_25_select(I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
// Pieces...
// Always 0
//	is optimizable constant: 0
	int value_I_blr_ds_I_blr_ds_id0_12 = I_blr_ds_I_blr_ds_id0_12_delay.peek_0();
	return value_I_blr_ds_I_blr_ds_id0_12;
}

// Bundles...
// I_blr_ds_blr_conv_3_30_read
//	I_blr_ds_I_blr_ds_blr_conv_3_30_17
//	I_blr_ds_I_blr_ds_blr_conv_3_30_18
//	I_blr_ds_I_blr_ds_blr_conv_3_30_19
//	I_blr_ds_I_blr_ds_blr_conv_3_30_20
//	I_blr_ds_I_blr_ds_blr_conv_3_30_21
//	I_blr_ds_I_blr_ds_blr_conv_3_30_22
//	I_blr_ds_I_blr_ds_blr_conv_3_30_23
//	I_blr_ds_I_blr_ds_blr_conv_3_30_24
//	I_blr_ds_I_blr_ds_blr_conv_3_30_25
inline hw_uint<288> I_blr_ds_I_blr_ds_blr_conv_3_30_read_bundle_read(I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12_delay, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	hw_uint<288> result;
	int I_blr_ds_I_blr_ds_blr_conv_3_30_17_res = I_blr_ds_I_blr_ds_blr_conv_3_30_17_select(I_blr_ds_I_blr_ds_id0_12_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<0, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_17_res);
	int I_blr_ds_I_blr_ds_blr_conv_3_30_18_res = I_blr_ds_I_blr_ds_blr_conv_3_30_18_select(I_blr_ds_I_blr_ds_id0_12_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<32, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_18_res);
	int I_blr_ds_I_blr_ds_blr_conv_3_30_19_res = I_blr_ds_I_blr_ds_blr_conv_3_30_19_select(I_blr_ds_I_blr_ds_id0_12_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<64, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_19_res);
	int I_blr_ds_I_blr_ds_blr_conv_3_30_20_res = I_blr_ds_I_blr_ds_blr_conv_3_30_20_select(I_blr_ds_I_blr_ds_id0_12_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<96, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_20_res);
	int I_blr_ds_I_blr_ds_blr_conv_3_30_21_res = I_blr_ds_I_blr_ds_blr_conv_3_30_21_select(I_blr_ds_I_blr_ds_id0_12_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<128, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_21_res);
	int I_blr_ds_I_blr_ds_blr_conv_3_30_22_res = I_blr_ds_I_blr_ds_blr_conv_3_30_22_select(I_blr_ds_I_blr_ds_id0_12_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<160, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_22_res);
	int I_blr_ds_I_blr_ds_blr_conv_3_30_23_res = I_blr_ds_I_blr_ds_blr_conv_3_30_23_select(I_blr_ds_I_blr_ds_id0_12_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<192, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_23_res);
	int I_blr_ds_I_blr_ds_blr_conv_3_30_24_res = I_blr_ds_I_blr_ds_blr_conv_3_30_24_select(I_blr_ds_I_blr_ds_id0_12_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<224, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_24_res);
	int I_blr_ds_I_blr_ds_blr_conv_3_30_25_res = I_blr_ds_I_blr_ds_blr_conv_3_30_25_select(I_blr_ds_I_blr_ds_id0_12_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<256, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_25_res);
	return result;
}

// I_blr_ds_id0_write
//	I_blr_ds_I_blr_ds_id0_12
inline void I_blr_ds_I_blr_ds_id0_write_bundle_write(int& /* width = 32*/I_blr_ds_id0_write, I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12_delay) {
	I_blr_ds_I_blr_ds_id0_12_write(I_blr_ds_id0_write, I_blr_ds_I_blr_ds_id0_12_delay);
}



#include "hw_classes.h"

struct I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16_cache {
	// Capacity: 8
	fifo<int, 8> f;
	inline int peek(const int offset) {
		return f.peek(7 - offset);
	}

	inline int peek_0() {
		return f.peek(0);
	}

	inline int peek_1() {
		return f.peek(1);
	}

	inline int peek_2() {
		return f.peek(2);
	}

	inline int peek_3() {
		return f.peek(3);
	}

	inline int peek_4() {
		return f.peek(4);
	}

	inline int peek_5() {
		return f.peek(5);
	}

	inline int peek_6() {
		return f.peek(6);
	}

	inline int peek_7() {
		return f.peek(7);
	}



	inline void push(const int value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		return f.push(value);
	}

};



inline void I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16_write(int& I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16, I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16_cache& I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16_delay) {
	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16_delay.push(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16);
}

inline int I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_15_select(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16_cache& I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16_delay
, int root, int I_blr_ds_blr_out_r, int I_blr_ds_blr_out_c) {
// Pieces...
// { store_I_blr_ds_blr_out_from_I_blr_ds_blr[root = 0, I_blr_ds_blr_out_r = 3, I_blr_ds_blr_out_c = 0] } -> { store_I_blr_ds_blr_out_from_I_blr_ds_blr[root, I_blr_ds_blr_out_r, I_blr_ds_blr_out_c] -> 1 }
// 	is always true on iteration domain: 0
// { store_I_blr_ds_blr_out_from_I_blr_ds_blr[root = 0, I_blr_ds_blr_out_r = 3, I_blr_ds_blr_out_c = 1] } -> { store_I_blr_ds_blr_out_from_I_blr_ds_blr[root, I_blr_ds_blr_out_r, I_blr_ds_blr_out_c] -> 1 }
// 	is always true on iteration domain: 0
// { store_I_blr_ds_blr_out_from_I_blr_ds_blr[root = 0, I_blr_ds_blr_out_r = 0, I_blr_ds_blr_out_c] : 0 <= I_blr_ds_blr_out_c <= 2 } -> { store_I_blr_ds_blr_out_from_I_blr_ds_blr[root, I_blr_ds_blr_out_r, I_blr_ds_blr_out_c] -> (7 - I_blr_ds_blr_out_c) }
// 	is always true on iteration domain: 0
// { store_I_blr_ds_blr_out_from_I_blr_ds_blr[root = 0, I_blr_ds_blr_out_r = 0, I_blr_ds_blr_out_c = 3] } -> { store_I_blr_ds_blr_out_from_I_blr_ds_blr[root, I_blr_ds_blr_out_r, I_blr_ds_blr_out_c] -> 4 }
// 	is always true on iteration domain: 0
// { store_I_blr_ds_blr_out_from_I_blr_ds_blr[root = 0, I_blr_ds_blr_out_r = 1, I_blr_ds_blr_out_c] : (1 + I_blr_ds_blr_out_c) mod 2 = 0 and 0 < I_blr_ds_blr_out_c <= 2 } -> { store_I_blr_ds_blr_out_from_I_blr_ds_blr[root, I_blr_ds_blr_out_r, I_blr_ds_blr_out_c] -> 5 }
// 	is always true on iteration domain: 0
// { store_I_blr_ds_blr_out_from_I_blr_ds_blr[root = 0, I_blr_ds_blr_out_r = 1, I_blr_ds_blr_out_c = 3] } -> { store_I_blr_ds_blr_out_from_I_blr_ds_blr[root, I_blr_ds_blr_out_r, I_blr_ds_blr_out_c] -> (5/2 + 1/2 * I_blr_ds_blr_out_c) }
// 	is always true on iteration domain: 0
// { store_I_blr_ds_blr_out_from_I_blr_ds_blr[root = 0, I_blr_ds_blr_out_r = 1, I_blr_ds_blr_out_c] : (I_blr_ds_blr_out_c) mod 2 = 0 and 0 <= I_blr_ds_blr_out_c <= 2 } -> { store_I_blr_ds_blr_out_from_I_blr_ds_blr[root, I_blr_ds_blr_out_r, I_blr_ds_blr_out_c] -> (5 - 1/2 * I_blr_ds_blr_out_c) }
// 	is always true on iteration domain: 0
// { store_I_blr_ds_blr_out_from_I_blr_ds_blr[root = 0, I_blr_ds_blr_out_r = 2, I_blr_ds_blr_out_c] : 0 <= I_blr_ds_blr_out_c <= 2 and ((I_blr_ds_blr_out_c) mod 2 = 0 or (1 + I_blr_ds_blr_out_c) mod 2 = 0) } -> { store_I_blr_ds_blr_out_from_I_blr_ds_blr[root, I_blr_ds_blr_out_r, I_blr_ds_blr_out_c] -> (3 - I_blr_ds_blr_out_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 0
	int value_I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16 = I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16_delay.peek(((I_blr_ds_blr_out_c == 0 && -3 + I_blr_ds_blr_out_r == 0 && root == 0) ? (1) : (-1 + I_blr_ds_blr_out_c == 0 && -3 + I_blr_ds_blr_out_r == 0 && root == 0) ? (1) : (I_blr_ds_blr_out_r == 0 && root == 0 && I_blr_ds_blr_out_c >= 0 && 2 - I_blr_ds_blr_out_c >= 0) ? ((7 - I_blr_ds_blr_out_c)) : (-3 + I_blr_ds_blr_out_c == 0 && I_blr_ds_blr_out_r == 0 && root == 0) ? (4) : ((-1 - I_blr_ds_blr_out_c) % 2 == 0 && -1 + I_blr_ds_blr_out_r == 0 && root == 0 && -1 + I_blr_ds_blr_out_c >= 0 && 2 - I_blr_ds_blr_out_c >= 0) ? (5) : (-3 + I_blr_ds_blr_out_c == 0 && -1 + I_blr_ds_blr_out_r == 0 && root == 0) ? (((5 + I_blr_ds_blr_out_c))/2) : ((-I_blr_ds_blr_out_c) % 2 == 0 && -1 + I_blr_ds_blr_out_r == 0 && root == 0 && I_blr_ds_blr_out_c >= 0 && 2 - I_blr_ds_blr_out_c >= 0) ? (((10 - I_blr_ds_blr_out_c))/2) : (((-I_blr_ds_blr_out_c) % 2 == 0 && -2 + I_blr_ds_blr_out_r == 0 && root == 0 && I_blr_ds_blr_out_c >= 0 && 2 - I_blr_ds_blr_out_c >= 0) || ((-1 - I_blr_ds_blr_out_c) % 2 == 0 && -2 + I_blr_ds_blr_out_r == 0 && root == 0 && I_blr_ds_blr_out_c >= 0 && 2 - I_blr_ds_blr_out_c >= 0)) ? ((3 - I_blr_ds_blr_out_c)) : 0));
	return value_I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16;
}

// Bundles...
// I_blr_ds_blr_conv_3_30_write
//	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16
inline void I_blr_ds_blr_I_blr_ds_blr_conv_3_30_write_bundle_write(int& /* width = 32*/I_blr_ds_blr_conv_3_30_write, I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16_cache& I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16_delay) {
	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16_write(I_blr_ds_blr_conv_3_30_write, I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16_delay);
}

// store_I_blr_ds_blr_out_from_I_blr_ds_blr_read
//	I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_15
inline int I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_read_bundle_read(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16_cache& I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16_delay, int root, int I_blr_ds_blr_out_r, int I_blr_ds_blr_out_c) {
	int result;
<<<<<<< HEAD
	int I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_25_res = I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_25_select(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14_delay, root, I_blr_ds_blr_out_r, I_blr_ds_blr_out_c);
	set_at<0, 32>(result, I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_25_res);
>>>>>>> origin/master
=======
	int I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_15_res = I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_15_select(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16_delay, root, I_blr_ds_blr_out_r, I_blr_ds_blr_out_c);
	set_at<0, 32>(result, I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_15_res);
>>>>>>> origin/master
	return result;
}





// Operation logic
<<<<<<< HEAD
inline void blurred_0_conv_3_30(I_store_I_from_in_12_cache& I_store_I_from_in_12, blurred_0_blurred_0_conv_3_30_0_cache& blurred_0_blurred_0_conv_3_30_0, int root, int br, int bc) {
	// Consume: I
	auto I_br__p__0_c__bc__p__0_value = I_blurred_0_conv_3_30_read_bundle_read(I_store_I_from_in_12/* source_delay */, root, br, bc);
	// Apply function: conv_3_3
	// Arg: I_br__p__0_c__bc__p__0_value
	// Arg buf: I
	// Arg: I_br__p__0_c__bc__p__1_value
	// Arg buf: I
	// Arg: I_br__p__0_c__bc__p__2_value
	// Arg buf: I
	// Arg: I_br__p__1_c__bc__p__0_value
	// Arg buf: I
	// Arg: I_br__p__1_c__bc__p__1_value
	// Arg buf: I
	// Arg: I_br__p__1_c__bc__p__2_value
	// Arg buf: I
	// Arg: I_br__p__2_c__bc__p__0_value
	// Arg buf: I
	// Arg: I_br__p__2_c__bc__p__1_value
	// Arg buf: I
	// Arg: I_br__p__2_c__bc__p__2_value
	// Arg buf: I
	auto compute_result = conv_3_3(I_br__p__0_c__bc__p__0_value);
	// Produce: blurred_0
	// Buffer: blurred_0, Op: blurred_0_conv_3_30
	// Possible ports...
		// blurred_0_blurred_0_conv_3_30_0
	blurred_0_blurred_0_conv_3_30_write_bundle_write(compute_result, blurred_0_blurred_0_conv_3_30_0 /* output src_delay */);
}

inline void out_id0(blurred_0_blurred_0_conv_3_30_0_cache& blurred_0_blurred_0_conv_3_30_0, HWStream<int>& out, int root, int dr, int dc) {
	// Consume: blurred_0
	auto blurred_0_2_m_dr_c__2_m_dc_value = blurred_0_out_id0_read_bundle_read(blurred_0_blurred_0_conv_3_30_0/* source_delay */, root, dr, dc);
	// Apply function: id
	// Arg: blurred_0_2_m_dr_c__2_m_dc_value
	// Arg buf: blurred_0
	auto compute_result = id(blurred_0_2_m_dr_c__2_m_dc_value);
	// Produce: out
	out.write(compute_result);
}

inline void store_I_from_in(HWStream<int>& in, I_store_I_from_in_12_cache& I_store_I_from_in_12, int root, int pr, int pc) {
=======
inline void I_blr_conv_3_30(I_store_I_from_in_10_cache& I_store_I_from_in_10, I_blr_I_blr_conv_3_30_0_cache& I_blr_I_blr_conv_3_30_0, int root, int I_blr_r, int I_blr_c) {
	// Consume: I
	auto I_I_blr_r__p__0_c__I_blr_c__p__0_value = I_I_blr_conv_3_30_read_bundle_read(I_store_I_from_in_10/* source_delay */, root, I_blr_r, I_blr_c);
	// Apply function: conv_3_3
	// Arg: I_I_blr_r__p__0_c__I_blr_c__p__0_value
	// Arg buf: I
	// Arg: I_I_blr_r__p__0_c__I_blr_c__p__1_value
	// Arg buf: I
	// Arg: I_I_blr_r__p__0_c__I_blr_c__p__2_value
	// Arg buf: I
	// Arg: I_I_blr_r__p__1_c__I_blr_c__p__0_value
	// Arg buf: I
	// Arg: I_I_blr_r__p__1_c__I_blr_c__p__1_value
	// Arg buf: I
	// Arg: I_I_blr_r__p__1_c__I_blr_c__p__2_value
	// Arg buf: I
	// Arg: I_I_blr_r__p__2_c__I_blr_c__p__0_value
	// Arg buf: I
	// Arg: I_I_blr_r__p__2_c__I_blr_c__p__1_value
	// Arg buf: I
	// Arg: I_I_blr_r__p__2_c__I_blr_c__p__2_value
	// Arg buf: I
	auto compute_result = conv_3_3(I_I_blr_r__p__0_c__I_blr_c__p__0_value);
	// Produce: I_blr
	// Buffer: I_blr, Op: I_blr_conv_3_30
	// Possible ports...
		// I_blr_I_blr_conv_3_30_0
	I_blr_I_blr_conv_3_30_write_bundle_write(compute_result, I_blr_I_blr_conv_3_30_0 /* output src_delay */);
}

<<<<<<< HEAD
inline void store_I_from_in(HWStream<int>& in, I_store_I_from_in_10_cache& I_store_I_from_in_10, int root, int pr, int pc) {
>>>>>>> origin/master
=======
inline void store_I_from_in(HWStream<int >& in, I_store_I_from_in_10_cache& I_store_I_from_in_10, int root, int pr, int pc) {
>>>>>>> origin/master
	// Consume: in
	auto in_pr_c__pc_value = in.read();
	// Produce: I
	// Buffer: I, Op: store_I_from_in
	// Possible ports...
<<<<<<< HEAD
		// I_store_I_from_in_12
	I_store_I_from_in_write_bundle_write(in_pr_c__pc_value, I_store_I_from_in_12 /* output src_delay */);
}

// Driver function
void blur_and_downsample(HWStream<int>& in, HWStream<int>& out) {
#pragma HLS dependence array inter false

	I_store_I_from_in_12_cache I_store_I_from_in_12;
	blurred_0_blurred_0_conv_3_30_0_cache blurred_0_blurred_0_conv_3_30_0;
	for (int c0 = 0; c0 <= 63; c0 += 1)
	  for (int c1 = 0; c1 <= 63; c1 += 1) {
#pragma HLS pipeline
	    store_I_from_in(in, I_store_I_from_in_12, 0, c0, c1);
	    if (c0 >= 2 && c1 >= 2) {
	      blurred_0_conv_3_30(I_store_I_from_in_12, blurred_0_blurred_0_conv_3_30_0, 0, c0 - 2, c1 - 2);
	      if (c0 % 2 == 0 && c1 % 2 == 0)
	        out_id0(blurred_0_blurred_0_conv_3_30_0, out, 0, (c0 / 2) - 1, (c1 / 2) - 1);
=======
		// I_store_I_from_in_10
	I_store_I_from_in_write_bundle_write(in_pr_c__pc_value, I_store_I_from_in_10 /* output src_delay */);
}

inline void I_blr_ds_id0(I_blr_I_blr_conv_3_30_0_cache& I_blr_I_blr_conv_3_30_0, I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12, int root, int I_blr_ds_r, int I_blr_ds_c) {
	// Consume: I_blr
	auto I_blr_2_m_I_blr_ds_r_c__2_m_I_blr_ds_c_value = I_blr_I_blr_ds_id0_read_bundle_read(I_blr_I_blr_conv_3_30_0/* source_delay */, root, I_blr_ds_r, I_blr_ds_c);
	// Apply function: id
	// Arg: I_blr_2_m_I_blr_ds_r_c__2_m_I_blr_ds_c_value
	// Arg buf: I_blr
	auto compute_result = id(I_blr_2_m_I_blr_ds_r_c__2_m_I_blr_ds_c_value);
	// Produce: I_blr_ds
	// Buffer: I_blr_ds, Op: I_blr_ds_id0
	// Possible ports...
		// I_blr_ds_I_blr_ds_id0_12
	I_blr_ds_I_blr_ds_id0_write_bundle_write(compute_result, I_blr_ds_I_blr_ds_id0_12 /* output src_delay */);
}

inline void store_I_blr_ds_blr_out_from_I_blr_ds_blr(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16_cache& I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16, HWStream<int >& I_blr_ds_blr_out, int root, int I_blr_ds_blr_out_r, int I_blr_ds_blr_out_c) {
	// Consume: I_blr_ds_blr
	auto I_blr_ds_blr_I_blr_ds_blr_out_r_c__I_blr_ds_blr_out_c_value = I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_read_bundle_read(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16/* source_delay */, root, I_blr_ds_blr_out_r, I_blr_ds_blr_out_c);
	// Produce: I_blr_ds_blr_out
	I_blr_ds_blr_out.write(I_blr_ds_blr_I_blr_ds_blr_out_r_c__I_blr_ds_blr_out_c_value);
}

inline void I_blr_ds_blr_conv_3_30(I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12, I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16_cache& I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// Consume: I_blr_ds
	auto I_blr_ds_I_blr_ds_blr_r__p__0_c__I_blr_ds_blr_c__p__0_value = I_blr_ds_I_blr_ds_blr_conv_3_30_read_bundle_read(I_blr_ds_I_blr_ds_id0_12/* source_delay */, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	// Apply function: conv_3_3
	// Arg: I_blr_ds_I_blr_ds_blr_r__p__0_c__I_blr_ds_blr_c__p__0_value
	// Arg buf: I_blr_ds
	// Arg: I_blr_ds_I_blr_ds_blr_r__p__0_c__I_blr_ds_blr_c__p__1_value
	// Arg buf: I_blr_ds
	// Arg: I_blr_ds_I_blr_ds_blr_r__p__0_c__I_blr_ds_blr_c__p__2_value
	// Arg buf: I_blr_ds
	// Arg: I_blr_ds_I_blr_ds_blr_r__p__1_c__I_blr_ds_blr_c__p__0_value
	// Arg buf: I_blr_ds
	// Arg: I_blr_ds_I_blr_ds_blr_r__p__1_c__I_blr_ds_blr_c__p__1_value
	// Arg buf: I_blr_ds
	// Arg: I_blr_ds_I_blr_ds_blr_r__p__1_c__I_blr_ds_blr_c__p__2_value
	// Arg buf: I_blr_ds
	// Arg: I_blr_ds_I_blr_ds_blr_r__p__2_c__I_blr_ds_blr_c__p__0_value
	// Arg buf: I_blr_ds
	// Arg: I_blr_ds_I_blr_ds_blr_r__p__2_c__I_blr_ds_blr_c__p__1_value
	// Arg buf: I_blr_ds
	// Arg: I_blr_ds_I_blr_ds_blr_r__p__2_c__I_blr_ds_blr_c__p__2_value
	// Arg buf: I_blr_ds
	auto compute_result = conv_3_3(I_blr_ds_I_blr_ds_blr_r__p__0_c__I_blr_ds_blr_c__p__0_value);
	// Produce: I_blr_ds_blr
	// Buffer: I_blr_ds_blr, Op: I_blr_ds_blr_conv_3_30
	// Possible ports...
		// I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16
	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_write_bundle_write(compute_result, I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16 /* output src_delay */);
}

// Driver function
void blur_and_downsample(HWStream<int >& in, HWStream<int >& I_blr_ds_blr_out, HWStream<int >& out) {
	I_store_I_from_in_10_cache I_store_I_from_in_10;
	I_blr_I_blr_conv_3_30_0_cache I_blr_I_blr_conv_3_30_0;
	I_blr_ds_I_blr_ds_id0_12_cache I_blr_ds_I_blr_ds_id0_12;
	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16_cache I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16;
	for (int c0 = 0; c0 <= 14; c0 += 1)
	  for (int c1 = 0; c1 <= 14; c1 += 1) {
	    store_I_from_in(in, I_store_I_from_in_10, 0, c0, c1);
	    if (c0 >= 2 && c1 >= 2) {
	      I_blr_conv_3_30(I_store_I_from_in_10, I_blr_I_blr_conv_3_30_0, 0, c0 - 2, c1 - 2);
	      if (c0 <= 12 && c1 <= 12 && c0 % 2 == 0 && c1 % 2 == 0) {
	        I_blr_ds_id0(I_blr_I_blr_conv_3_30_0, I_blr_ds_I_blr_ds_id0_12, 0, (c0 / 2) - 1, (c1 / 2) - 1);
	        if (c0 >= 6 && c1 >= 6)
	          I_blr_ds_blr_conv_3_30(I_blr_ds_I_blr_ds_id0_12, I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16, 0, (c0 / 2) - 3, (c1 / 2) - 3);
	      }
	      if (c0 >= 9 && c0 <= 12 && c1 >= 9 && c1 <= 12)
<<<<<<< HEAD
	        store_I_blr_ds_blr_out_from_I_blr_ds_blr(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14, I_blr_ds_blr_out, 0, c0 - 9, c1 - 9);
>>>>>>> origin/master
=======
	        store_I_blr_ds_blr_out_from_I_blr_ds_blr(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16, I_blr_ds_blr_out, 0, c0 - 9, c1 - 9);
>>>>>>> origin/master
	    }
	  }
	
}