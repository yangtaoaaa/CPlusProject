//
//  main.cpp
//  Demo1
//
//  Created by hezixuan on 2018/2/2.
//  Copyright © 2018年 hezixuan. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    /* 一、切勿混用带符号类型和无符号类型
     * 如果表达式里既有带符号类型又有无符号类型（unsigned)，当带符号类型取值为负数时会出现异常结果，
     * 这是因为带符号数会自动的转换为无符号数。
    */
    // 1、运算的变量都是无符号类型
    int a1 = -3, b1 = 2;
    std::cout << "带符号类型运算结果" << a1 * b1 << std::endl; // 正确，-6
    
    // 2、运算的变量存在有符号类型，无符号类型
    // 有符号数是所谓补码数
    // 正数用原码表示(即这个数的序号)。
    // 负数，用他的相反数（绝对值）的补码表示
    // 我的电脑是64位系统，int占8个字节，表示的最大整数是2^32-1 = 4294967295
    int a2 = -1; // -1的原码是10000000 00000000 00000000 0000001，补码是01111111 11111111 11111111 11111111，2^32 - 1 = 4294967295
    // -6的原码是10000000 00000000 00000000 00000110，补码是01111111 11111111 11111111 11111010 = 4294967290
    unsigned int b2 = 1;
    std::cout << "带符号类型乘以无符号类型的结果" << a2 * b2 << std::endl; // 不正确 4294967295
    return 0;
}
