#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,x;
    int fact=1,sum=1;
    cout<<"enter the value of x";
    cin>>x;
    cout<<"enter the terms to gen series";
    cin>>n;
    for(int i=1;i<=n;i++){
        fact = fact*i;
        float series = pow(-x,i)/fact;
        sum = sum + series;
 
    }
    cout<<sum;
    return 0;
}