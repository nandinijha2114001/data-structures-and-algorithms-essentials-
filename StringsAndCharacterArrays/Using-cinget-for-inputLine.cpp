#include<iostream>
using namespace std;
int main(){
    char sentence[100];
    char temp;
    int len=0;
    //input
    while(temp!='\n'){
        temp=cin.get();
        sentence[len++]=temp;
    }
    //for avoiding garbage value at the end
    sentence[len++]='\0';
    //display
    cout<<sentence;
    return 0;
}