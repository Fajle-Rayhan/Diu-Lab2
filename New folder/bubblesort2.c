#include <stdio.h>

int main()
{
    int a[100], n, i, d, swap;
    printf("enter number of elements\n");
    scanf("%d", &n);

    printf("enter the value\n", n);

    for (i = 0; c < n; c++)
        scanf("%d", &a[c]);

    for (c = 0 ; c < n - 1; c++)
    printf("%d\n",a[c]);
    {
        for (d = 0 ; d < n - c - 1; d++)
        printf("%d\n",a[i]);
        {
            if (a[d] > a[d+1])
            {
                swap       = a[d];
                a[d]   = a[d+1];
                a[d+1] = swap;
            }
        }
    }

    printf("sorted list:\n");

    for (c = 0; c < n; c++)
        printf("%d\n", a[c]);

    return 0;
}
