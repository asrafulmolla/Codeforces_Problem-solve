#include <iostream>
#include <string>
using namespace std;

int main()
 {
    string s, t;
    cin >> s >> t;

    bool r = true;
    int len = s.length();

    if (len != t.length())
        {
         r= false;
        }
    else
        {
            for (int i = 0; i < len; i++)
                {
                    if (s[i] != t[len - i - 1])
                     {
                        r = false;
                            break;
                    }
                }
        }

    if (r)
        {
            cout << "YES" <<endl;
        }
    else
        {
            cout << "NO" <<endl;
        }

    return 0;
}
