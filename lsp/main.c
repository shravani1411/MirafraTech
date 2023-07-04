#include<stdio.h>
void sort(int arr[],int n);
int main()
{
	int i,j,n,temp;
	printf("Enter the size:\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	sort(arr,n);
}
