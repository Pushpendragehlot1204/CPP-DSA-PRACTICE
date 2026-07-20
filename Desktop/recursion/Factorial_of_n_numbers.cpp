/*
Problem: Factorial of a Number Using Recursion

Approach:
- Base Case:
  If n == 0 or n == 1, return 1 because 0! = 1 and 1! = 1.
- Recursive Case:
  Return n * factorial(n - 1).
  The function keeps multiplying the current number with the
  factorial of the previous number until it reaches the base case.

Time Complexity: O(n)
- The function is called once for each number from n to 1.

Space Complexity: O(n)
- Due to the recursive function call stack.
*/

#include <iostream>
using namespace std;

int factorial(int n){
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "Factorial of " << n << " = " << factorial(n);
    return 0;
}
