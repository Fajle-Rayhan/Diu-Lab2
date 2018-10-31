#include<stdio.h>

int main()
{
    int a [5];
    int i;


    for (i=0;i<=4 ; i++)
    {
        printf("Enter the value: ");
        scanf ("%d",&a[i]);
    }
 for (i=0; i<=4; i++)
 {
     printf("\nThe value is: %d",a[i]);
 }
 return 0;
}

