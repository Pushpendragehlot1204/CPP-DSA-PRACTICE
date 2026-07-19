/*
Problem: Print Numbers from N to 1 Using Recursion

Approach:
- Print the current value of n.
- Recursively call the function with (n - 1).
- Stop when n becomes 0.

Time Complexity: O(n)
- The function makes one recursive call for each number from n to 1.
- Therefore, a total of n function calls are made.

Space Complexity: O(n)
- The recursion call stack stores one function call for each recursive call.
- The maximum recursion depth is n.
*/

#include <iostream>
using namespace std;

void printNumbers(int n) {
    // Base Case
    if (n == 0)
        return;

    // Print current number
    cout << n << " ";

    // Recursive Call
    printNumbers(n - 1);
}

int main() {
    int n;
    cin >> n;

    printNumbers(n);

    return 0;
}