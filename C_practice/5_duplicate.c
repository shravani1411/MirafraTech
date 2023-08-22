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
	duplicate(arr,n);

}

int duplicate(int arr[],int n)
{
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				for(k=j;k<n;k++)
					arr[k]=arr[k+1];
				n--;
			}
		}
		printf("%d\n",n);
	}
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");

}
