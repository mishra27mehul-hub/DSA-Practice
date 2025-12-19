// Problem: Find maximum element in an array
// Approach: Traverse array and keep updating maximum
// Time Complexity: O(n)
// Space Complexity: O(1)
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout<<"number of elements in array:";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxElement=arr[0];//first assume 1st element is max

    for(int i=;i<n;i++){//check others if they are larger
        if(maxElement<arr[i]){
            maxElement=arr[i];//update

        
        }

    }
    cout<<"the max element is:"<<maxElement<<endl;
   
    return 0;
}
