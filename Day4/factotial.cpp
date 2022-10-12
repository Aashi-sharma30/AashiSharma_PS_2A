#include<sstdio.h>
#include<conio.h>
int factorial(int n)
int fact;
while(n>0){
    if(n==1){
    return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        return n*fact(n-1)
    }
    } 
    int main(){
        int n;
        cout<<"enter the value lf n"<<endl;
        cin>>n;

    factorial(n)
    }


