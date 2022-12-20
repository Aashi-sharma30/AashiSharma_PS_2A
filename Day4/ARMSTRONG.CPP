#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    int temp=n;
    int result=0;
    
    cout<<"enter a digit";
        cin>>n;
    while(n>0){
        int rem=n%10;
        int result= result+pow(rem,3);
        n=n/10;
        if(result==temp){
            cout<<"arm no"<<endl;
        }
            else{
                cout<<"not arm no"<<endl;
            }
        }
        return 0;
    }


