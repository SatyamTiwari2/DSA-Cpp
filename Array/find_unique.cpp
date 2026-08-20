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
    for (int i=0;i<n;i++){
        int count =0;
        for (int j=0;j<n;j++){
            if (arr[i]==arr[j]){
                count+=1;
            }
        }
        if (count==1){
        cout<<"unique no."<<arr[i]<<endl;
       }
    }
    
    return 0;
}