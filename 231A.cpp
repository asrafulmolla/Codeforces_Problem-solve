
#include <iostream>
using namespace std;
int main()
{
    int n,count = 0, tonya, petya, vasya, i;

    cin>>n;

    for (i = 0; i < n; i++)
        {
            cin>>petya>>vasya>>tonya;

        if (petya + vasya + tonya >= 2)
            {
                count++;
            }
        }

    cout<<count;

    return 0;
}

