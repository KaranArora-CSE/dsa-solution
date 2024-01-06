// 📅   10 April 2024
// 🚨   Lecture 3 - striver 2 Pointer and Slidig Windows 

// 🙏 Need to find max points we can gain from choosing consicutive set of card 

// 📌 App1 - all seen subarray
// 📌 App2 - using helper sum Var 

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        map<char,int> mp;
        
        int maxLen = 0;
        int left = 0;

        if(s.size()==0) return 0;

        for(int i=0;i<s.size();i++){
            char ch = s[i];
            
            if(mp.find(ch)!=mp.end() && left<=mp[ch]) {
                left = mp[ch]+1;
            }

            maxLen = max(maxLen,i-left+1);
            mp[ch] = i;
        }

        return maxLen;

    }
};

/*
Input: s = "pwwkew"
Output: 3

Explanation:
The answer is "wke", with the length of 3.
Notice that the answer must be a substring, 
"pwke" is a subsequence and not a substring.

*/