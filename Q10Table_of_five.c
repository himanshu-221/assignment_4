/*  Write a program to print a table of 5   */
#include<stdio.h>
int main()
{
    int i;
    printf("Square of firsr 10 natural numbers\n");
    for(i=1;i<=10;i++)
    {
        printf("5 x %d = %d\n",i,i*5);
    }
    return 0;
}