//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main() {
    int num, digits[20], i = 0;
    printf("Enter a binary number: ");
    scanf("%d", &num);
    int original = num;
    while (num != 0) {
        int digit = num % 10;

        if (digit == 0)
            digits[i] = 1;
        else if (digit == 1)
            digits[i] = 0;
        else {
            printf("Invalid binary number!\n");
            return 1;
        }
        i++;
        num /= 10;
    }
    printf("1's complement: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", digits[j]);
    }
    printf("\n");
    return 0;
}
