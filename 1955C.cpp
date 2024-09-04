#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int s=0,l=0,r=n-1;
    while(k>0 && l<=r)
    {
        if(a[l]==0) l++;
        else if(a[r]==0) r--;
        else
        {
            if(l==r) 
            {
                s++;
            }
            else
            {
                s+=2;
            }
            k-=1;
            if(a[l]<a[r]) r--;
            else l++;
        }
    }
    cout<<s<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        asraful();
    }

}