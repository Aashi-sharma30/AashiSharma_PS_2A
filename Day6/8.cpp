#include<iostream>
using namespace std;
int main(){
   int i,j,n,m,a[100],b[100],k=0;
   cout<<"Enter the value of n \n";
   cin>>n;
   cout<<"Enter the value of m \n";
   cin>>m;
  cout<<"Enter the elements of array 1 \n";
   for(i=0;i<n;i++){
    cin>>a[i];
   }
   cout<<"Enter the elements of array 2 \n";
   for(j=0;j<m;j++){
    cin>>b[j];
   }
   cout<<"Intersection of A and B \n";
   for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        if(a[i]==b[j]){
           cout<<a[i]<<" ";
         
        }
    }
   }
        cout<<endl;
// cout<<"Difference of A and B \n";
    int x=0;
    int d[100];
 for(i=0;i<n;i++){
 for(j=0;j<m;j++){
        if(a[i]==b[j]){
           x++;

        }
    }
    if(x==0){
        // cout<<a[i]<<" ";
          d[k]=a[i];
           k++;
    }
   }
  
// cout<<"Difference of B and A \n";
 for(i=0;i<m;i++){
  int z=0;
    for(j=0;j<n;j++){
        if(b[i]==a[j]){
           z++;
        }
    }
    if(z==0){
        // cout<<b[i]<<" ";
          d[k]=b[i];
           k++;
    }
   }
    cout<<endl;

   cout<<"Different numbers in A and B are \n";
for(i=0;i<k;i++){
    cout<<d[i]<<" ";
}



   return 0;
}