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
    int i=0,j=n-1;
    while(i<j){
        if (arr[i]==0 ){
            i++;
        }
        else if( arr[j]==1){
            j--;
        }
        else{
            swap(arr[i],arr[j]);
        }
    }
    for (int i=0;i<n;i++){
        cout<<arr[i];

    }
    return 0;
}