//
//  292.cpp
//  myLeetCode
//
//  Created by 崔翔 on 16/2/23.
//  Copyright © 2016年 torresgeekhome. All rights reserved.
//

#include "292.hpp"
//You are playing the following Nim Game with your friend: There is a heap of stones on the table, each time one of you take turns to remove 1 to 3 stones. The one who removes the last stone will be the winner. You will take the first turn to remove the stones.
//
//Both of you are very clever and have optimal strategies for the game. Write a function to determine whether you can win the game given the number of stones in the heap.
//
//For example, if there are 4 stones in the heap, then you will never win the game: no matter 1, 2, or 3 stones you remove, the last stone will always be removed by your friend.
//
//
//
//思路：
//
//因为只能移动1、2、3块石头，所以只要对手最后拿的时候剩下4块石头，那无论他拿走几块石头，我都可以全部拿完，而之前每次拿石头，不管对手拿几个，我都以凑够4个为目标拿。所以在我第一个拿石头的前提下，只要总数除以4有余数，我第一次拿余数即可保证对手最后一次拿之前只剩下4颗石头。
//
//我的代码：

bool canWinNim(int n) {
    if (n%4 == 0) return false;
    else return true;
}


//参考代码：
//
//复制代码
//class Solution {
//public:
//    bool canWinNim(int n) {
//        return !(n % 4 == 0);
//    }
//};
//复制代码
//
//
//总结：该题难点不在代码，而是对实际问题的抽象、分析，建立数学模型，然后转化为代码的能力。再看代码，结果需要返回一个布尔值，通过if语句来判断，如果满足余数为0，则不能保证取胜，返回布尔值false，如余数不为0，则返回布尔值true。参考代码更简洁，在只有两种情况的判断并返回布尔值时，他用一个一元运算符！直接返回，将两行代码简化为一行，可以借鉴学习。