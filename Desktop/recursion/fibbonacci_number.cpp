/*
    Problem: Find the Nth Fibonacci Number Using Recursion

    Approach:
    - If n is 0, return 0.
    - If n is 1, return 1.
    - Otherwise, recursively calculate:
        Fibonacci(n - 1) + Fibonacci(n - 2)
    - The recursion continues until it reaches the base cases.

    Time Complexity: O(2^N)
    - Each function call generates two more recursive calls.

    Space Complexity: O(N)
    - Due to the recursive call stack.
*/

#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main(){
    int n;

    cout << "enter the value of n: ";
    cin >> n;

    cout << "the " << n << "th fibonacci number is: ";
    cout << fibonacci(n);

    return 0;
}
