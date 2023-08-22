
#include<stdio.h>
int main()
{

int a[2][5] = { {1, 2, 3, 4, 5}, {11, 22, 33, 44, 55}};

int *ptr = (int*)a;

int (*ptr2)[5] = a;

printf("%d  %d\n", *ptr, *(ptr + 1));      

printf("%d  %d\n", **ptr2, **(ptr2 + 1));  

//Below method will not give correct result using pointer to pointer

int **ptr1  = (int **)a;

printf("%ls  %ls\n", *ptr1, *(ptr1 + 1));     

}
