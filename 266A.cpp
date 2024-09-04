#include<iostream>
//#include<math.h>
//#include<bits/stdc++.h>

//#define l               long
#define ll              long long
#define ull             unsigned long long
#define pb              push_sback
#define uns             using namespace std
// Md. Asraful Molla; Department of CSE; Dhaka International University(DIU), Bangladesh;
//using namespace std;
uns;
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    string s;
    cin>>s;

    for(int i=0; i<n-1; i++)
    {
        if(s[i]==s[i+1])
        {
            c ++;
        }
    }
cout <<c;
return 0;
}

