// 📅   9 April 2024
// 🚨   Lecture 3 - striver Maths 
// 🎯   Find all divisors  

// 📌 App1 - Traverse all
// 📌 App1 - Traverse till root(N) and use (i) & (num/i)

#include <bits/stdc++.h>
using namespace std;


int main(){
    int num = 36;
    vector<int> v;

    for(int i=1;i*i<=num;i++){
        if(num%i==0) {
            int tmp = num/i;
            v.push_back(i);
            if(v.back()!=tmp) {
                v.push_back(tmp);
            }
        }
    }

    cout<<"Answer :- ";
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++) cout<<v[i]<<" "; 
    return 0;
}

// Input 36 
// Answer :- 1 2 3 4 6 9 12 18 36