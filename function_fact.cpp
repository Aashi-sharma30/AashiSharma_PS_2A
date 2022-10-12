#include<iostream>
using namespace std;
int factorial(int n){
    int r=1;
    for(int i=0;i<=n;i++){
        r=r*i;
    }
return r;
}
int main(){
    int n,r;
    cin>>n>>r;
    int fact_n=factorial(n);
    int fact_r=factorial(r);
    int fact_(n-r)=factorial(n-r);
    int ans=fact_n/(fact_r*fact_n-r);
    cout<<ans;
}







