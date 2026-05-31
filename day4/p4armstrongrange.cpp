#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int start;
    cout<<"enter the start of range"<<endl;
    cin>>start;
    int end;
    cout<<"enter the end of range"<<endl;
    cin>>end;
    if(start<100){
        cout<<"int this range no armstrong number"<<endl;
    }
    else{
        for(int i=start;i<=end;i++){
            int temp1=i;
            int temp2=i;
            int count=0;
            int sum=0;
            while(temp1>0){
                count++;
                temp1=temp1/10;
            }
            while(temp2>0){
                int c=temp2%10;
                sum=sum+(int)pow(c,count);
                temp2=temp2/10;
            }
            if(sum==i){
                cout<<sum<<endl;
            }
            else{
                continue;
            }

        }
    }
}