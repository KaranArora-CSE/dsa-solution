// Striver Sheet Maths

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    vector<int> v;

    v.push_back(21);
    v.push_back(211);
    v.push_back(1);
    v.push_back(2);

    int mx = INT_MIN;
    for(int i=0;i<v.size();i++){
        mx = max(mx,v[i]);
    }

    cout << "max val :- " << mx << endl;
    
    return 0;

}