#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int temp=n;
    int temp1=n;
    int p=0;
    int sum=0;
    while (n>0){
        int b=n%10;
        p++;
        n=n/10;
    }
    while(temp>0){
        int r=temp%10;
        sum=sum+pow(r,p);
        temp=temp/10;

    }
    if(temp1==sum){
        cout<<"number is armstrong"<<endl;
    }
    else{
        cout<<"not armstrong"<<endl;
    }

   
    
}