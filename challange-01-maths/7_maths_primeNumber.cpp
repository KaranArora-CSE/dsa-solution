// 📅   9 April 2024
// 🚨   Lecture 3 - striver Maths 
// 🎯   Prime Number - 

// 📌 App1 - Get all factor ans check prime 
// 📌 App2 - School way divide from num till possible

#include <bits/stdc++.h>
using namespace std;

void checkPrime(int n);

int main(){
    int n1 = 99;
    int n2 = 97;
    bool isPrime=true;

    checkPrime(n1);
    checkPrime(n2);

    return 0;
}

void checkPrime(int n){
    int counter = 0;

    for(int i=1;i<=n;i++){
        if(n%i==0) counter++;
    }

    if(counter==2) cout << n << " - Prime Number" << endl;
    if(counter!=2) cout << n << " - Not a Prime Number" << endl;
}

// output
// 99 - Not a Prime Number
// 97 - Prime Number