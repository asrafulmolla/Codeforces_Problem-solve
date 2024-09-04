#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    int n,i,j,c=0;
    cin>>n;
    for (i=2; i<=n; i++)
    {
      c = 0;
      for (j=2; j<i; j++)
      {
          if (i%j==0)
          c++;
      }  
      if (c==0)
      cout <<i <<" ";
    }
}

int main()
{
    int t=1;
    //cin>>t;
    while(t--)
    {
        asraful();
    }
}