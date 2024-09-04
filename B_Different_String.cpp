#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int n = str.size();
        char ch = str[0];
        bool cnt = false;
        int index = -1;
        for (int i = 1; i < n; i++)
        {
            if (str[i] != ch)
            {
                cnt = 1;
                index = i;
                break;
            }
        }
        if (!cnt)
        {
            cout << "NO\n";
        }
        else
        {
            for (int i = 0; i < n-1; i++)
            {
                if (str[i] != str[i + 1])
                {
                    int temp = str[1];
                    str[i] = str[i+1];
                    str[i+1] = temp;
                }
            }
            cout << "YES\n";
            cout << str << endl;
        }
    }
}