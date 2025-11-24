//Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main() {
    int num, digit, i;
    int count[10] = {0};  
    printf("Enter an integer: ");
    scanf("%d", &num);
    if(num < 0) {
        num = -num;
    }
    while(num > 0) {
        digit = num % 10;
        count[digit]++;
        num = num / 10;
    }
    int maxCount = 0;
    int mostFrequentDigit = 0;
    for(i = 0; i < 10; i++) {
        if(count[i] > maxCount) {
            maxCount = count[i];
            mostFrequentDigit = i;
        }
    }
    printf("The digit that occurs the most is: %d\n", mostFrequentDigit);
    return 0;
}
