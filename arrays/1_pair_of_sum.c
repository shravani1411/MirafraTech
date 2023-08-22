
#include<stdio.h>
//void find_pair(int arr[],int n,int sum);

void main(void)
{
	int n,x,sum,i;
	printf("enter the array size:\n");
	scanf("%d",&n);
	int arr[n];
	//	int n=sizeof(arr)/sizeof(arr[0]);
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the sum:\n");
	scanf("%d",&sum);
//	return 0;
//	find_pair(arr,n,sum);
//}

//void find_pair(int arr[],int n,int sum)
//{
	int j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++)
		{
			if(arr[i]+arr[j]==sum)
			{
			printf("Pair for given sum:%d,%d\n",arr[i],arr[j]);
			return ;
			}
		}
	}
//	if(n==i)
		printf("Pair not found\n");

}
