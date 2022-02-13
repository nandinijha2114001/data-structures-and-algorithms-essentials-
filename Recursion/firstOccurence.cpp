#include <iostream>

using namespace std;

int bubblesort(int ar[], int n){
    for(int i=1;i<=n-1;i++){
        for(int j=0;j<=n-i-1;j++){
         if(ar[j]>ar[j+1]){
            swap(ar[j],ar[j+1]);
         }
        }
    }
        return 0;
}

int main()
{
   int ar[6]={5,3,4,1,2,6};
   int n=sizeof(ar)/sizeof(int);
   
   cout<<"sorted array"<<endl;
  bubblesort(ar,n);
  for(auto x : ar){
        cout<<x<<" ";
    }


    return 0;
}