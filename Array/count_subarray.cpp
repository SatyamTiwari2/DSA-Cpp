#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    int k;
    cin>>k;
    for(int i=0;i<n;i++){
        int XOR_VAL =0;
        for(int j =i;j<n;j++){
            XOR_VAL = XOR_VAL ^ arr[j];
        
         if(XOR_VAL == k){
            count++;
         }
        }
     
    }
    cout<<count;
    return 0;
}