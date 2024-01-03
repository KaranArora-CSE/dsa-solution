// 📅   9 April 2024
// 🚨   Lecture 2 - striver Maths 
// 🎯   {Power of exponential} - 
//       3*7 = 3*3*3*3*3*3*3

// 📌 App1 - multiply n times
// 📌 App2 - use n^2 method to reduce iteration 

#include <bits/stdc++.h>
using namespace std;


int main(){
    int n = 7;
    int nC = 7;
    int x = 3;

    int a = -1;
    int b = -1;
    int ans;

    cout<<"Start..."<<endl;

    for(int i=0;i<nC;i++){
        if(n==0) break;
            
        if(n%2==0){
            if(b==-1) b=x*x;
            else b = b*b;
            n=n/2;
        }else{
            if(a==-1) a=x;
            else a = a*x;
            n=n-1;
        }
    } 
    cout<<a<<" " << b << " " << a*b;
    return 0;
}

// Input :3
// Answer :2187