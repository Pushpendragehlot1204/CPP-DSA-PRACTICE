/*
Problem: Print Numbers from 1 to N Using Recursion

Approach:
- Recursively call the function with (n - 1).
- After reaching the base case, print the current value of n.
- Since printing happens during backtracking, the numbers are printed in increasing order.

Time Complexity: O(n)
- The function makes one recursive call for each number from 1 to n.
- Therefore, a total of n function calls are made.

Space Complexity: O(n)
- The recursion call stack stores one function call for each recursive call.
- The maximum recursion depth is n.
*/

#include<iostream>
using namespace std;

void printnumbers(int n){
    if(n == 0)
        return;

    printnumbers(n - 1);

    cout << n << " ";
}

int main(){
    int n;
    cin >> n;

    printnumbers(n);

    return 0;
}