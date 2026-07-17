/*
----------------------------------------------------------
Problem: Armstrong Number

Approach:
1. Count the number of digits using log10(n) + 1.
2. Extract each digit using n % 10.
3. Raise each digit to the power of the total digits.
4. Add the result to the sum.
5. Compare the sum with the original number.

Time Complexity: O(d) ≈ O(log₁₀ n)
- Counting digits using log10() takes O(1).

Space Complexity: O(1)
- Only a constant amount of extra memory is used.
------------------------------------------------------------------------
*/

#include <cmath>
#include <iostream>
using namespace std;

bool isArmstrong(int n)
{
    if (n < 0) return false;
    if (n == 0) return true;

    int original = n;
    int digits = static_cast<int>(log10(n)) + 1;
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum += static_cast<int>(pow(digit, digits));
        n /= 10;
    }

    return sum == original;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isArmstrong(n))
        cout << "Armstrong number";
    else
        cout << "not Armstrong number";

    cout << '\n';
    return 0;
}


