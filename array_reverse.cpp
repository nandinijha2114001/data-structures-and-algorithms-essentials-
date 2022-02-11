#include <iostream>
using namespace std;
void arrayrev(int ar[], int n){
    int s=0,e=n-1;
for(int i=0;i<n/2;i++){
    swap(ar[s],ar[e]);
    s++;
    e--;
  }
}
int main()
{
 int ar[10];
 int n,i=0;
 cout<<"enter limit"<<endl;
 cin>>n;
 cout<<"enter array"<<endl;
 for(int i=0;i<n;i++){
     cin>>ar[i];
 }
arrayrev(ar,n);
cout<<"reversed array"<<endl;
i=0;
while(i<n){
    cout<<ar[i]<<" ";
    i++;
}
return 0;
}