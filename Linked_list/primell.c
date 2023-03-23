#include<stdio.h>
#include<stdlib.h>
int IsPrime(int n);
typedef struct prime
{
	int p,cp;
	struct prime *next;
}prime;

prime *createnode(int n,int m)
{
	prime *new = (prime *)malloc(sizeof(prime));
	new->p=n;
	new->cp=m;
	new->next=NULL;
	return new;
}

void printll(prime *T)
{
	while(T)
	{
		printf("%d\t%d\n",T->p,T->cp);
		T=T->next;
	}
}

int main()
{
	int n,i=1,j,a,b,c;
	prime *H=NULL, *N=NULL, *L=NULL;
	printf("Enter any number:\n");
	scanf("%d",&n);
	while(1)
	{
		a=IsPrime(i);
		i++;
		if(a>0)
		{
			break;
		}
	}
	for(;i<=n;i++)
	{
		b=IsPrime(i);
		if(b>0)
		{
			c=b;
		}
		if(b>0&&(c-a)==2)
		{
			N=createnode(a,i);
			if(!H)
				H=N;
			else
				L->next=N;
			L=N;
		}
		a=c;
	}
	printll(H);
	return 0;
}

int IsPrime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			break;
		}
	}
	if(i==(n/2)+1)
		return n;
	return 0;
}


