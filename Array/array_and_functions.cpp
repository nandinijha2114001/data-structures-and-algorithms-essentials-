#include <iostream>
using namespace std;
void displayarray(int ar[], int n){
for(int i;i<n;i++){
  cout<<ar[i]<<endl;
  }
}
int main()
{
 int ar[]={1,2,3,4,5};
 int n=sizeof(ar)/sizeof(int);
 displayarray(ar,n);
 return 0;
}
