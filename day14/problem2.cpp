#include<iostream>
using namespace std;
int frequency(int arr[],int n,int k){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            count++;
        }
    }
    return count;

}
int main(){
    int n;
    cout<<"enter the range"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the element "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter the element whose frequency require"<<endl;
    cin>>k;
    int f= frequency(arr,n,k);
    cout<<"frequenvy of element is"<<f<<endl;
}