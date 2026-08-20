#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int target;
    cin>>target;
    int low=0,high=n-1;
    int index=-1;
    while(low<=high){
        int mid = low +(high-low)/2;
        if (arr[mid]==target){
            index =mid;
           
          break;
        }
        if (arr[low]<=arr[mid]){
            if (target >= arr[low]&& target<=arr[high]){
                high =mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if (target>arr[mid] && target<=arr[high]){
                low=mid+1;
            }
            else{
                high = mid -1;
            }
        }
    }
    if (index != -1){
        cout<<"Element at index"<<index;
    }
    else{
        cout<<"Element not found";
    }
    return 0;

}