#include<iostream>
#include<math.h>
using namespace std;
    int numberofsteps(int num) {
        int steps;
        for(steps=0;num>0;steps++){
            if(num %2==0){
            num=num/2;
            }
            else{
            num=num-1;
            }
        }
            return steps;
        }
        int main(){
            int num;
            int steps=0;
            cout<<"enter num";
            cin>>num;
            cout<<" "<<numberofsteps(num);
            return 0;
        }