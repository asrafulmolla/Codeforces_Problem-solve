#include<iostream>
#include<string>
#include<math.h>
#include<functional>

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
    string s;
    cin>>s;

    int n=s.size();
    int a=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='a')
        {
            a++;
        }
    }
    int m=n-a;
    if(m>a-1)
    {
        cout<<a+(a-1);
    }
    else
    {
        cout<<a+m;
    }
    return 0;
}
