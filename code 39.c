//Write a program to reverse a given number.
#include <stdio.h>

int main() {
    int num, reversed = 1;
    printf("Enter Number ");
    scanf("%d", &num);
    while (num != 0) 
    {
        int digit = num % 10;
        if (digit%2!=0)
            reversed=reversed*digit;
        num /= 10;
    }
    printf("PRODUCT is= %d", reversed);
    return 0;
}
