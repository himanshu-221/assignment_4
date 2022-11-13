/*  Write a program to print the first 10 natural numbers   */
#include<stdio.h>
int main()
{
    int i;
    printf("first 10 natural numbers are:-\n");
    for(i=1;i<=10;i++)
    {       // All the positive integers are natural number from 1 to infinite
        printf("%d\n",i+1);
    }
    return 0;
}