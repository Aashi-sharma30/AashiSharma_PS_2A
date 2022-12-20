#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter a alphabets";
    cin>>ch;
    if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z')){

    if(ch>='A'&& ch<='Z'){
        ch=ch+32;
    }
    else if(ch>='a' && ch<='z'){
        ch=ch-32;
    }
    cout<<"converted character is"<<ch<<endl;
    }
    else{
        cout<<"invalid char";
    }
    return 0;
}


