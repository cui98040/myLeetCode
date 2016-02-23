//
//  136.cpp
//  myLeetCode
//
//  Created by 崔翔 on 16/2/23.
//  Copyright © 2016年 torresgeekhome. All rights reserved.
//

#include "136.hpp"
//Given an array of integers, every element appears twice except for one. Find that single one.
//
//Note:
//Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
//
//
//
//思路：
//
//一开始自己的思路非常简单，首先设置一个status的变量，然后通过2层for循环，对数组中每个数在数组中遍历寻找与自己一样的数，而且不是本身。若找到，则将satatus设置为1，但在下一个数开始遍历前将status设置回0，若在遍历之后status仍为0，则表示在数组中没有与其相同的数，则输出该数即可。由于用到了for循环的嵌套，当时自己也感觉无法满足题目中要求的a linear runtime complexity，但并没有更好的办法，结果也恰恰是超时。
//
//我的代码：

int singleNumber(int* nums, int numsSize)
{
    int result=0;
    for(int i=0,status=0;i<numsSize;i++)
    {
        for(int j=0;j<numsSize;j++)
        {
            if((*(nums+i)==*(nums+j)) && (i !=j))
                status=1;
        }
        if (status==0)
            result=*(nums+i);
    }
    return result;
}


//参考代码1:
//
//复制代码
//#include <stdio.h>
//// This is classical interview question
//// As we know, the same number XOR together will be 0,
//// So, XOR all of numbers, the result is the number which only appears once.
//int singleNumber(int A[], int n) {
//    int s = 0;
//    for(int i=0; i<n; i++){
//        s = s^A[i];
//    }
//    return s;
//}
//
//int main()
//{
//    int a[]={1,1,2,2,3};
//    printf("%d\n", singleNumber(a,5));
//    return 0;
//}
//复制代码
//总结1:
//
//参考代码的核心思路就是运用了<两个相同的数进行按位异或运算结果一定为0，一个数与0按位异或结果即为该数本身>，所以讲数组中所有数按位异或，留下的那个数即是那个single number。
//
//
//
//实际提交代码：
//
//复制代码
//class Solution {
//public:
//    int singleNumber(vector<int>& nums)
//    {
//        int s = 0;
//        for (int i=0;i < nums.size();i++)
//        {
//            s = s ^ nums[i];
//        }
//        return s;
//    }
//};
//复制代码
//总结1.1:
//
//与参考代码略有不同，因为建了一个类，注意vector<int>&与int*的共同点，nums.size()可表示c++中数组元素的个数。
//
//
//
//参考代码2、3:涉及更多c++的语法，明天吧c++语法过一遍后再来补充。
