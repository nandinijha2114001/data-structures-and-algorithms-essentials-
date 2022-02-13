#include<bits/stdc++.h>
using namespace std;
int main(){
    //each string can have upto 100 characters
    char sentence[100];
    char largest[100];
    //number of strings 
    int n;
    cin>>n;

    int largest_string=0;
    while(n--){
        //enter string
        cin.getline(sentence,100);
        //calculate length
        int length = strlen(sentence);
    
        if(length>largest_string){
        strcpy(largest,sentence);
        largest_string=length;
        }
    }
    cout<<largest;
    return 0;
    
}