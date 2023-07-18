#include<iostream>
using namespace std;
void intToWord(string s[],int n){
  // base case
    if(n==0){
        return;
    }
    int digit=n%10;
    n=n/10;
    //recursive call
    intToWord(s,n);
    cout<<s[digit]<<" a";


}
int main()
{   
    int n;
    cin>>n;
    string s[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    intToWord(s,n);
    
    
}