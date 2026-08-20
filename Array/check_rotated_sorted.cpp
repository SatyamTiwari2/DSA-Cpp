#include <iostream>
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

    for (int i = 1; i < n; i++)
    {
        if (l[i - 1] > l[i])
        {
            count++;
        }
    }

    if (l[n - 1] > l[0])
    {
        count++;
    }

    if (count <= 1)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }

    return 0;
}