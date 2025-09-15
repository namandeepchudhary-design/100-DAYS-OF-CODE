#include <stdio.h>
#include <math.h>
int main() 
{
    float amt, rate, year, n;
    float si,ci;
    printf("Enter principal amount");
    scanf("%f", &amt);
    printf("Enter annual interest rate");
    scanf("%f", &rate);
    printf("Enter time in years");
    scanf("%f", &year);
    printf("Enter number of times interest is compounded per year");
    scanf("%f", &n);
    si = (amt * rate * year) / 100;
    ci = amt * pow((1 + rate / (100 * n)), n * year) - amt;
    printf("Simple Interest = %f\n", si);
    printf("Compound Interest = %f\n", ci);
    return 0;
}
