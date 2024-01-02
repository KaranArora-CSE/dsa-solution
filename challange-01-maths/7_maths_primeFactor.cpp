// 📅   9 April 2024

// 🎯   Prime Factor - 
//      The number who is prime + factor of num

// 📌 App1 - Get all factor ans check prime 
// 📌 App2 - School way divide from num till possible

#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<int> v;
    int num = 166320;
    int numcopy = num;

    cout<<"Starting ..." << endl;
    for(int i=2;i<=numcopy;i++){
        if(num==1) break;

        if(num%i==0){
            v.push_back(i);
            while(num%i==0) {
                num = num/i;
            }
        }
    }

    for(int i=0;i<v.size();i++) cout<<v[i]<<" "; 
    return 0;
}

// Input 1,66,320 
// Answer :- 2 3 5 7 11