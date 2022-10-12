#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter the value of n";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
            int m=i;
            for(j=1;j<=i;j++){
                cout<<m;
                m++;
            }

            cout<<endl;
            int p=2*i-1;
            for(j=1;j<i;j++){
                cout<<p;
                p--;
            
            }
            cout<<endl;
    }
    return 0;
} 
