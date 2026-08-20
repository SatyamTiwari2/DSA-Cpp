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
        bool visited = false;

        // Check if this element has already been counted
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                visited = true;
                break;
            }
        }

        if (visited)
            continue;

        int count = 1;

        // Count occurrences
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        cout << arr[i] << " occurs " << count << " times" << endl;
    }

    return 0;
}