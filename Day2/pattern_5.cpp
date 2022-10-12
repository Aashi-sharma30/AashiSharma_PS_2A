#include<iostream>
using namespace std;
int main(){
    

    int n;
    cout<<"enter the value of n";
    cin>>n;

int i=1;
while(i<=n){
    int j=1;
    char start_element='E'-i+1;
    while(j<=i){
        char ch=start_element+j-1;
        j=j++;
    }
    i++;
}
cout<<endl;
i++; 
return 0;
}



