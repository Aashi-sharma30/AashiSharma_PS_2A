#include<iostream>
using namespace std;
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n,fact;
    cout<<"enter the no of terms";
    cin>>n; 
    int sum = 0;
    for(int i=1;i<=n;i++){

       int div=fact/i;

    sum = sum + div;
    }
    cout<<sum;
}