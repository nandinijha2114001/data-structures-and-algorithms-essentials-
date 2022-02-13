#include<iostream>
using namespace std;
int largestsum(int a[],int n){
    int large=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int s=0;
            for(int k=i;k<=j;k++){
                s=s+a[k];
            }
            large=max(large,s);
        }
    }
    return large;
}
int main(){
    int n,a[10];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"largest sum of subarray is "<<largestsum(a,n);
    return 0;
}
 