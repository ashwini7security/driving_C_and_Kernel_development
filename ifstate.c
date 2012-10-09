// if statement

#include<stdio.h>
main()
{
int a = 10;
if (a<20)
printf(" %d is smaller then 20\n" , a);

int d , b ,c ;
printf ("Enter the three numbers \t");
scanf("%d \t %d \t %d", &d, &b , &c);

if (d > b && b > c )
printf ("%d is bigger then b \n" , d);
printf ("%d is bigger then c \n" , b);

switch(a)
{
case 1 : 
	printf ("The value of a is %d",&a);
case 2 : 
	printf ("wass up dude your name start with A :P");
default :
	printf ("%d is " , a);
}


}
