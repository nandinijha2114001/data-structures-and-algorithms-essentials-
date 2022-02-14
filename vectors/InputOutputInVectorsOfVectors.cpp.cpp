#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> vec;
    int rows,column,x;
    cout<<"enter rows"<<endl;
    cin>>rows;
    //input
    for(int i=0;i<rows;i++){
        vector<int> temp;
        cout<<"enter column"<<endl;
        cin>>column;
        for(int j=0;j<column;j++){
            cin>>x;
            temp.push_back(x);
        }
        vec.push_back(temp);
    }
    //output
    cout<<"vector:"<<endl;
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}