//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("ENTER NO.1 FOR ADDITION\n");
    printf("ENTER NO.2 FOR SUBTRACTION\n");
    printf("ENTER NO.3 FOR MULTIPLICATION\n");
    printf("ENTER NO.4 FOR DIVISON\n");
    printf("ENTER NO.5 FOR FLOOR DIVISON\n");
    scanf("%d",&c);
    printf("ENTER NOs.\n");
    scanf("%d",&a);
    scanf("%d",&b);
    switch(c)
    {
        case 1:
            printf("%d",a+b);
            break;
         case 2:
            printf("%d",a-b);
            break;
         case 3:
            printf("%d",a*b);
            break;
         case 4:
            printf("%d",a/b);
            break;
         case 5:
            printf("%d",a%b);
            break;   
    }
    return 0;
}