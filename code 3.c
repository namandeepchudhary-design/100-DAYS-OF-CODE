//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main()
{
    int length,breadth;
    printf("enter length\n");
    scanf("%d",&length);
    printf("ENTER breadth\n");
    scanf("%d",&breadth);
    printf("PERIMETER=%d\n",2*(length+breadth));
    printf("AREA=%d\n",(length*breadth));
    return 0;
}