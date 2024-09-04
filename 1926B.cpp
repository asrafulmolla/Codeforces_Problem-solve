#include <bits/stdc++.h>
using namespace std;

bool Square(const vector<string>& a) {
    int count=0;
    for (int i=0;i<a.size();i++)
    {
        int row= 0;
        for (int j=0;j<a.size();j++)
        {
            if (a[i][j]=='1')
            {
                row++;
            }
        }
        if (count==0) count=row;
        else if(count!=row) return false;
    }
    return true;
}
bool Triangle(const vector<string>& a)
{
    int count=1,max_=0;
    for (int i=0;i<a.size();i++) {
        int row=0;
        for (int j=0;j<a.size();j++)
        {
            if (a[i][j]=='1') row++;
        }
        if (row !=count && row!=count+2) return false;
        max_ = max(max_,row);
        count += 2;
    }
    return max_==count-2;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<string> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        if (Square(a)) cout << "SQUARE\n";
        else cout << "TRIANGLE\n";

    }
    return 0;
}
