#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low=0;
    int high =n-1;
    int ans=n;
    int x;
    cin>>x;
    while(low<=high){
        int mid =(low+high)/2;
        if(arr[mid]>=x){
            ans=mid;
            high =mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<ans;
    return 0;
}
