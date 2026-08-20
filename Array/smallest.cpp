#include<iostream>
using namespace std;
int main(){
    int n,arr[50];
    cout<<"Enter the no of elements:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter "<<i+1<<" element"<<endl;
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        cout<<arr[i];
    }
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<endl;
    cout<<"smallest element is "<<min<<endl;
    return 0;
}