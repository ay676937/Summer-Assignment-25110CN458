#include<iostream>
using namespace std;
int main(){
    int a=0;
    int b=1;
    int n;
    cout<<"entr the number till series run"<<endl;
    cin>>n;
    if(n==0){
        cout<<"nth element of series is  0"<<endl;
    }
    else if(n==1){
        cout<<"nth element of series is 1"<<endl;
    }
    for(int i=1;i<n-1;i++){
        int c=b;
        b=a+b;
        a=c;
    }
    cout<<"nth number of series is"<<" "<<b<<endl;

}