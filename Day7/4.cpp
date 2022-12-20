#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int i;
    char str[100];
    int count=0;
    cout<<"enter a string";
    gets(str);
    // n=length of string(S)
    // n=str.size();
    for(i=0;i<strlen(str);i++){
        if(str[i]==' '){
            count++;
        }
    }
    count=count+1;
    cout<<"no of words"<<count<<endl;
    return 0;
}