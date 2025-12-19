// Problem: Find second largest element in an array
// Approach: Track largest and second largest during traversal
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
int largest=arr[0];// assume first element as largest
int secondLargest=INT_MIN;//initially no second largest element

for(int i=1;i<n;i++){
if (arr[i]>largest){
    secondLargest=largest;//assign value of largest to second largest in this case
    largest=arr[i];//update 
}
else if (arr[i]<largest&&arr[i]>secondLargest){
    secondLargest=arr[i];

}
}   
cout<<"largest value is:"<<largest;
cout<<"second largest value is:"<<secondLargest;
return 0;
}
