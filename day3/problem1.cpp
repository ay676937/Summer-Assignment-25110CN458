#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number to be checked"<<endl;
    cin>>n;
    if(n==2){
        cout<<"number is prime"<<endl;
        return 0;

    }
    if(n<=1){
        cout<<"number is not prime"<<endl;
        return 0;
    }
    bool prime=true;
    for(int i=2;i<n;i++){
        if(n%i==0 ){
            prime=false;
            break;
        
        }
    }
    if(prime==true){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
}