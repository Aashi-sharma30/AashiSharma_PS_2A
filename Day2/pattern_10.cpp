#include<iostream>
using namespace std;
int main() {
    int n,;
    cout<<"enter the value of n";
    cin>>n;

// int i=n;
// while(i>=1){
//     int j=1;
//     while(j<n-i){
//         cout<<" ";
//     
//         cout<<"*";
//         j++;
//            } 
//            j++;
//
//            cout<<endl;
//            i--;
for(int i=n;i>=1;i--){

 for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
}
    for(int j=1;j<=2*i-1;j++){
        cout<<"*";
    }
    cout<<endl;
}


//         //  reverse triangle
//          i=1;
// while(i<=n){
//     int j=1;
// while(j<=n-i){
//         cout<<" ";
    
//         while(j<=2*i-1){
//             cout<<"*";
//             j++;
//         }
//  {}       j++;
// }
//         cout<<endl;
//         i++;
// }
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i,;/;j++){
        cout<<" ";
    }
    for(int j=1;j<=2*i-1;j++){
        cout<<"*";
    cout<<endl;
    }
return 0;
}






