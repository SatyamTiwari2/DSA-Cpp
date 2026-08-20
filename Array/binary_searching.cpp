#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int arr[n];
    for (int i =0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int low=0;
    int high=n-1;
    bool found = false;
    while (low<=high){
        int mid = int((low+high)/2);
        if (arr[mid]== target){
            cout<<"Element found at index "<<mid<<endl;
            found =true;
            break;
        }
        else if (arr[mid]< target){
         
           low=mid+1;
        }
        else{
            high =mid-1;
        }
    }
    if (found==false){
        cout<<"not found"<<endl;
    }
    return 0;
}