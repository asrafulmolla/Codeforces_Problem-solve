#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()

{
    string s;
    int t;
    cin>>t;

    while(t--)
    {
        cin>>s;
        transform(s.begin(), s.end(), s.begin(),::tolower);
        if(s=="yes")
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";

        }
    }
}
