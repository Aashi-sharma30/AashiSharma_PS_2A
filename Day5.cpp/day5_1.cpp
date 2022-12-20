#include<iostream>
using namespace std;
int main(){

int lb,ub,arr[100];
int i,n;
cout<<"enter the no of elements";
cin>>n;
cout<<"enter the elements of array";
cin>>arr[100];
for(i=0;i<n;i++){
if(arr[lb]>arr[ub])
{
    lb++;

}
else{
    ub--;
}
}
cout<<arr[lb];
return 0;
}