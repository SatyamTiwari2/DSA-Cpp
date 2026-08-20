#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {

        // Check if already processed
        bool already = false;
        for (int k = 0; k < i; k++) {
            if (arr[k] == arr[i]) {
                already = true;
                break;
            }
        }

        if (already)
            continue;

        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > n / 3) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}