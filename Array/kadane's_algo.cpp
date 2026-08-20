#include <iostream>
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

    int max_sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;

            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }

            if (sum > max_sum)
            {
                max_sum = sum;
            }
        }
    }

    cout << "Maximum Subarray Sum = " << max_sum;

    return 0;
}