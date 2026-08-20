#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int del_item;
    cout<<"Enter the number to be deleted"<<endl;
    cin>>del_item;
    for(int i=0;i<n;i++){
        if(arr[i]==del_item){
            for(int j=i;j<n-1;j++){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    int new_arr{n-1};
    for(int i=0;i<n-1;i++){
        cout<<arr[i];
    }
    return 0;
}