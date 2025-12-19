// Problem: Find minimum element in an array
// Approach: Traverse array and keep updating minimum
// Time Complexity: O(n)
// Space Complexity: O(1)

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"number of elements in an array:"<<endl;
cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int minElement=arr[0];//assume first element is minimum

        for(int i=1;i<n;i++){
        if(minElement>arr[i]){//check whether there is smaller element
            minElement=arr[i];//update
        }
    }
    cout<<"the min element is:"<<minElement;

    return 0;
}
