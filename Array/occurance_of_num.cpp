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
    cout<<"target"<<endl;
    cin>>target;
    int last=0;
    while(low<=high){
        int mid =(low + high)/2;
         if (arr[mid] == target) {
          last = mid;
          low = mid + 1;
    }
   
    else if (target < arr[mid]) {
      high = mid - 1;
    }
    else {
    low = mid + 1;
    }
  }
  cout<<last<<endl;
  int first=0;
  int start=0;
  int end=n-1;
 while (start<=end)
    {
       int middle=start + (end - start)/2;
       if (arr[middle]>=target){
        first=middle;
        end=middle-1;
       }
    else{
        start=middle+1;
    }
    }
    cout<<first<<endl;
  cout<<last-first+1<<endl;

    return 0;
}