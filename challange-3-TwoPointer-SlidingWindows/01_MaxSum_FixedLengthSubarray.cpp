// 📅   10 April 2024
// 🚨   Lecture 1 - striver 2 Pointer and Slidig Windows 

// 🙏 Need to find and n length subarray whose sum closeest to target

// 📌 App1 - Generate all n size Subarray 
// 📌 App2 - Constant Window

#include <bits/stdc++.h>
using namespace std;

int main(){
    int maxLen = 4;
    int targetSum = 100;
    
    vector<int> v={1,24,13,16,23,11,45,21,12,6};

    int preSum = 0;
    int l=-1 , r=-1;

    for(int i=0;i<maxLen;i++) preSum+=v[i];
    if(preSum<=targetSum) l=0,r=maxLen-1;

    for(int i=maxLen;i<v.size();i++){
        int temp = preSum + v[i] - v[i-maxLen];
        if(temp > preSum && temp <= targetSum) {
            l=i-maxLen;
            r=i;
        }
    }

    int xSum = 0;
    cout << l << " " << r << endl;
    for(int i=l;i<r;i++) xSum+=v[i],cout << v[i] << " " ;
    cout << endl << "Sum " << xSum;
    return 0;
}

// 3 7  