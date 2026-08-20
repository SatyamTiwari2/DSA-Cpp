#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of elements:"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter "<<i+1<<" element"<<endl;
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
    int new_arr[n+1];
    int num,pos;
    cout<<"enter the number: "<<endl;
    cin>>num;
    cout<<"enter the position"<<endl;
    cin>>pos;
    for (int j=n-1;j>=pos-1;j--){
        swap(arr[j+1],arr[j]);
        
    }
    arr[pos-1]=num;
    for (int i=0;i<n+1;i++){
        cout<<arr[i];
    }
    return 0;
}