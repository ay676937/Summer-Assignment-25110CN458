#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int count=0;
    while(n>0){
        int b=n%10;
        count+=1;
        n=n/10;

    }
    cout<<"count "<<"="<<count;

}