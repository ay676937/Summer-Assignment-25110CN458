#include<iostream>
using namespace std;
int main(){
    int a=0;
    int b=1;
    int n;
    cout<<"enter the number till series run"<<endl;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<n-1;i++){
        int c=b;
        b=a+b;
        a=c;
        cout<<b<<" ";
    }

}