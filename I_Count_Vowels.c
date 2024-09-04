#include<stdio.h>
#include<string.h>
int asraful(char a[],int i,int sum)
{
    if(a[i]=='\0') return 0;
    sum=asraful(a,i+1,sum);
    if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'||a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
    {
        sum++;
    }
    return sum;
}
int main()
{
    char a[201];
    fgets(a,201,stdin);
    int n=asraful(a,0,0);
    printf("%d",n);
}