#include<iostream>
using namespace std;
void printsubarray(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<"(";
            for(int k=i;k<=j;k++){
                cout<<a[k];
            }
            cout<<")";
        }
        cout<<endl;
    }
    
}
int main(){
    int n,a[10];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    printsubarray(a,n);
    return 0;
}
 