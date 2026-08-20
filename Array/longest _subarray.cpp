#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int length = 0;
    int x;

    cout << "Enter number: ";
    cin >> x;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;

            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }

            if (sum == x)
            {
                length = max(length, j - i + 1);
            }
        }
    }

    cout << "Length of longest subarray = " << length;

    return 0;
}