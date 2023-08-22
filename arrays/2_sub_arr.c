/*Check if a subarray with 0 sum exists or not

Given an integer array, check if it contains a subarray having zero-sum.

For example,
Input:  { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 }
 
Output: Subarray with zero-sum exists
 
The subarrays with a sum of 0 are:
 
{ 3, 4, -7 }
{ 4, -7, 3 }
{ -7, 3, 1, 3 }
{ 3, 1, -4 }
{ 3, 1, 3, 1, -4, -2, -2 }
{ 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 } */


#include<stdio.h>
int main()
{
	int i,j,n,k,sum=0;
	printf("enter the array size:\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=i;j<n;j++)
		{
		sum=sum+arr[j];
			if(sum==0)
			{
				printf("subarray with zero sum exists:\n");
				for(k=i;k<=j;k++)	
				{
					printf("%d\n",arr[k]);
				}
			}
		}
	}
//	if(n==i)
//	printf("not exist\n");

}

