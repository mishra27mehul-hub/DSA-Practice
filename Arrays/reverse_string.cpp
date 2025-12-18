//problem:Reverse a string
//approach:Using two pointers
//Time complexity:O(n)
//Space complexity:O(1)


#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;

    int i=0;
    int j=s.length()-1;
    //reversing with help of two pointers

while(i<j){
    char temp=s[i];
    s[i]=s[j];
    s[j]=temp;
 i++;
 j--;
}

cout<<s;
}
