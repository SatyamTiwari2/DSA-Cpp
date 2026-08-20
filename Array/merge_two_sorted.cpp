#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements of array 1: ";
    cin >> n;

    int l1[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " element: ";
        cin >> l1[i];
    }

    int m;
    cout << "Enter number of elements of array 2: ";
    cin >> m;

    int l2[m];

    for (int i = 0; i < m; i++)
    {
        cout << "Enter " << i + 1 << " element: ";
        cin >> l2[i];
    }

    int o = n + m;
    int l3[o];

    int i = 0, j = 0, k = 0;

    while (i < n && j < m)
    {
        if (l1[i] < l2[j])
        {
            l3[k] = l1[i];
            i++;
        }
        else
        {
            l3[k] = l2[j];
            j++;
        }
        k++;
    }

    while (i < n)
    {
        l3[k] = l1[i];
        i++;
        k++;
    }

    while (j < m)
    {
        l3[k] = l2[j];
        j++;
        k++;
    }

    cout << "Merged Array: ";
    for (int a = 0; a < o; a++)
    {
        cout << l3[a] << " ";
    }

    return 0;
}