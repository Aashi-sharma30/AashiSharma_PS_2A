#include<iostream>
using namespace std;
int gcd(int a,b){
    if (a==b)
    return a;
    if (a>b)
    return gcd(a-b,b)
    return gcd(a,b-a)
    int main()
    int a,b;
    cin>>a>>b;
    cout<<"gcd of"<<a<<"and"<<b<<gcd(a,b);
    return 0;
}
// int main(){
//     int a,b;
//     cout<<"enter two numbers";
//     cin>>a>>b;
//     if(a==b){
//         cout<<a;
//     }
//     else if(a>b){
//         cout<<"gcd is"<<(a-b,b);
//     }
//         else{
//             cout<<"gcd is"<<(a,b-a);
//         }
        
// return 0;
//         }
