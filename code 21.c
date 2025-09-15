//Write a program to display the month name and number of days using switch-case for a given month number.
#include<stdio.h>
int main()
{
    int a;
    printf("ENTER MONTH NO.\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
            printf("JANUARY,31");
            break;
         case 2:
            printf("FEBRUARY,28");
            break;
         case 3:
            printf("MARCH,31");
            break;
         case 4:
            printf("APRIL,30");
            break;
         case 5:
            printf("MAY,31");
            break;
         case 6:
            printf("JUNE,30");
            break;
         case 7:
            printf("JULY,31");
            break;
         case 8:
            printf("AUGUST,31");
            break;
         case 9:
            printf("SEPTEMBER,30");
            break;
         case 10:
            printf("OCTOBER,31");
            break;
         case 11:
            printf("NOVEMBER,30");
            break;
         case 12:
            printf("DECEMBER,31");
            break;
    }
    return 0;
}