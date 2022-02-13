#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> vect;
int n,x;
cin>>n;
for(int i=0;i<n;i++){
 cin>>x;
 vect.push_back(x);
 }
 for(int i:vect)
 cout<<i;
 return 0;
 }