
#include <bits/stdc++.h>
using namespace std;
int reverse(int ar[],int s,int n){
    //base case
    if(s==n-1 or s>n-1) return 0;
     swap(ar[s],ar[n-1]);
    //recursive call
    return reverse(ar,s+1,n-1);
}

int main(){
    int ar[10];
    int n;
    cout<<"enter limits"<<endl;
    cin>>n;
    cout<<"enter elements"<<endl;
    for(int i=0;i<n;i++)  cin>>ar[i];
    cout<<"reversed array:"<<endl;
    reverse(ar,0,n);
    for(int i=0;i<n;i++) cout<<ar[i]<<endl;
    return 0;
}