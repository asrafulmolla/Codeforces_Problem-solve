#include <stdio.h>

int main()
{
    int n,current = 0,max = 0,a ,b,i;

    scanf("%d", &n);


    for (i = 0; i < n; i++)
    {

        scanf("%d %d", &a, &b);

        current = current - a + b;

        if (current > max)

            max = current;
    }

    printf("%d\n", max);

    return 0;
}
