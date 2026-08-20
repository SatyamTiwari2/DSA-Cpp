#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i =0;i<n;i++){
        if (arr[i+1]<arr[i]){
            cout<<"not sorted"<<endl;
            break;
        }
        else{
            cout<<"sorted"<<endl;
        }
    }
    return 0 ;
}