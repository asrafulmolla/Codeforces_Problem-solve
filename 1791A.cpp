#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int t;
    char c;

   cin>>t;

    while (t--)
        {

       cin>>c;

        c = tolower(c);

        if (strchr("codeforces", c) != 0)
            {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }


}
