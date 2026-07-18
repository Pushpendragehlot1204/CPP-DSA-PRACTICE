/*
------------------------------------------------------------
Problem: Print All Divisors of a Number

Approach:
1. Loop from 1 to √n.
2. If i divides n (n % i == 0), then i is a divisor.
3. Print i.
4. If i is not equal to n / i, print n / i as well.
5. This avoids checking every number from 1 to n, making the solution efficient.

Time Complexity: O(√n)
- We iterate only up to √n.

Space Complexity: O(1)
- Only a few integer variables are used.
------------------------------------------------------------
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            cout << i << " ";
            if(i != n / i)
                cout << n / i << " ";
        }
    }
    return 0;
}
   