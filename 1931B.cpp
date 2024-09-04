#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        int  r=sum/n;
        int rem=0;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]<r)
            {
                rem+=r-a[i];
            }
            else if(a[i]>r)
            {
                if(rem<a[i]-r)
                {
                    cout<<"NO"<<endl;
                    break;
                }
                rem-=a[i]-r;
            }
            else 
                cout<<"YES"<<endl;
                break;
        }
        
    }
}