#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr) {
    int l=arr[0];
    for(int i=0;i<arr.size();i++){
        if(l<arr[i]){
            l=arr[i];
        }
    }
    return l;
}
int main(){
    vector<int> arr;
    int n;
    cin>>n;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }
    cout<<"largest element is"<<largestElement(arr);
    return 0;
}