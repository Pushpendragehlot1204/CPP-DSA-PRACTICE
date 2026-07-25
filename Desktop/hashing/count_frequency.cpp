/*
Problem: Count Frequency of Elements

Approach:
1. Create an unordered_map to store the frequency of each element.
2. Traverse the array once.
3. For each element, increment its count in the hash map.
4. Traverse the hash map and print each element with its frequency.

Time Complexity:
- O(n) Average Case

Space Complexity:
- O(n)
*/

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    vector<int> arr = {5, 3, 2, 5, 8, 6, 9, 8,};
    unordered_map<int, int> freq;

    for(int num: arr){
    freq[num]++;
    }

    cout << "element: frequency\n";
    for(auto it : freq){
        cout << it.first << " : " << it.second << endl;


    }
    return 0;



}
