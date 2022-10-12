#include<iostream>
using namespace std;
int main(){
    int n,i,j;              
    cout<<"enter the value of n";
    cin>>n;

    for(i=n;i>=1;i--){
    for(j=1;j<=i;j++){
            cout<<j;
        }
        for(j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        int m=i;
        for(j=1;j<=i;j++){
            cout<<m;
            m--;
        }
        cout<<endl;
        }
    return 0; 
    }
    
    
    



