#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, pow10, middle, swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;  // Get last digit
    digits = (int)log10(num); // Total digits - 1
    pow10 = (int)pow(10, digits); // 10^(digits)

    first = num / pow10; // Get first digit
    middle = num % pow10; // Remove first digit
    middle = middle / 10; // Remove last digit

    swapped = last * pow10 + middle * 10 + first;

    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;
}
