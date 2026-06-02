#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"entrt the number in binary format"<<endl;
    cin>>n;
    int power=0;
    int sum=0;
    while(n>0){
        int b=n%10;
        sum=sum+b*(pow(2,power));
        power++;
        n=n/10;
    }
    cout<<sum<<endl;

}