//3) Implement a queue using array
#include<stdio.h>
#define SIZE 3
int enque(int q[],int r)
{
	int n;
	if(r==SIZE-1)
	{
		printf("queue is full\n");
		return r;
	}
	else
	{
		printf("enter data\n");
		scanf("%d",&n);
		r++;
		q[r]=n;
		printf("enque success\n");
		return r;
	}
}
int deque(int q[],int f)
{
	if(f==SIZE-1)
	{
		printf("queue is empty\n");
		return f;
	}
	else
	{
		//printf("enter data\n");
		//scanf("%d",&n);
		f++;
		printf("deque %d\n",q[f]);
		return f;
	}
}
int main()
{
	int q[SIZE];
	int r=-1,f=-1,ch;
	while(1)
	{
		printf("choose 1)enque 2)deque 3)exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: r=enque(q,r);
				break;
			case 2: f=deque(q,f);
				break;
			default:goto exit;
		exit:return 0;
			//printf("thankyou\n");
		}
	}
}
