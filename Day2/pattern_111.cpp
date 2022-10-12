#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter the value of n";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<j;
        }
        // cout<<endl;

    for(j=1;j<=2*n-2*i;j++){
        cout<<" ";
        
    }
    int m=i;
    for(int k=1;k<=i;k++){
        cout<<m;
        m--;
        
    }
    cout<<endl;
    
    }
           
    return 0;
 } 




