#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    int n, x1, y1, x2, y2, p, q, r, a, u, v, w, z;

        cin >> n >> x1 >> y1 >> x2 >> y2;
        // when through grid
        r = x2 - x1;
        a = y2 - y1;
        if (r < 0)
        {
            r = r * -1;
        }
        if (a < 0)
        {
            a = a * -1;
        }
        p = r + a;
        // when using out of grid
        if ((x1 || y1 < n / 2) && (x2 || y2 < n))
            if (x1 <= y1 && y2 >= x2)
            {
                q = x1 + (n - y2);
            }
        if (x1 >= y1 && y2 >= x2)
        {
            q = y1 + (n - y2);
        }
        if (x1 <= y1 && y2 <= x2)
        {
            q = x1 + (n - x2);
        }
        if (x1 >= y1 && y2 <= x2)
        {
            q = y1 + (n - x2);
        }
        if (p < q)
        {
            cout << p << endl;
        }
        else
        {
            cout << q << endl;
        }

    // when both out of grid
    if ((x1 > n && y1 > n) && (x2 > n && y2 > n))
    {
        q = 0;
    }
    // when one is out of grid
    if ((x1 || y1 > n) && (x2 || y2 < n))
    {
        if (x2 <= y2)
        {
            q = n - y2;
        }
        else
        {
            q = n - x2;
        }
    }
}
return 0;
}