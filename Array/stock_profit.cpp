#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int l1[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " element: ";
        cin >> l1[i];
    }

    int max_profit = 0;
    int min_l = l1[0];
    int j = 0;

    // Find minimum element and its index
    for (int i = 0; i < n; i++)
    {
        if (l1[i] < min_l)
        {
            min_l = l1[i];
            j = i;
        }
    }

    // Calculate profit
    for (int i = j; i < n; i++)
    {
        int profit = 0;

        for (int j = i + 1; j < n; j++)
        {
            profit = l1[i] - min_l;
        }

        if (profit > max_profit)
        {
            max_profit = profit;
        }
    }

    cout << "Maximum Profit = " << max_profit;

    return 0;
}