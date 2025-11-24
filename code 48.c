//Write a program to print the following pattern:
/*
1
12
123
1234
12345
*/
#include <stdio.h>
int main() 
{
    for (int i=1;i<=5;i++)
    {
        for (int k=1;k<=i;k++)
            printf("%d",k);
        printf("\n");
    }
    return 0;
}