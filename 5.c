//Size of
#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y,z;
    x=sizeof(34);
    y=sizeof(3.56);
    z=sizeof('a');       // ASCII has given every character a int value between 0 to 255,so internally the computer takes 'a' as a int valued number i.e. 97.
    printf("%d %d %d",x,y,z);
    getch();
}