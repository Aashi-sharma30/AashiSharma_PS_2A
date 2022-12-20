#include<iostream>
using namespace std;
int handshake(int n){
    if(n==1){
        return 0;
    }
    else{
        return (n-1) + handshake(n-1);
    }
}
    int main(){
        int n;
        cout<< "enter n";
        cin>>n;
        cout<<" "<<handshake(n);
        return 0;
    
}