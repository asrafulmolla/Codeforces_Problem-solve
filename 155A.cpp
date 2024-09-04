#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n,count_=0,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max_=a[0];
    int min_=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max_)
        {
            max_=a[i];
            count_++;
        }
        if(a[i]<min_)
        {
            min_=a[i];
            count_++;
        }
    }
    cout<<count_;

    }
