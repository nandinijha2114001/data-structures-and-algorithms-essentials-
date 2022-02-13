#include<iostream>
#include<algorithm>
using namespace std;
//binary search function
int binarysearch(int ar[],int n,int key){
    int s=0,e=n-1,mid;
        while(s<e){
            mid=(s+e)/2;
            if(ar[mid]==key){
                return mid;
                }
            else if(ar[mid]>key){
                e=mid-1;
                }
            else if(ar[mid]<key){
                s=mid+1;
                }
            }
    return -1;
}
int main(){
    int index,key,ar[]={5,2,6,8,7,9,10,1,4};
    int n=sizeof(ar)/sizeof(int);
    //sorting array in increasing order
    sort(ar,ar+n);
    cout<<"enter key"<<endl;
    cin>>key;
    index=binarysearch(ar,n,key);
    (index!=-1)?cout<<"key is present at position "<<index:cout<<"key is not present";
    return 0;
}
 