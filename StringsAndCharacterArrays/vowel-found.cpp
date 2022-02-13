#include<bits/stdc++.h>
using namespace std;

string vowel(string S){
    char temp[100];
    int len=0;
    for(int i=0;i<S.size();i++){
        if(S[i]=='a'||S[i]=='e'||S[i]=='i'||S[i]=='o'||S[i]=='u'){
            char a=S.at(i);
            temp[len]=a;
            len++;
        }
    }
    temp[len++]='\0';
return temp;
} 
int main(){
    string s;
    cin>>s;
    cout<<vowel(s);
    return 0;
}