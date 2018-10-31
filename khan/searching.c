#include <stdio.h>

int main()
{
  int array[5]= {10,5,7,11,23};

    int search, i;

  printf("Enter a number to search\n");
  scanf("%d", &search);

  for (i = 0; i < 5; i++)
  {
    if (array[i] == search)
    {
      printf("%d is present at location %d.\n", search, i);

    }
  }


  return 0;
}
