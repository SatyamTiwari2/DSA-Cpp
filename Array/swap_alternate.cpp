#include<iostream>
using namespace std;
int main(){
    int n,arr[50];
    cout<<"Enter the no of elements:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter"<<i+1<<"element"<<endl;
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        cout<<arr[i];

    }
    if(n%2==0){
        for(int i=0;i<n;i=i+2){
            int temp;
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
        cout<<"after swapping"<<endl;
        for (int i=0;i<n;i++){
        cout<<arr[i];
    }
    }
    else{
        for(int i=0;i<n-1;i=i+2){
            int temp;
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
        cout<<"after swapping"<<endl;
        for (int i=0;i<n;i++){
        cout<<arr[i];
    }
    }
    return 0;
}