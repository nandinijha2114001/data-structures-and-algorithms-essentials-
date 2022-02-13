#include<bits/stdc++.h>
using namespace std;
int main(){
 char temp;
 temp=cin.get();
 int digit=0,space=0;
 while(temp!='\n'){
     if(temp == ' ' or temp=='\t'){
          space++;
     }
     else if(temp>='0' and temp<='9'){
         digit++;
     }
     temp=cin.get();
 }
 cout<<"digit and spaces are: "<<digit<<" "<<space<<endl;
 return 0;
}