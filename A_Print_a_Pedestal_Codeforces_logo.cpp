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
    if(n==7)
    {
        out 2<<" "<< 4<<" "<< 1<<endl;
        return;
    }
    if (n % 3 == 0)
    {
        int div = n / 3;
        int mid = div + 1;
        int fst = mid - 1;
        int last = n - (mid + fst);
        out fst << " " << mid << " " << last << endl;
    }
    else
    {
        int div = n / 3;
        int mid = div + 2;
        int fst = mid - 1;
        int last = n - (mid + fst);
        out fst << " " << mid << " " << last << endl;
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