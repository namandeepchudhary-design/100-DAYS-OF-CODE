//Write a program to input an integer and check whether it is even or odd using if–else.
#include<stdio.h>
int main()
{
    int num1;
    printf("ENTER NUMBER");
    scanf("%d",&num1);
    if (num1%2==0)
        printf("IT IS A EVEN NUMBER");
    else 
        printf("IT IS A ODD NUMBER");
    return 0;
}