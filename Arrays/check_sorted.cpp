// Problem: Check if array is sorted (ascending)
// Approach: Compare adjacent elements in one traversal
// Time Complexity: O(n)
// Space Complexity: O(1)
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter number of elements:";
    cin>>n;
int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
     }
    bool isSorted=true;
    // We check only till n-1 because we compare arr[i] with arr[i+1].

    // The last element has no next element to compare with.
     for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            isSorted=false;
            break;
          //if condition is satisfied no need to check further

        }
     }
     if(isSorted==true){
        cout<<"sorted";
     }
     else {
        cout<<"not sorted";
     }
     return 0;
}
