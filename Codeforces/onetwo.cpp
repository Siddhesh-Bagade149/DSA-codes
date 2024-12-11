#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int k = 0;
        int prod1 = 1;
        int prod2 = 1;
        for (int i = 0; i <= k; i++)
        {
            prod1 *= arr[i];
        }
        for (int i = k + 1; i < n; i++)
        {
            prod2 *= arr[i];
        }
        while (prod1 != prod2)
        {
            k++;
            int prod1 = 1;
            int prod2 = 1;
            for (int i = 0; i <= k; i++)
            {
                prod1 *= arr[i];
            }
            for (int i = k + 1; i < n; i++)
            {
                prod2 *= arr[i];
            }
        }
        if (prod1 != prod2)
            cout << -1 << endl;
        else
            cout << "k=" << k + 1 << endl;
    }

    return 0;
}