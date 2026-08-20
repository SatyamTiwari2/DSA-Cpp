#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int maxOnes = 0;
    int row = -1;

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 1) {
                count++;
            }
        }

        if (count > maxOnes) {
            maxOnes = count;
            row = i;
        }
    }

    cout << "Maximum 1s = " << maxOnes << endl;
    cout << "Row = " << row << endl;

    return 0;
}