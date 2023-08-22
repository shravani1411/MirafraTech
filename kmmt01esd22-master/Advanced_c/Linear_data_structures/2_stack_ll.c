//2.Implement a stack using linked list

#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	int id;
	char name[10];
	struct student *next;
}student;


student *create_node();
void printll(student *p);
student *push(student *top);
student *pop(student *top);
int main()
{
	student *h = NULL,*n = NULL,*l = NULL;
	int choice;
	while(1)
	{
		//printf("\n");
		printf("Choose the below options :\n");
		printf("1.push\n");
		printf("2.pop\n");
		printf("3.quit\n");
		printf("\n");
		printf("Enter any option:\n");
		scanf("%d",&choice);
		printf("\n");
		switch(choice)
		{
			case 1: h = push(h);
				break;
			case 2: h = pop(h);
				break;
			case 3 : goto EXIT;
		}
		printll(h);
	}
EXIT : printf("Thank you\n");
}
student *create_node()
{
	student *new = (student *)malloc(sizeof(student));
	printf("Enter student ID :\n");
	scanf("%d",&new->id);
	printf("Enter student name :\n");
	scanf(" %s",new->name);
	new->next = NULL;
	return new;
}
void printll(student *p)
{
	while(p)
	{
		printf("Student Id=%d and name=%s\n",p->id,p->name);
		//scanf("%d\n%s\n",p->id,p->name);
		p = p->next;
	}
}


student *push(student *top)
{
//	int i=1;
	student *new = create_node();
	student *h = top;
	if(top == 0)
	{
		top = new;
	}
	else
	{
		h = top;
		top = new;
		top->next = h;
		printf("success pushing\n");
	}
	return top;
}
student *pop(student *top)
{
	//int i=1;
	student *h = top,*a;
	if(top == 0)
	{
		printf("stack is empty\n");
	}
	else
	{
		a = h;
		h = h->next;
		free(a);
		printf("popping success\n");
	}
	return h;
}


