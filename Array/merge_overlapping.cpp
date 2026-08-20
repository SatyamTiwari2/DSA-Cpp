#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=1;i<n;i++){
        if (arr[i][0]<=arr[i-1][1]){
            cout<<arr[i-1][0]<<","<<arr[i][1]<<" ";
        }
        else{
            cout<<arr[i][0]<<","<<arr[i][1]<<" ";
        }
    }
    return 0;
}