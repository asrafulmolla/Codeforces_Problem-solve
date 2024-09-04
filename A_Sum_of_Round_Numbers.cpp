#include <bits/stdc++.h>
#include <string.h>
#include <cctype>
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << "\n"
#define in cin >>
#define out cout <<
#define ll long long
#define ull unsigned long long int
using namespace std;

void asraful()
{
    int n;
    in n;
    vector<int>a(5);
    if ((n % 10 == 0 || n % 10 == n)&& n<110)
    {
        out 1 << endl;
        out n;
        nl;
    }
    else
    {
        int i = 0;
        int k = 10;
        while (n > 10)
        {
            int num = n % k;
            a[i] = num;
            n = n - num;
            i++;
            k *= 10;
        }
        a[i]=n;
        int cnt=0;
        for (int j = 0; j < 5; j++)
        {
            if (a[j] != 0)
            {
                cnt++;
            }
        }
        out cnt<<endl;
        for (int j = 0; j < 5; j++)
        {
            if (a[j] != 0)
            {
                out a[j]<<" ";
            }
        }
        nl;
    }
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        asraful();
    }
}