//1) Implement a stack using array

#include<stdio.h>
#define SIZE 10
int push(int s[] ,int);
int pop(int s[],int);
int printstack(int s[],int);
int main()
{
	int s[SIZE];
	int top=-1;
	int ch;
	while(1)
	{
		printf("choose 1)push 2)pop 3)quit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:top=push(s,top);
			       break;
			case 2:top=pop(s,top);
			       break;
			case 3:goto exit;
		}
	}
exit:printf("Thank you\n");
}
int push(int s[],int t)
{
static int count=0;
	if(t==SIZE-1)
		printf("stack is full\n");
	else
	{
		int n;
		printf("enter values to insert into stack\n");
		scanf("%d",&n);
		count++;
		t++;
		s[t]=n;
	}
	printstack(s,count);
	return t;
}
int pop(int s[],int t)
{
	if(t==-1)
		printf("stack is empty\n");
	else
	{
		printf("popping %d\n",s[t]);
		t--;
	}
//	printstack(s,t);
	return t;
}
int printstack(int s[],int count)
{
	int i;
	printf("your stack is\n");
	for(i=0;i<count;i++)
		printf("%d\n",s[i]);
}


