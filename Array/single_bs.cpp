#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (n == 1) {
        cout << arr[0];
        return 0;
    }

    // Check first element
    if (arr[0] != arr[1]) {
        cout << arr[0];
        return 0;
    }

    // Check last element
    if (arr[n - 1] != arr[n - 2]) {
        cout << arr[n - 1];
        return 0;
    }

    int low = 1, high = n - 2;
   

    while (low <= high) {
        int mid = (low + high) / 2;

        if (mid % 2 != 0) {

            if (arr[mid] == arr[mid - 1]) {
               low=mid+1;
            }
            else {
                high=mid-1;
            }

        }
        else {

            if (arr[mid] == arr[mid + 1]) {
                low=mid+1;
            }
            else {
                high = mid - 1;
            }
        }
    }

    cout << arr[low];

    return 0;
}