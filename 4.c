//function of sizeof unary operator-how much storage (in bytes) is occupied by different data types.  
#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y;   //for int data type storage value should be 4.
    float k;   //should be 4.
    double d1; // should be 8.
    char ch;   // should be 1. 

    x=sizeof(ch);
    printf("%d",x);
    getch();
    }