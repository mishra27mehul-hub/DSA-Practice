// Problem: Linear Search 
// Approach: Traverse array and compare each element with target
// Time Complexity: O(n)
// Space Complexity: O(1)
#include<iostream>

using namespace std;

int main(){

    int arr[]={1,2,3,4};
    int target;
    cout<<"the target is :";
    cin>>target;

    bool found=false;

    for(int i=0;i<4;i++){
         if(arr[i]==target){
            found=true;
             break;
         }
    }
    if(found){
cout<<"FOUND";
    }
    else{
        cout<<"NOT FOUND";
    }
    return 0;
}
