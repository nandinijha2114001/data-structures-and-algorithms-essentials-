#include<iostream>
using namespace std;
int linearsearch(int ar[],int n,int key){
    int i=0;
        while(i<n){
            if(ar[i]==key){
                return i;
                }
            else i++;
            
            }
    return -1;
}
int main(){
    int index,key,ar[]={5,6,8,9,1,4,7,2,10,3};
    cout<<"enter key"<<endl;
    cin>>key;
    int n=sizeof(ar)/sizeof(int);
    index=linearsearch(ar,n,key);
    (index!=-1)?cout<<"key is present at position "<<index:cout<<"key is not present";
    return 0;
}
 