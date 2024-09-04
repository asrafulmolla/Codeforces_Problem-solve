#include<iostream>
//#include<bits/stdc++.h>
/*

#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define uns             using namespace std
// Md. Asraful Molla; Department of CSE Dhaka International University; Bangladesh*/
using namespace std;
int main()
{
  int n,i,sum=0;
  cin>>n;
  int a[105];
  for (i=0;i<n;i++)
  {
      cin>>a[i];
      sum=sum+a[i];
  }
  if(sum>0)
  {
      cout<<"HARD"<<endl;
  }
  else
  {
      cout<<"EASY"<<endl;
  }


    return 0;
}
