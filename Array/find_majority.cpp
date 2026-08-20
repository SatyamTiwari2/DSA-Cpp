#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter no. of elements: ";
    cin >> n;

    int l[n];

    for (int i = 0; i < n; i++)
    {
        cin >> l[i];
    }

    int maj = 1;
    int max_count = 0;

    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (l[i] == l[j])
            {
                count++;
            }
        }

        if (count > max_count)
        {
            max_count = count;
            maj = l[i];
        }
    }

    cout << maj;

    return 0;
}