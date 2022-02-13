#include<bits/stdc++.h>
using namespace std;


int compress(vector<char>& chars) {
    // your code goes here
       vector<char> temp;
    for(int i=0;i<chars.size();i++){
             int len=1;
             while(i<chars.size() && chars[i]==chars[i+1]){
                len++;
                i++;
            }
            temp.push_back(chars[i]);
            len=char(len);
            cout<<" "<<len<<endl;
            temp.push_back(len);
        }
    return temp.size();
}
int main(){
    vector<char> chars;
    int n;
    char x;
    cout<<"enter limit";
    cin>>n;
    cout<<"enter elements";
    for(int i=0;i<n;i++){
        cin>>x;
        chars.push_back(x);
    }
    cout<<compress(chars);
   return 0;
}