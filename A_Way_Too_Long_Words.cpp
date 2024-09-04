#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long int
using namespace std;
void asraful()
{
    string s;
    cin >> s;
    int ln = s.length();
    if (ln <= 10) cout << s << endl;
    else cout << s[0] << ln - 2 << s[ln - 1] << endl;
}
int main()
{
    int t=1;
    cin>>t;
    while(t--)
    {
        asraful();
    }
}