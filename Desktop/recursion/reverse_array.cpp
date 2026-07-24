/*
    Problem: Reverse an Array Using Recursion

    Approach:
    - Use two pointers:
      - left starts from the beginning.
      - right starts from the end.
    - Swap the elements at left and right.
    - Recursively call the function with:
        left + 1
        right - 1
    - Stop when left >= right.

    Time Complexity: O(N)
    - Each element is swapped at most once.

    Space Complexity: O(N)
    - Due to the recursive call stack.
*/

#include<iostream>
using namespace std;

void reversearray(int arr[], int left, int right){
    if(left >= right)
    return;

    swap(arr[left], arr[right]);

    reversearray(arr, left+1, right-1);
}
int main(){
    int n;
    cout << "enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "enter the array elements: ";
    for(int i =0; i < n; i++){
        cin >> arr[i];
    }
        reversearray(arr, 0, n-1);

        cout << "reversed array: ";
        for(int i = 0; i<n; i++){
            cout << arr[i] << " ";
        }
       

    
    return 0;
}
