#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string str,int i, int n){
    //base case
    if(i==n-1 or i>n-1) return true;
    //recursive case
    if(str[i]==str[n-1] && isPalindrome(str,i+1,n-1)) return true;
    return false;
}
int main(){
    string str;
    bool result;
    cin>>str;
    int n=str.size();
    result=isPalindrome(str,0,n);
    if(result == true){
         cout<<"palindrome";
    }
    else cout<<"not palindrome";
    return 0;
}