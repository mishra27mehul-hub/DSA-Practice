// Problem: Remove Duplicates from Sorted Array
// Approach: Two pointers (overwrite duplicates in-place)
// Time Complexity: O(n)
// Space Complexity: O(1)#include<bits/stdc++.h>
using namespace std;
int main(){
  
    int n;
    cout<<"number of elements in an array";
    cin>>n;

      int arr[n];
      for(int i=0;i<n;i++){
    cin>>arr[i];
      }

    int i=0;

    for(int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            i++;

            arr[i]=arr[j];
        }
       
        }
         int k=i+1;

        cout<<"unique count:"<<k<<endl;
        cout<<"unique elements are:"<<" ";
        for(int x=0;x<k;x++){
            cout<<arr[x]<<" ";

    }
    return 0;
}
