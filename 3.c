//priority sequence of pre & post increament/decreament operators and assignment operator.
#include<stdio.h>
#include<conio.h>
void main()
{
    int x=4,y,z;
    y=++x;   //pre increament 
    printf("%d %d\n",y,x);
    z=x++;   //post increament
    printf("\n%d %d",z,x);
    getch();
}