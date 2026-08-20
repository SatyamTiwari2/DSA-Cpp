#include<iostream>
using namespace std;
int main(){
    int n,arr[50],s;
    cout<<"Enter the no of elements:"<<endl;
    cin>>n;
    cout<<"enter targeted number"<<endl;
    cin>>s;
    for(int i=0;i<n;i++){
        cout<<"enter"<<i+1<<"element"<<endl;
        cin>>arr[i];
    }
    for(int i=0;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if (arr[i]+arr[j]==s){
                cout<<"the pairs are "<<arr[i]<<" and "<<arr[j];
                cout<<endl;
            }
        }
    }
    return 0;
}