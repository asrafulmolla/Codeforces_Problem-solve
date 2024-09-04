#include<bits/stdc++.h>
using namespace std;

void asraful()
{
    int day,month,year;
    cin>>day;
    year=day/365;
    day=day%365;
    month=day/30;
    day=day%30;
    cout<<year<<" years\n"<<month<<" months\n"<<day<<" days";
}

int main()
{
    asraful();
}