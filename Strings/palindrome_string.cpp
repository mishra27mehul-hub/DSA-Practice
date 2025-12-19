// Problem: Linear Search
// Approach: Traverse array and compare each element with target
// Time Complexity: O(n)
// Space Complexity: O(1)
#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;

    int i=0;
    int j=s.length()-1;

    bool isPalindrome=true;

    while(i<j){
        if(s[i]!=s[j]){
            isPalindrome=false;
            break;

        }
        i++;
        j--;
    }
    if(isPalindrome==true){
       cout<<"Palindrome";
    }
    else
    cout<<"Not Palindrome";
    return 0;
}
