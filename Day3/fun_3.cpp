#include<iostream>
#include<math.h>
using namespace std;
int main(){
int n;
float fact=1,sum=1,x;
// float pow;int x;
cout<<"enter the no of terms to generate series";
cin>>n;
cout<<"enter the value of x";
cin>>x;
for(int i=1;i<=n;i++){
   fact = fact*i;
     float series = pow(x,i)/fact;
   sum = sum + series;

}
cout<<sum;
return 0;
}