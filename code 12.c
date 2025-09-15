//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>
int main()
{
    int num1;
    printf("ENTER NUMBER");
    scanf("%d",&num1);
    if (num1>0)
        printf("IT IS A POSITIVE NUMBER");
    else if (num1<0)
        printf("IT IS A NEGATIVE NUMBER");
    else 
        printf("THE NUMBER IS ZERO");
    return 0;
}