#include <stdio.h>



   void insertionSort(int A[], int length)
{
   int i, key, j;
   for (i = 1; i < length; i++)
   {
       key = A[i];
       j = i-1;

       /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
       while (j >= 0 && A[j] > key)
       {
           A[j+1] = A[j];
           j = j-1;
       }
       A[j+1] = key;
   }




void printArray(int arr[], int n)
{
   int i;
   for (i=0; i < n; i++)
       printf("%d ", A[i]);
   printf("\n");
}



/* Driver program to test insertion sort */
int main()
{
    printf("Element insertion: ");
    int length;
    scanf("%d",& length);
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}
