#include<stdio.h>
#include<conio.h>
main()
{
int x,y,a;
printf("ingresa el valor x: ");
scanf("%d",&x); 
printf("ingresa el valor y: ");
scanf("%d",&y);
a=x;
x=y;
y=a;
printf("\n valor de x: %d",x);
printf("\n valor de y: %d",y);
getch();
}

