#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,k,p;
    cout<<"enter a";
    cin>>a;
    cout<<"enter b";
    cin>>b;
    p=pow(a,b);
    cout<<p<<endl;
    int count=0;
    cout<<"enter k";
    cin>>k;
    while(p>0 && count<k){
        int rem=p%10;
        count++;
        if(count==k)
        cout<<rem;
        p=p/10;
    
    }
    return 0;

}
