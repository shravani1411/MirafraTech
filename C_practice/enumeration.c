#include<stdio.h>
enum week
{
	sun,mon,tue,wed,thu,fri,sat
};

int main()
{
	enum week w;
	printf("%lu\n",sizeof(w));
	printf("%d %d %d\n",sun,mon,tue);
	w=thu;
	printf("%d\n",w);
	switch(w)
	{
		case sun:printf("1\n");
			 break;
		case mon:printf("2\n");
			 break;
		case tue:printf("3\n");
			 break;
		case wed:printf("4\n");
			 break;
		case thu:printf("5\n");
			 break;
		case fri:printf("6\n");
			 break;
		case sat:printf("7\n");
			 break;
	}
}
