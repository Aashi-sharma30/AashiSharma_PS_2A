#include<iostream>
#include<math.h>
using namespace std;
int series(int n){
    return 8*n*n+1;
}

int main(){
    int n;
    cout<<" enter n";
    cin>>n;
    cout<<series(n);
    return 0;
    


}