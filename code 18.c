//Write a program to assign grades based on a percentage input.
#include<stdio.h>
int main() 
{
    float a;
    printf("Enter PERCENTAGE ");
    scanf("%f",&a);
    if (a>=90)
        printf(" GRADE A\n");
    else if (a>=80)
        printf(" GRADE B \n");
    else if (a>=70)
        printf(" GRADE C\n");
    else if (a>=60)
        printf(" GRADE D\n");
    else if (a>=50)
        printf(" GRADE E\n");
    else if (a>=40)
        printf(" GRADE F\n");
    else if (a>=30)
        printf(" GRADE G\n");
    else if (a>=20)
        printf(" GRADE H\n");
    else 
        printf(" GRADE I\n");
    return 0;
}
