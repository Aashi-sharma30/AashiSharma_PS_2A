#include<iostream>
using namespace std;
int main(){
int n;
cout<<"How many elements \n";
cin>> n;
         cout<<"Enter the no. of element \n";
    int arr[100];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    // for(int i = 0 ; i <= n ; i++){
    //     cout << arr[i];
    // }
   int max = arr[0];
    for(int i = 0 ; i <= n ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
}
    cout<< max;

    }
