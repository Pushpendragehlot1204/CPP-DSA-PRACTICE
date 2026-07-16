/*
--------------------------------------------------------
problem: GCD/HCF using Euclidean algorithm

Approach:
use the Euclidean Algorithm:
gcd(a, b) = (b, a % b)
repeat until b becomes 0.

Time complexity: O(log(min(a, b)))
space complexity: O(1)

--------------------------------------------------------
*/

#include<iostream>
using namespace std;
 int gcd( int a, int b)
 {
    while(b!=0)
    {
        int rem = a%b;
         a = b;
         b = rem;
    }
    return a;
 }
 int main()
{
    int a , b;
    cout << "enter two numbers: ";
    cin >> a >> b;

    cout << "GCD = " <<gcd(a, b);

    return 0;

}