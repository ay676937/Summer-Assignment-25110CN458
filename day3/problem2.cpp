#include<iostream>
using namespace std;
int main(){
    int start;
    cout<<"enter the start of the range"<<endl;
    cin>>start;
    int end;
    cout<<"enter the end of the range"<<endl;
    cin>>end;
    bool prime=true;
    for(int i=start;i<=end;i++){
        if(i<=1){
            cout<<"not prime"<<endl;

        }
        bool prime =true;
        for(int j=2;j<i;j++){
            if(i%j==0){
                prime=false;
                break;
            }
            
            
        }
        if(prime==true){
            cout<<i<<endl;

        }
        

        
        
       
    }
    
}