#include <bits/stdc++.h>

using namespace std;
int lower(vector<int> A,int Val){
    int min,temp=0,lb=0,run=1;
    //if Val is the smalest element return -1
        for(int i=0;i<A.size();i++){
        if(A[i]<Val){
            run=0;
        }
    }
    if(run!=0) return -1;
    
    //checking for lower bound
    min=Val-A[0];
    for(int i=1;i<A.size();i++){
        temp=Val-A[i];
        if(min>temp){
          if(temp>=0){
           min=temp; 
           lb=i;
           }
         }
    }
    lb=A[lb];
    return lb;
}

int main()
{
    vector<int> A;
    int n,x;
    cout<<"enter limit";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        A.push_back(x);
    }
    cout<<"enter value";
    int Val=0;
    cin>>Val;
    cout<<lower(A,Val);
    return 0;
}