#include<iostream>
//#include<math.h>
#include<bits/stdc++.h>

//#define l               long
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define uns             using namespace std
// Md. Asraful Molla; Department of CSE; Dhaka International University(DIU), Bangladesh;
//using namespace std;
uns;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char a[8][8];
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cin>>a[i][j];
            }
        }
        char s[100];
        char d='.';
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                if(a[i][j]==d)
                {
                    continue;
                }
                else
                {
                    cout<<a[i][j];
                }
            }
        }
            cout<<endl;
    }


}
