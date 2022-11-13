/*  Write a program to print the first 10 even natural numbers in reverse order */
#include<stdio.h>
int main()
{
    int i;
    printf("first 10 Even natural numbers in revers order\n");
    for(i=20;i>0;i--)
    {
        if(i % 2 == 0)
        printf("%d\n",i);
    }
    return 0;
}