#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"enter the number1"<<endl;
    cin>>n1;
    cout<<"enter the number2 "<<endl;
    cin>>n2;
    while(n2!=0){
        int b=n1%n2;
        n1=n2;
        n2=b;
    }
    cout<<"gcd ="<<n1<<endl;
}