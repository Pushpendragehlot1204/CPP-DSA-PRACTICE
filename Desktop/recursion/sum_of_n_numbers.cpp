/*
Problem: Sum of First N Natural Numbers Using Recursion

Approach:
- Base Case:
  If n == 0, return 0 because the sum of 0 numbers is 0.
- Recursive Case:
  Return n + sum(n - 1).
  The function keeps calling itself until it reaches the base case.

Time Complexity: O(n)
- The function is called once for each number from n to 0.

Space Complexity: O(n)
- Due to the recursive function call stack.
*/

#include <iostream>
using namespace std;

int sumofN(int n){
    if (n == 0)
        return 0;

    return n + sumofN(n - 1);
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "sum of " << n << " is : " << sumofN(n);
    return 0;
}
