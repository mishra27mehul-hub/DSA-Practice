// Problem: Search Insert Position
// Approach: Linear scan on already sorted array
// Time Complexity: O(n)
// Space Complexity: O(1)

#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 3, 5, 6};
    int target;
    cin >> target;

    int index = 4;   // default size of array 
  // one more than index of array to insert in case if target is greater than last element
  

    for(int i = 0; i < 4; i++) {
        if(arr[i] >= target) {
            index = i;
            break;
        }
    }
// break statement to break the loop immediately
    cout << index;
    return 0;
}
