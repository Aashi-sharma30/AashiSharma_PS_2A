#include<iostream>
using namespace std;
int main(){
    string str_1,str_2,result;
    cout<<"enter first string";
    getline(cin,str_1);
    cout<<"enter second string";
    getline(cin,str_2);
    result=str_1 + str_2;
    cout<<"concatenate string is"<<result<<endl;

    return 0;
}