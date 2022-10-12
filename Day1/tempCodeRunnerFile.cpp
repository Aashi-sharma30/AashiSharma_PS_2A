#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;

int i=1;
int p=1;
while(i<=n){
    int j=1;
    while(j<=i){
        cout<<p;
        j=j++;
        p=p++;
        
    }
    cout<<endl;
    i++;

}
}

    
