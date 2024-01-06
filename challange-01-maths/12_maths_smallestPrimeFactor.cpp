// 📅   10 April 2024
// 🚨   Lecture 8 - striver Maths 

// 📌 App1 - check for all 
// 📌 App2 - seive of erastosis 

#include <bits/stdc++.h>
using namespace std;

int main(){
    int start = 50;
    int end = 700;

    vector<int> v(end+1,1);

    for(int i=2;i<end;i++){
        if(v[i]==1){
            int k = i+i;
            while(k<=end){
                if(v[k]==1){
                    v[k]=i;
                }
                k = k+i;
            }
        }
    }
    // verifying answer
    cout << "Answers :- " << endl ; 
    cout << v[354] << endl;
    cout << v[351] << endl;
    cout << v[537] << endl;
    cout << v[539] << endl;

    /* pirintting updated
    
    for(int i=1;i<=end;i++){
        cout << i << " " << v[i];
        cout << endl;
    }*/
    
    return 0;
}