#include<stdio.h>
int main()
{
	int n,i,data;
	printf("Enter the size:\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter a no. to search:\n");
	scanf("%d",&data);
	for(i=0;i<n;i++)
	{
		if(a[i]==data)
		{
			printf("element found at index %d\n",i);
			break;
		}
	}

	if(i==n)
	{
		printf("Element not found\n");
	}
}
