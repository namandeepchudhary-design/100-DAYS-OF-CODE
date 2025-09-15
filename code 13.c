//Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include<stdio.h>
int main()
{
    int year;
    printf("ENTER YEAR");
    scanf("%d",&year);
    if (year%4==0)
        printf("IT IS A LEAP YEAR");
    else 
        printf("IT IS NOT A LEAP YEAR");
    return 0;
}