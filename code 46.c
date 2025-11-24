//Write a program to print the following pattern:
/*
*****
*****
*****
*****
***** 
*/
#include <stdio.h>
int main() 
{
    for (int i=1;i<=5;i++)
    {
        for (int k=i;k<=i+4;k++)
            printf("*");
        printf("\n");
    }
    return 0;
}