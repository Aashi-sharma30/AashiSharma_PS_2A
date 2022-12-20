#include<iostream>
using namespace std;
int main(){
    int n ,i;
    cout<<"enter a number";
    cin>>n;
    for(i=2;i>1;i++){
        while(n%i==0){
            cout<<i<<" ";
            n=n/i;

        }
    }
    return 0;
}-