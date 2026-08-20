#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];

    }
    int low=0;
    int high=n-1;
    int target;
    cin>>target;
    int ans=-1;
    while(low<=high){
        int mid =(low + high)/2;
         if (arr[mid] == target) {
          ans = mid;
          low = mid + 1;
    }
   
    else if (target < arr[mid]) {
      high = mid - 1;
    }
    // otherwise move right
    else {
    low = mid + 1;
    }
  }
    cout<<ans;
    return 0;
}