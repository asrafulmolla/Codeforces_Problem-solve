#include <iostream>
using namespace std;

void asraful()
{
    int n;
    cin >> n;

    int space1 = 0;
    int space2 = n - 2;

    // First part
    for (int i = 1; i <= (n / 2); i++)
    {
        for (int j = 1; j <= space1; j++)
        {
            cout << "*";
        }
        cout << "\\";
        for (int k = 1; k <= space2; k++)
        {
            cout << "*";
        }
        cout << "/";
        for (int j = 1; j <= space1; j++)
        {
            cout << "*";
        }
        cout << endl;
        space1++;
        space2 -= 2;
    }

    // Middle part
    for (int j = 1; j <= space1; j++)
    {
        cout << "*";
    }
    cout << "X";
    for (int j = 1; j <= space1; j++)
    {
        cout << "*";
    }
    cout << endl;

    // Second part
    int space3 = (n / 2) - 1;
    int space4 = 1;
    for (int i = 1; i <= n / 2; i++)
    {
        for (int j = 1; j <= space3; j++)
        {
            cout << "*";
        }
        cout << "/";
        for (int j = 1; j <= space4; j++)
        {
            cout << "*";
        }
        cout << "\\";
        for (int j = 1; j <= space3; j++)
        {
            cout << "*";
        }
        cout << endl;
        space3--;
        space4 += 2;
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
    return 0;
}
