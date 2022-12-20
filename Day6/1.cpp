#include<iostream>
using namespace std;
int main(){
int arr[100][100],m,n,i,j;
cout<<"eneter no of rows \n";
cin>>n;
cout<<"enter no of columns \n ";
cin>>m;
cout<<"enter elements of matrix \n";
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        cin>>arr[i][j];
    }
}
cout<<"90 degree clockwise rotation of matrix ic s \n";
for(i=0;i<n;i++)
{
    for(j=m-1;j>=0;j--){
cout<<arr[j][i]<<" ";
    }
    cout<<endl;
}
return 0;

}
