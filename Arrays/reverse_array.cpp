// Problem: Reverse an array
// Approach: Two pointers using while loop
// Time Complexity: O(n)
// Space Complexity: O(1)
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
   // Input array
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
  // Two pointers
    int i = 0;
    int j = n - 1;

    // Reversing of  array
    while(i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }

    // Output reversed array
    for(int k = 0; k < n; k++) {
        cout << arr[k] << " ";
    }

    return 0;
}
