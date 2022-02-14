#include<iostream>
#include<algorithm>
using namespace std;

//inbuilt comparator (to arrange elements in certain order)
bool compare(int a, int b){
    return a>b;
}
int main(){
int arr[]={2,5,3,7,1,6,0};
int n=sizeof(arr)/sizeof(int);

//inbuilt sort
sort(arr,arr+n);
for(int i:arr){
    cout<<i<<" ";
}
//inbuilt comparator
cout<<endl;
sort(arr,arr+n,compare);
for(int i:arr){
    cout<<i<<" ";
}
return 0;
}