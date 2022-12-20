#include<iostream>
using namespace std;
int main(){
    int arr[100],i,n;
    int sum1=0;
    int sum2;
    int arr1,arr2;
    cout<<"size";
    cin>>n;
    cout<<"elements";
    for(i = 0; i < n; i++){
     cin>>arr[i];
    }
int start=arr[i];
int end=arr[n-1];
int mid=(start+end)/2;
cout<<"arr1";
for(i=0;i<=mid;i++){
   cin>>arr1[i]; 
   cout<<"sum is";
    sum1=sum1+arr1[i];
}
cout<<"arr2";
for(i=mid+1;i<n;i++){
    cin>>arr2[i];
    cout<<"sum2 is";
  sum2=sum1+arr2[i];
}
cout<<"product";
cin>>sum1*sum2;
return 0;

}
    
    

