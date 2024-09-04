#include <bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b[n];
    int b_size = 0;
    for (int i = 0; i < n; i++)
    {
        b_size++;
        b[i] = a[i];
        if (a[i] == 0)
        {
            break;
        }
    }
    int c for (int i = b_size; i < n; i++)
    {
    }
    for (int i = 0; i < b_size; i++)
    {
        cout << b[i] << " ";
    }
}

int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        asraful();
    }
}