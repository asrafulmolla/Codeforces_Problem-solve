#include <bits/stdc++.h>
using namespace std;
void asraful()
{
    int n, s, k;
    cin >> n;
    s = n * 2;
    k = 0;
    for (int i = 1; i <= (2 * n) + 1; i++)
    {
        // Print spaces for the first part of the pattern
        for (int j = 1; j <= s; j++)
        {
            cout << " ";
        }

        // Print the increasing numbers
        for (int j = 0; j <= k; j++)
        {
            cout << j;
            if (j != k)
                cout << " ";
        }

        // Print the decreasing numbers
        for (int x = k - 1; x >= 0; x--)
        {
            cout << " " << x;
        }

        // Update s and k for next line
        if (i <= n)
        {
            s = s - 2;
            k = k + 1;
        }
        else
        {
            s = s + 2;
            k = k - 1;
        }
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        asraful();
    }
}
