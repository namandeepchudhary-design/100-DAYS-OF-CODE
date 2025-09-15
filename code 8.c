//Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>
int main()
{
    int sum,n,i;
    sum=0;
    printf("enter last to which natural numbers to add\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("SUM OF FIRST N NATURAL NUMBERS IS=%d",sum);
    return 0;
}