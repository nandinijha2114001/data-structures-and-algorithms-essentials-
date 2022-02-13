#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string temp;
    vector<string> s;
    int n=5;
    while(n--){
        getline(cin,temp);
        s.push_back(temp);
    }
    for(string str: s){
        cout<<str<<endl;
    }
    return 0;
}
