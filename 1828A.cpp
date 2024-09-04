#include<iostream>
//#include<math.h>
#include<vector>
//#include<bits/stdc++.h>

//#define l               long
#define ll              long long
#define ull             unsigned long long
#define pb              push_sback
#define uns             using namespace std
// Md. Asraful Molla; Department of CSE; Dhaka International University(DIU), Bangladesh;
//using namespace std;
uns;


int main()
 {
    int t;
    cin >> t;

    while (t--)
        {
            int n;
            cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            {
                if (i < 500)
             {
                a[i] = i + 1;
            }
                else
            {
                a[i] = i - 499;
            }
        }

        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i];
        }

        a[0] += (n - (sum % n));

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

