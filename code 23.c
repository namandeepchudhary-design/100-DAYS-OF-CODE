//Write a program to calculate a library fine based on late days.
#include<stdio.h>
int main()
{
   int days;

    printf("ENTER LATE DAYS\n");
    scanf("%d",&days);
    printf("FINE=%d\n",days*5);
    return 0;
}