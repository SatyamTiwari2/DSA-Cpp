#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int l[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " element: ";
        cin >> l[i];
    }

    int count = 0;
    int maxi = 0;

    for (int i = 0; i < n; i++)
    {
        if (l[i] == 1)
        {
            count++;
        }
        else
        {
            count = 0;
        }

        maxi = max(maxi, count);
    }

    cout << "Maximum consecutive 1's = " << maxi;

    return 0;
}