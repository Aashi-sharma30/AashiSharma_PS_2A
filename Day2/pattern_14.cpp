#include<iostream>
using namespace std;
int main()
int i,j,n;
cout<<"enter the value of n";
cin>>n;
for(i=1;i<=n;i++){
    if(i==1||i==n){
        for(j=1;j<=n;j++){
            cout<<"*"<<endl;
        }
    }
    else{
        for(j=1;j<n-i;j++){
            cout<<" ";
        
    }
        cout<<"*";
        
}
return 0;
}