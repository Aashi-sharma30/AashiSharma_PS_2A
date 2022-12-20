#include<iostream>
using namespace std;
int main(){
    int arr[100],i,m,d1,d;
    int k=54;
    cout<<"enter element of arr";
    for(i=0;i<100;i++){
    cin>>arr[i];
    }
    for(i=0;i<100;i++){
        if(arr[i]<k){
            m=arr[i];
            int d1=m%10;
            m=m/10;
            }
            d=d1-m;
            if(d==1){
                for(i=0;i<100;i++){
                    cin>>arr[100];
                }
            }
            
        }
        return 0;
    }
