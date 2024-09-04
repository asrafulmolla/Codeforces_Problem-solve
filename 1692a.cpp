#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
        {
            int a, b, c, d,cou=0;
            cin >> a >> b >> c >> d;
        if (a < b) cou ++;
        if (a < c) cou ++;
        if (a < d) cou ++;

        cout << cou << endl;
        }
}
