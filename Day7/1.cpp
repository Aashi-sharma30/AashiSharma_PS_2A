#include<iostream>
using namespace std;
int main(){
//     char str[100];
//     int len=0,i=0;
//     cout<<"enter a string";
//     gets(str);
//     while(str[i]){
    
//         len++;
//         i++;
//     }
//     cout<<"string length="<<len<<" ";
//     return 0;
// }
string str;
 int count=0;
 cout<<"enter a string";
//  gets(str);
 int n=str.size();
 for(int i=0;i<n;i++){
    count++;
}
cout<<"length is"<<count<<endl;
return 0;
}