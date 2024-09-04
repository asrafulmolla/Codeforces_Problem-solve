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
int binaryToDecimal(string binary)
{
    int decimal = 0;
    int power = 0;
    for (int i = binary.length() - 1; i >= 0; i--)
    {
        if (binary[i] == '1')
        {
            decimal += pow(2, power);
        }
        power++;
    }
    return decimal;
}
void asraful()
{
    string binary;
    cin >> binary;
    int decimal = binaryToDecimal(binary);
    int cnt = 0;
    // cout << decimal << endl;
    for (int i = 1; i < decimal; i = i * 2)
    {
        cnt++;
    }
    cout << ceil((float)cnt / 2) << endl;
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