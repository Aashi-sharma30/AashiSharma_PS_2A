#include <iostream>
using namespace std;
string ispalindrome(string s){
    for(int i=0;i<s.length()/2;i++){
        if(s[i]!=s[s.length()-i-1]){
            return"no";
        }
    }
    return"yes";
}
int main(){
    string s="NAMAN";
   cout<<ispalindrome(s);
return 0;
}