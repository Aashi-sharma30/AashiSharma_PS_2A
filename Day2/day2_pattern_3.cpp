#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter the value of n";
    cin>>n;

int i=1;
while(i<=n){
    int j=1;
    char start_element='A'+i-1;
    while(j<=i){
        cout<<start_element ;
        j++;

    
}
    cout<<endl;
    i++;
    }
    return 0;

}