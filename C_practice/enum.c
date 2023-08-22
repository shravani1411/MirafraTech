#include<stdio.h>
enum week
{
	sun,mon,tue,wed,thur,fri,sat
}today;

int main()
{
	enum week day;
	enum week date;
	today=thur;
	day=mon;
	date=sun;
	printf("Day %d\t%d\t%d\n",today+1,day,date);
}
