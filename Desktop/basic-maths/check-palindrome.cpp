#include<iostream>
#include <math.h>
using namespace std;

bool ispalindrome(int n){
    int original = n, rev = 0;
    while(n != 0){
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev == original;
}
int main(){
    int n; 
    cin >> n;
    cout << ispalindrome(n);
    return 0;
}
