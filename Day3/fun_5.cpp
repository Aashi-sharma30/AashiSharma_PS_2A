#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int x,n,fact=1,sum=0;
    cout<<"enter the value of x";
    cin>>x;
    cout<<"enter the value of n";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*i-1;j++){
            fact=fact*j;
            }
            float term = pow(-x,j)/fact;
            sum = sum + term;

        }
        cout<<"sum";
        return 0;
    }
