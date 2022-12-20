#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int i,n,m;
    cout<<"size";
    cin>>n;
    cout<<"array";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
    return 0;  


}
