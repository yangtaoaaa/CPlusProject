//
//  main.cpp
//  Demo2
//
//  Created by hezixuan on 2018/2/2.
//  Copyright © 2018年 hezixuan. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // 一，引用
    //引用就是别名，用&来表示
//    int ival = 1024;
//    int &refVal = ival;
//    refVal = 2;
//    int ii = refVal;
    
    // 二，指针
    // 指针存放某个对象的地址，要想获取该地址，需要使用取地址符（操作符&）
    int ival2 = 43;
    int *p = &ival2; // p的值为ival2的地址
    // 利用指针访问对象
    std::cout << *p << std::endl; // 解运算符，或者称之为取值运算符（操作符*）
    *p = 2; // p指向的对象赋值为2，由于ival和p具有相同的地址，所有ival的值也被修改为2
    std::cout << ival2 << std::endl;
    return 0;
}
