#include <iostream>

using namespace std;
int sum(int arr[],int n){
    int cs=0,ms=0;
    for(int i=0;i<n;i++){
        cs=cs+arr[i];
        if(cs<0){
            cs=0;
        }
        ms=max(cs,ms);
    }
    return ms;
}

int main()
{
    int arr[]={-2,5,1,-1,6,1,3,2,-4};
    int n=sizeof(arr)/sizeof(int);
    cout<<sum(arr,n);
    return 0;
}