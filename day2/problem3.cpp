#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ente the number"<<endl;
    cin>>n;
    int product=1;
    while(n>0){
        int b=n%10;
        product=product*b;
        n=n/10;

    }
    cout<<"product of digit"<<"="<<product<<endl;
}