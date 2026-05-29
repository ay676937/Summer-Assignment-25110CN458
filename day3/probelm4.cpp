#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"enter the first number "<<endl;
    cin>>n1;
    int a=n1;
    cout<<"enter the second number"<<endl;
    cin>>n2;
    int b=n2;
    while(n2!=0){
        int c=n1%n2;
        n1=n2;
        n2=c;
    }
    int lcm=(a*b)/n1;
    cout<<"lcm of number is"<<lcm<<endl;
}
