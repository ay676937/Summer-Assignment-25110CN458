#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter the number"<<endl;
    cin>>number;
    int n;
    cout<<"enter the power of the number"<<endl;
    cin>>n;
    int product=1;
    for(int i=1;i<=n;i++){
        product=product*number;


    }
    cout<<product<<endl;
}