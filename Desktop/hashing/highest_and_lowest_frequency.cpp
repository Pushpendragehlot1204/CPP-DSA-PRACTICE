/*
Problem: Find the Highest and Lowest Frequency Element

Approach:
1. Use an unordered_map to count the frequency of each element.
2. Traverse the array and store the frequency of every element.
3. Traverse the hash map to find:
   - The element with the highest frequency.
   - The element with the lowest frequency.
4. Print both elements and their frequencies.

Time Complexity:
- O(n) Average Case

Space Complexity:
- O(n)
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
   int n;
   cout << "enter the number of elements : ";
   if (!(cin >> n) || n <= 0) {
      cout << "Invalid number of elements.\n";
      return 1;
   }

   vector<int> arr(n);
   cout << "enter array elements : ";
   for (int i = 0; i < n; i++) {
      cin >> arr[i];
   }

   unordered_map<int, int> freq;
   for (int num : arr) {
      freq[num]++;
   }

   int highestElement = arr[0];
   int lowestElement = arr[0];
   int maxFreq = 0;
   int minFreq = n;

   for (auto &it : freq) {
      if (it.second > maxFreq) {
         maxFreq = it.second;
         highestElement = it.first;
      }
      if (it.second < minFreq) {
         minFreq = it.second;
         lowestElement = it.first;
      }
   }

   cout << "\nHighest Frequency Element: " << highestElement
       << " (Frequency = " << maxFreq << ")" << endl;

   cout << "Lowest Frequency Element: " << lowestElement
       << " (Frequency = " << minFreq << ")" << endl;

   return 0;
}
