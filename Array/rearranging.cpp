#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in array: ";
    cin >> n;

    int l[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " element: ";
        cin >> l[i];
    }

    int posIndex = 0;
    int negIndex = 1;
    int ans[n];

    for (int i = 0; i < n; i++)
    {
        if (l[i] < 0)
        {
            ans[negIndex] = l[i];
            negIndex += 2;
        }
        else
        {
            ans[posIndex] = l[i];
            posIndex += 2;
        }
    }

    cout << "Rearranged Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}