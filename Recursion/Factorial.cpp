#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    //base case
    if(n==0 or n==1){
        return 1;
    }
    //recursive case
    return n * fact(n-1);
}
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    cout<<fact(n);
    return 0;
}