#include<iostream>
using namespace std;
int main(){
    int n;
 int fact=1;
 int sum=0;
 cout<<"enter no of terms to generate series";
 cin>>n;
 for(int i=1;i<=n;i++){
    fact = fact*i;
    sum = sum + fact;
 }
 cout<<sum;
 return 0;  

    }
