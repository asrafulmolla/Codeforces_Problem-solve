#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
        {
            int a[2][2];
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<2;j++)
                {
                    cin>>a[i][j];
                }
            }

             int sum = 0;
             if (a[0][0] == 1 && a[0][1] == 1 && a[1][0] == 1 && a[1][1] == 1)
                {
                    sum = 2;
                }
             else if (a[0][0] == 1 && a[1][0] == 1)
                {
                    sum = 1;
                }
             else if (a[0][1] == 1 && a[1][1] == 1)
                {
                    sum = 1;
                }

        cout << sum << endl;

    }

    return 0;
}
