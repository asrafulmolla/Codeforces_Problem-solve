#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
        {
        int n;
        cin >> n;

        vector<int> v(n);


        for (int i = 0; i < n; i++)
            {
            cin >> v[i];
        }
        int minimum = INT_MAX;
        for(int i=0;i<n;i++)
        {
             if(minimum>v[i])
            {
                minimum=v[i];
            }
        }
        int rem,sum=0;
        for(int i=0;i<n;i++)
        {
            rem=v[i]-minimum;
            sum=sum+rem;
        }

        cout<<sum<<endl;
    }

}
