//
//  260.cpp
//  myLeetCode
//
//  Created by 崔翔 on 16/2/24.
//  Copyright © 2016年 torresgeekhome. All rights reserved.
//

#include "260.hpp"
//260.Single Number III
//
//Given an array of numbers nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once.
//
//For example:
//
//Given nums = [1, 2, 1, 3, 2, 5], return [3, 5].
//
//Note:
//
//The order of the result is not important. So in the above example, [5, 3] is also correct.
//Your algorithm should run in linear runtime complexity. Could you implement it using only constant space complexity?
//思路：如果没有note中2的要求，那么很简单，用循环找出这两个数并装入vector容器中即可，可是超时了。
//
//
//
//我的代码：

class Solution {
public:
    std::vector<int> singleNumber(std::vector<int>& nums)
    {
        int result[2]={0,0};
        for(int i=0, status=0,count=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if ((nums[i]==nums[j])&&(i!=j))
                    status=1;
            }
            if (status == 0)
            {
                result[count]=nums[i];
                count++;
            }
        }
        int A=result[0],B=result[1];
        return std::vector<int>({A,B});
    }
};




//参考代码：
//
//复制代码
//class Solution {
//public:
//    vector<int> singleNumber(vector<int>& nums) {
//        int AxorB = 0;
//        for(int i = 0;i<nums.size();i++){
//            AxorB^=nums[i];
//        }
//        //取最后一个二进制位
//        int mask = AxorB & (~(AxorB-1));
//        int A = 0,B = 0;
//        for(int i = 0;i<nums.size();i++){
//            if(mask&nums[i])
//                A ^= nums[i];
//            else
//                B ^= nums[i];
//        }
//        
//        return vector<int>({A,B});
//    }
//};
//复制代码
//接下来这几天要开发山寨一款新浪微博iOS版，所以刷题停几天，正好也要学swift，以后就用swift刷试试看，并且推到github上，接下来blog更新内容就是微博每一天开发的进度。
