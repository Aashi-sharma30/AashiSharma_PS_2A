#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"enter a string";
    char c='a';
    int n,count=0;
    n=str.size();
    for(int i=0;i<n;i++){
        if(str[i]==c){
            count++;
        }
    }
    cout<<"frequencies are"<<count<<endl;
    return 0;
}
    