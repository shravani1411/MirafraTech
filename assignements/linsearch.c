#include<stdio.h>
int linear_search(int arr[],int n,int a)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		if(arr[i]==a){
			return i;
			break;
		}
	}
	return -1;
}	

int main()
{
	int i,a,n;
	printf("Enter number of elements:\n");
	scanf("%d",&n);
	int arr[n];
	printf("Input Array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter number to search:\n");
	scanf("%d",&a);
	int index=linear_search(arr,n,a);
	if(index==-1)
		printf("Element not found\n");
	else
		printf("Element found at position %d\n",index);
}
