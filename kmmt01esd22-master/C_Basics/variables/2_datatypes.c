#include<stdio.h>
int main()
{
int a;
float b;
double c;
char d;
printf("enter variables with all datatypes:\n");

scanf("%d %f %lf %c", &a, &b, &c, &d);
printf("int:%d\nfloat:%f\ndouble:%lf\nchar:%c\n", a,b,c,d);
return 0;
}
