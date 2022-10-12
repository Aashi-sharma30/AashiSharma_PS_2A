#include<iostream>
using namespace std;
int main(){
    

    int n,i;
    cout<<"enter the value of n";
    cin>>n;

 i=1;
while(i<=n){
    int space=1;
    while(space<=n-i){
        cout<<" ";
    }
    space=space++;
        int star=1;
        while(star<=i){
            cout<<"*";
            star++;
        }
        cout<<endl;
        i++;


    }
    i=2;
    while(i<=n){
        int star=1;
        while(star<=i){
            cout<<"*";
            star++;

        }
        cout<<endl;
        i++;
 
    }
}




