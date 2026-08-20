#include<iostream>
using namespace std;
bool ls( int arr[],int n, int a){
    for(int i =0;i<n;i++){
        if (arr[i]==a){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int ans =0;
    for(int i=0;i<n;i++){
        int x=arr[i];
        int count=1;
        while (ls(arr, n, x+1)==true)
        {
         x=x+1;
         count++;
        }
        if (count>ans){
            ans=count;
        }

    }
    cout<<ans;
    return 0;
}