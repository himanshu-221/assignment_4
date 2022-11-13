/*Write a program to print the first 10 even natural numbers*/
#include<stdio.h>
int main()
{
    int i;
    printf("First 10 even natural numbers: \n");
    for(i=1;i<=20;i++)
    {
        if(i % 2 == 0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}