#include <stdio.h>
int main()
{
    int n,result =0;
    char a[4];

    scanf("%d", &n);
    while(n--)
    {
        scanf("%s", a);
        if (a[1] == '+')
        {
            result++;
        }
        else
        {
            result--;
        }
    }
    printf("%d\n", result);
}
