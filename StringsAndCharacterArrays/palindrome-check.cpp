#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    string temp;
    temp=str;
    reverse(temp.begin(),temp.end());
    if(temp==str){
        return true;
    }
    else return false;
}
int main(){
 string str;
 cin>>str;
 bool value=isPalindrome(str);
 if(value==true){
     cout<<"Palindrome";
 }
 else cout<<"not palindrome";
 return 0;
}