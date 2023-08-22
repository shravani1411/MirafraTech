//Its possible to declare const  variable within a structure but needs to be initialized as soon as you declare variable for the structure.

struct xyz
{
const int x;
};

#include<stdio.h>
int main()
{
struct xyz s={10};
//s.x=10;
//scanf("%d",&s.x);
printf("%d\n",s.x);
}
