#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int reverse=0;
    while(n>0){
        int b=n%10;
        reverse=reverse*10+b;
        n=n/10;
    }
    cout<<"reverse"<<"="<<reverse<<endl;
}