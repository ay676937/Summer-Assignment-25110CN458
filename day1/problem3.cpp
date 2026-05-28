#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number for factorial"<<endl;
    cin>>n;
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
    }
    cout<<"factorial"<<"="<<factorial;
}