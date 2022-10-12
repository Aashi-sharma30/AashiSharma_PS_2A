#include<iostream>
#include<Climits>
using namespace std;
void palindrome(int n){
  

   int rev=0,a;
   int m; 
   n=m;
    while(n>0){
    int a=n%10;
    int rev=rev*10+a;
     n=n/10;
    }
    if(n==m){
        cout<<"Palindrome"; 

    }
else {
    cout<<"Not palindrome";
}
}

int main(){
    int n;
  cout<<"Enter the value of n \n";
  cin>>n;
   
 palindrome(n);
}