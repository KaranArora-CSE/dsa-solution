#include <bits/stdc++.h>
using namespace std;


int main(){
    int n = 123456;
    int m = 0;
    int d;

    while(n>0){
        d = n%10;
        n = n/10;
        m = m*10 + d;
    }

    cout << m << endl;

    return 0;
}
