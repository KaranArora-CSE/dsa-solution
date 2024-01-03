// Striver Sheet Maths

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int number = 1234124;
    int numCopy = number;

    int digit = -1;
    
    while(numCopy>0){
        digit = numCopy%10;
        numCopy = numCopy/10;
        cout << digit << endl; 
    }

    return 0;
}