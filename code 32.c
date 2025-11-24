//Write a program to print all factors of a given number.
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("ENTER NUMBER 1\n");
    scanf("%d",&num1);
    printf("FACTORS OF %d ARE =",num1);
    for (int i=1;i<=num1;i++)
    {
        if (num1%i==0)
            printf("  %d",i);
    }
    return 0;
}