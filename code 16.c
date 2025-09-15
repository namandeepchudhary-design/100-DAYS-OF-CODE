//Write a program to input three numbers and find the largest among them using if–else.
#include<stdio.h>
int main() 
{
    int a,b,c;
    printf("Enter 1stNUMBER ");
    scanf("%d",&a);
    printf("Enter 2nd NUMBER ");
    scanf("%d",&b);
    printf("Enter 3rd NUMBER ");
    scanf("%d",&c);
    if (a>b && a>c) 
        printf(" NUMBER 1 IS GREATER\n");
    else if (b>a && b>c) 
        printf(" NUMBER 2 IS GREATER\n");
    else 
        printf("NUMBER 3 IS GREATER\n");
    return 0;
}
