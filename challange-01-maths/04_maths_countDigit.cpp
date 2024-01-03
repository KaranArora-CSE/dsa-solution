// Striver Sheet Maths

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int number = 1234124;
    int numCopy = number;

    int counter = 0;

    while(numCopy>0){
        counter++;
        numCopy = numCopy/10;
    }

    cout << "counter length " << counter << endl; 

    return 0;
}