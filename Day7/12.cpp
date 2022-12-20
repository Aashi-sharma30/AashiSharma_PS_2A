#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;
int main(){
    char str[70];
    int i;
    int count =0;
    cout<<"enter a string";
    gets(str);
    for(int i=0;i<strlen(str);i++){
        if((str[i]>='a '&& str[i]<='z')||(str[i]>='A' && str[i]<='Z')||(str[i]>='0'&& str[i]<='9')||(str[i]=='_'))
        {
            count++;
        }
    }
    if(count==strlen(str))

 cout<<("is valid identifier");

 else
 cout<<("not valid identifier");


return 0;
}
  