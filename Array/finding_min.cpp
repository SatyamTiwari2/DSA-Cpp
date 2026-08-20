#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[n];
    }
    int low=0,high=n-1;
    while (low<=high)
    {
        int mid = low + (high - low) / 2;

            // Check which half to discard
            if (arr[mid] > arr[high]) {

                // Minimum lies in right half
                low = mid + 1;

            } else {

                // Minimum lies in left half (including mid)
                high = mid;
            }
        }

        // Return the minimum element
        cout <<arr[low];
    
    
    return 0;
}