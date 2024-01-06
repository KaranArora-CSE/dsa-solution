// 📅   10 April 2024
// 🚨   Lecture 2 - striver 2 Pointer and Slidig Windows 

// 🙏 Need to find max points we can gain from choosing consicutive set of card 

// 📌 App1 - concat and sliding window 
// 📌 App2 - using helper sum Var 

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int leftSum = 0;
        int rightSum = 0;

        for(int i=0;i<k;i++) leftSum += cardPoints[i];
        int lastEle = cardPoints.size()-1;
        int maxSum = leftSum;

        for(int i=0;i<k;i++){

            leftSum = leftSum - cardPoints[k-i-1];
            rightSum = rightSum + cardPoints[lastEle-i];
            int newSum = leftSum + rightSum;

            maxSum = max(maxSum,newSum);

        }

        return maxSum;
    }
};

/*
Input: cardPoints = [1,2,3,4,5,6,1], k = 3
Output: 12

Explanation: 

After the first step, your score will always be 1. However, 
choosing the rightmost card first will maximize your total score. 
The optimal strategy is to take the three cards on the right, 
giving a final score of 1 + 6 + 5 = 12.

*/