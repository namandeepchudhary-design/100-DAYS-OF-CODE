//Write a program to print the following pattern:
/*

*

*
*
*

*
*
*
*
*

*
*
*

*

*/
#include <stdio.h>

int main() {
    int num;
    num=13531;
    while (num != 0) 
    {
        int digit = num % 10;
        for (int i=1;i<=digit;i++)
            printf("*\n");
        printf("\n");
        num /= 10;
    }
    return 0;
}
