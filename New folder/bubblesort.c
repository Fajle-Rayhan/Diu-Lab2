#include<stdio.h>
int main() {
 int a[100], n, i, j, temp;

 printf("Enter how many numbers you want:\n");
 scanf("%d", &n);

 printf("Enter the %d elements:\n", n);
 for (i = 0; i < n; i++) {
  scanf("%d", &a[i]);
 }

 printf("\n\tThe given array is:\n");
 for (i = 0; i < n; i++) {
  printf("\n\t\t%d", a[i]);
  printf("n");
 }
 for (i = 0; i < n; i++) {
  for (j = i + 1; j < n; j++) {
   if (a[i] > a[j]) {
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
   }
  }
 }

 printf("\n\n\n\tThe sorted array using Bubble sorted:\n");
 for (i = 0; i < n; i++) {
  printf("\n\t\t%d", a[i]);
 }
 return 0;
}
