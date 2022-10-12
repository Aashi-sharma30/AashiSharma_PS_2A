#include<stdio.h>
int main()
{
    int k,d,c,f,y,M,r,u,v,w;
    char m;
    printf("enter date");
    scanf("%d",&k);
    printf("enter month");
    scanf("%c",&m);
    printf("enter year");
    scanf("%d",&y);
    if(m=='mar')
    {
        M=1;
    }
    else if(m=='apr')
    {
        M=2;
    }
    else if (m=='may')
    {
        M=3;
    }
    else if(m=='june')
    {
        M=4;
    }
    else if(m=='july')
    {
        M=5;
    }
    else if(m=='aug')
    {
        M=6;
    }
    else if(m=='sep')
    {
        M=7;
    }
    else if(m=='oct')
    {
        M=8;
    }
    else if(m=='nov')
    {
        M=9;
    }
    else if(m=='dec')
    {
        M=10;
    }
    else if(m=='jan')
    {
        M=11;
    }
    else if(m=='feb')
    {
        M=12;
    }
    d=y%100;
    c=y/100;
    u=(13*M-1)/5;
    v=d/4;
    w=c/4;

    f=(k+u+d+v+w-2*c);
    r=f/7;
    if(r==0)
    {
        printf(" day is sunday");
    }
    else if(r==1)
    {
        printf("day is monday");
    }
    else if(r==2)
    {
        printf("day is tuesday");
    }
    else if(r==3)
    {
        printf("day is wednesday");
    }
    else if(r==4)
    {
        printf("day is thursday");
    }
    else if(r==5)
    {
        printf("day is friday");
    }
    else if(r==6)
    {
        printf("day is saturday");
    }
    return 0;
}