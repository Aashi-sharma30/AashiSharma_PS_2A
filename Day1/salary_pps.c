#include<stdio.h>
int main(){
    float bs,hra,da,pf,allow,total_salary;//bs-basic salary

    char grade ;
    printf("enter basic salary \n");
    scanf("%f",& bs);
    printf("enter the grade \n");
    scanf("%s",& grade);

    hra=0.20*bs;
    da=0.50*bs;
    if(grade=='a'){
        allow = 1700;
    }
    else if(grade=='b'){
    allow = 1500;
    }
    else if(grade='c'){
        allow = 1300;
    }
    else{
    pf=0.11*bs;
       
    }
    total_salary=bs+hra+da+allow-pf;
    printf("total salary is %f",total_salary);
    return 0;
}



    
