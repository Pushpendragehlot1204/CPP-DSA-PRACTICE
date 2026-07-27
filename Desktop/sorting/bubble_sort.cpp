/*
    Bubble Sort

    Approach:
    1. Compare each pair of adjacent elements.
    2. If the left element is greater than the right element,
       swap them.
    3. After each pass, the largest element moves (bubbles)
       to its correct position at the end.
    4. Repeat until the array becomes sorted.
    5. If no swaps occur in a pass, the array is already sorted,
       so stop early.

    Time Complexity:
    - Best Case:    O(n)   (Already Sorted)
    - Average Case: O(n²)
    - Worst Case:   O(n²)

    Space Complexity:
    - O(1) (In-place sorting)

    Stable:
    - Yes

    In-Place:
    - Yes
*/

#include <algorithm>
#include <iostream>
#include <vector>
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

    for (int i = 0; i < n; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
