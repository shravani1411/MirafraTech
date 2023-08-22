//Find the duplicate element in a limited range array

#include<stdio.h>
int duplicate(int arr[],int n);
int main()
{
	int n,i,j,x;
	printf("Enter the array size:\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	x=duplicate(arr,n);
	
	
	if(x==-1)
		printf("not found\n");
	else
		printf("duplicate elements found:%d\n",arr[x]);
}


int duplicate(int arr[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				return i;
//				printf("Duplicate element is:%d\n",arr[i]);
			}
		}
	}
	return -1;
	/*	if(n==i)
		{
		printf("No duplicate element\n");

		}*/
}
