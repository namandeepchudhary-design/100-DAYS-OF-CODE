//Write a program to check if a number is a palindrome.
#include <stdio.h>
int main() {
    int num, reversed = 0,a;
    printf("Enter Number ");
    scanf("%d", &num);
    a=num;
    while (num != 0) 
    {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    if (a==reversed)
        printf("NUMBER IS PALINDROME");
    else
        printf("NUMBER IS NOT PALINDROME");

    return 0;
}
