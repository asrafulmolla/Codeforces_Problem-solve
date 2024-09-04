#include <stdio.h>

int main()
{
    int n, m,given_chips = 0,walrus = 1;
    scanf("%d %d", &n, &m);


    while (m >= walrus)
        {
        m -= walrus;
        given_chips += walrus;
        walrus = (walrus % n) + 1;
    }

    printf("%d\n", m);

    return 0;
}
