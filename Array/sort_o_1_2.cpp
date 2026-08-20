#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int l[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> l[i];
    }

    int i = 0;
    int j = n - 1;

    // Move all 0's to the beginning
    while (i < j)
    {
        if (l[i] == 0)
        {
            i++;
        }
        else if (l[j] != 0)
        {
            j--;
        }
        else
        {
            int temp = l[i];
            l[i] = l[j];
            l[j] = temp;
        }
    }

    // Count the number of 0's
    int cnt0 = 0;
    for (int i = 0; i < n; i++)
    {
        if (l[i] == 0)
        {
            cnt0++;
        }
    }

    // Sort the remaining part (1's and 2's)
    int a = cnt0;
    int b = n - 1;

    while (a < b)
    {
        if (l[a] == 1)
        {
            a++;
        }
        else if (l[b] == 2)
        {
            b--;
        }
        else
        {
            int temp = l[a];
            l[a] = l[b];
            l[b] = temp;
        }
    }

    cout << "Sorted array: ";
    for (int k = 0; k < n; k++)
    {
        cout << l[k] << " ";
    }

    return 0;
}