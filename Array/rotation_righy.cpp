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

    int k;
    cout << "Enter k: ";
    cin >> k;

    k = k % n;   

    int temp[n];

    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = l[i];
    }

    cout << "Array after rotation: ";
    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }

    return 0;
}