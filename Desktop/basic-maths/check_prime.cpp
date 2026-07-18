/*
------------------------------------------------------------
Problem: Check if a Number is Prime

Approach:
1. A prime number has exactly two factors: 1 and itself.
2. If n is less than or equal to 1, it is not prime.
3. Check divisibility from 2 to √n.
4. If any number divides n exactly (n % i == 0), it is not prime.
5. If no divisor is found, the number is prime.

Time Complexity: O(√n)

Space Complexity: O(1)
------------------------------------------------------------
*/

#include<iostream>
using namespace std;

int main(){
    int n;
     cin >> n;

     if(n<=1){
        cout << "not prime";
        return 0 ;
     }
    bool isprime = true;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            isprime = false;
            break;
        }
    }
    if(isprime) {
        cout << "it is prime";
    }
      else{
        cout << "not prime";
      }
      return 0;
}