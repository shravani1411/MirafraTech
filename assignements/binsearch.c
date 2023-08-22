//Binary search

#include <stdio.h>

int binary_Search(int a[],int l,int r,int x)
{
    while (l <= r)
{
        int m = l + (r - l) / 2;
        if (a[m] == x)
            return m;
        else if (a[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1; // element not found
}

int main() {
    int arr[] = { 2, 4, 6, 8, 10, 12 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2; // element to be searched
    int index = binary_Search(arr, 0, n - 1, x);
    if (index == -1) {
        printf("Element not found\n");
    }
    else {
        printf("Element found at index %d\n", index);
    }
    return 0;
}
