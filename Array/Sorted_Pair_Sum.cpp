//Given a sorted array and number x, find the pair whose sum is closest to x.
#include<bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x){
pair<int,int> res;
int n=arr.size();
int sum=arr[0]+arr[1];
int t=0;
(sum>x)?t=sum-x:t=x-sum;
int l=t;
int r1,r2;
for(int i=1;i<n;i++){
    for(int j=i+1;j<n;j++){
        sum=arr[i]+arr[j];
        (sum>x)?t=sum-x:t=x-sum;
        if(l>t){
            r1=arr[i];
            r2=arr[j];
        }
        l=min(l,t);
    }
}
  
 res.first=r1;
 res.second=r2;
 return res;
}