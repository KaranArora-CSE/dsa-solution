// 📅   10 April 2024
// 🚨   Lecture 6 - striver Maths 
// 🎯   {Sieve of Eratosthenes } - 
//       optimisation 
//          --> go till root(n) times
//          --> srtart from i*i 
//          --> compute only if 1 

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v(50+1,0);
    
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

    for(int i=1;i<v.size();i++){
        if(v[i]==0) cout << v[i] << " " << i << endl ; 
    }
    return 0;
}

/*
0 - 3
0 - 5
0 - 7
0 - 11
0 - 13
0 - 17
0 - 19
0 - 23
0 - 29
0 - 31
0 - 37
0 - 41
0 - 43
0 - 47
*/