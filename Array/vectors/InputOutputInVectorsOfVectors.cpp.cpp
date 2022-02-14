#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> vec;
    int rows,column,x;
    cin>>rows;
    //input
    for(int i=0;i<rows;i++){
        vector<int> temp;
        cin>>column;
        for(int j=0;j<column;j++){
            cin>>x;
            temp.push_back(x);
        }
        vec.push_back(temp);
    }
    //output
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}