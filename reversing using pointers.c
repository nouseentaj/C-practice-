#include <stdio.h>
int main()
{
int *ptr1, *ptr2;
int n, i, temp;
printf("Enter the size of the array: ");
scanf("%d", &n);
int arr[n];
printf("Enter the elements into the array: ");
for(i = 0; i < n; i++)
{
scanf("%d", &arr[i]);
}
ptr1 = &arr[0];
ptr2 = &(arr[n - 1]);

while(ptr1 < ptr2)
{
temp = *ptr1;
*ptr1 = *ptr2;
*ptr2 = temp;
ptr1 = ptr1 + 1;
ptr2 = ptr2 - 1;
}
printf("The reversed array: ");
for(i = 0; i < n; i++)
{
printf("%d ", arr[i]);
}
}
