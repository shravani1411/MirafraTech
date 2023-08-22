//Selection sort

#include<stdio.h>
int main()
{
	int n,i,j,min;
	printf("Enter the size:\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
//			swap(a[i],a[min]);
			int temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
	printf("sorted elements\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}


