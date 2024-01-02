// The Armstrong numbers of first kind up to 10 digits are 
// 1, 2, 3, 4, 5, 6, 7, 8, 9, 153, 370, 371, 407, 1634, 8208, 9474,

// Striver Sheet Maths

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int number = 3711;
    int numberCopy = number;
    int sum = 0;

    int digit = 0;
    
    while(numberCopy>0){
        
        int temp = 0;
        digit = numberCopy%10;
        temp = digit * digit * digit;
        
        numberCopy = numberCopy/10;
        sum = temp + sum;
    }

    if(sum == number) cout << "Armstrong";
    if(sum != number) cout << "Not Armstrong";

    return 0;
}