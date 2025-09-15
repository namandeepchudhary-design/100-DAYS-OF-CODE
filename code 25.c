//Write a program to calculate an electricity bill based on units consumed.
#include<stdio.h>
int main()
{
   int units;

    printf("ENTER UNITS OF ELECTRICITY\n");
    scanf("%d",&units);
    printf("ELECTRICITY BILL=%d\n",units*3);
    return 0;
}