//time complexity : O(log10n)
//space complexity : O(1)


#include <iostream>
#include <cmath>
using namespace std;

int countdigits(int n){
    if(n==0) return 1;

    int count = 0;

    while(n!=0){
        count++;
        n = n / 10; 
    }
    return count;
}
int main(){
    int n;
    cin >> n;

    cout << countdigits(n);

    return 0;
}