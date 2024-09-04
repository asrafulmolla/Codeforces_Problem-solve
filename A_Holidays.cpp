#include<bits/stdc++.h>
#include<string.h>
#include<cctype>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl cout<<"\n"
#define in cin>>
#define out cout<<
#define ll long long
#define ull unsigned long long int
using namespace std;

void asraful()
{
    int n;
    cin >> n;
    
    int full_weeks = n / 7;
    int remaining_days = n % 7;
    
    int min_days_off = full_weeks * 2;
    int max_days_off = full_weeks * 2;
    
    min_days_off += max(0, remaining_days - 5);
    max_days_off += min(2, remaining_days);
    
    cout << min_days_off << " " << max_days_off << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t=1;
    // cin>>t;
    while(t--)
    {
        asraful();
    }
}