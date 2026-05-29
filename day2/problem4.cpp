#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int number=n;
    int reverse=0;
    while (n>0){
        int b=n%10;
        reverse=reverse*10+b;
        n=n/10;
    }
    if(number==reverse){
        cout<<"number is palindrome"<<endl;
    }
    else{
        cout<<"not"<<endl;
    }
    
        
    
    
}