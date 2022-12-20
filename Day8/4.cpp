#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main(){
    int arr[100];
    int c=0;
    cout<<"enter no of elements";
    cout<<"enter arr";
    for(i=0;i<n;i++){
    cin>>arr[i];
    }
    int i,mid,r;
    while(n!=0){
        r=n%10;
       n=n/10;
        c++;
        }
        if(c % 2!= 0)
        mid=c % 2;
     int leftsum=0;
    int rightsum=0;

    for(i=0;i<mid;i++){
        leftsum= int(arr[i]);
     }
     for(i=mid+1;i<=c;i++){
        rightsum= int (arr[i]);
    }
    if(leftsum==rightsum){
        cout<<"balanced";
    }
    else{
        cout<<"unbalanced";
    }
    return 0;
    } 