/*  Write a program to print the first 10 odd natural numbers   */
#include<stdio.h>
int main()
{
    int i,count=0;
    printf("First 10 odd natural numbers:\n");
    for(i=1;i<=20;i++)
    {
        if( i % 2 != 0)
        {
            printf("%d\n",i);
        }
        count++;
    }
    printf("Total numbers [%d]",count);
    return 0;
}