//Write a program to reverse a given number.
#include <stdio.h>

int main() {
    int num, reversed = 0;
    printf("Enter Number ");
    scanf("%d", &num);
    while (num != 0) 
    {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    printf("Reversed number is= %d", reversed);
    return 0;
}
