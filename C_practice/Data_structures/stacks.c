#include<stdio.h>

#define SIZE 6


int isfull(void);
int push(int n);
int isempty();
int pop(int n);
int printstack(int n);

int main()
{
	int i,x,n;
int stack[SIZE];
int top=-1;
	printf("enter your choice\n");
	while(1)
	{
		printf("1.push\n2.pop\n");
		scanf("%d",&x);
		switch(x)
		{
		case 1:top=push(23);
      		break;
		case 2:top=pop(12);
      		break;	
		case 3: printf("exit\n");

	}
	}
}

int isfull(void)
{
	if(top==-1)
		return 1;
	else
		return 0;
}

int push(int n)
{
	int b;
	if(isfull()==1)
	{
		printf("stack is full\n");
		return 1;
	}
	printf("enter elements\n");
	scanf("%d",&b);
	stack[++top]=n;
	printstack(n);
}

int isempty()
{
	if(top==1)
	{
		return 1;
	}
	else
		return 0;

}

int pop(int n)
{
	//int n;
	if(isempty()==1)
	{
		printf("stack is empty\n");
		return -1;
	}
	else
		n=stack[top];
	top--;
	printf("%d\n%d",top,n);
}

int printstack(int n)
{
	int i;
	for(i=0;i<SIZE;i++)
	{
		printf("%d",stack[i]);
	}
}

