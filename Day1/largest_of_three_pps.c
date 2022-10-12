#include<stdio.h>
void main(){
    int a,b,c;
    printf ("enter three numbers \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        printf("%d is bigger",a);
    }
    else if(b>c && b>a){
        printf("%d is bigger",b);
    }
    else{
        printf("%d is bigger",c);
    }
}
