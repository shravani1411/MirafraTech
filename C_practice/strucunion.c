#include<stdio.h>
struct academic1
{
	int per;
	float cgpa;
	char grade;
};

union academic2
{
	int per;
	float cgpa;
	char grade;
};

struct academic1 s;
union academic2 u;
int main()
{
	printf("%lu %lu\n",sizeof(struct academic1),sizeof(union academic2));
	s.per=90;
	s.cgpa=7;
	s.grade='A';

	u.per=75;
	u.cgpa=8;
	u.grade='B';
	//struct academic1 s={90,4,'A'};
//	union academic2 u={95,6,'B'};
	printf("%d %f %c\n",s.per,s.cgpa,s.grade);
	printf("%d %f %c\n",u.per,u.cgpa,u.grade);
}
