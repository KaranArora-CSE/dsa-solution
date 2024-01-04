// 📅   10 April 2024
// 🚨   Lecture 7 - striver Maths 


// 📌 App1 - check for all
// 📌 App2 - use seive of erstosis 

#include <bits/stdc++.h>
using namespace std;

int main(){
    int start = 30;
    int end = 700;
    vector<int> v(end+1,0);
    
    v[1]=1;
    for(int i=2;i*i<v.size();i++){
        if(v[i]==0){ // turn all factors to 1 
            int k = i*i;
            while(k<v.size()){
                v[k] = 1;
                k = k+i;
            }
        }
    }

    for(int i=start;i<end;i++){
        if(v[i]==0) cout << v[i] << " " << i << endl ; 
    }
    return 0;
}
