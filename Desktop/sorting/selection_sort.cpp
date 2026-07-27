/*
    Selection Sort

    Approach:
    1. Divide the array into two parts:
       - Sorted part (left side)
       - Unsorted part (right side)
    2. Find the smallest element in the unsorted part.
    3. Swap it with the first element of the unsorted part.
    4. Repeat until the entire array becomes sorted.

    Time Complexity:
    - Best Case:    O(n²)
    - Average Case: O(n²)
    - Worst Case:   O(n²)

    Space Complexity:
    - O(1) (In-place sorting)

    Stable:
    - No

    In-Place:
    - Yes
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "No elements to sort." << endl;
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
