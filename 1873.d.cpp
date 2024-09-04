#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
        {
            string s;
            cin >> s;

        int swaps = 0;
        for (int i = 0; i < 2; i++)
            {
                if (s[i] > s[i + 1]) {
                    swap(s[i], s[i + 1]);
                        swaps++;
            }
        }

        if (swaps <= 1)
            {
                cout << "YES" << endl;
            }
        else
            {
            cout << "NO" << endl;
            }
    }
}
