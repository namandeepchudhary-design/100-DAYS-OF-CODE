//Write a program to check if a number is a strong number.
#include <stdio.h>
int main() 
{
    int num,sum,product=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int original=num;
    while (num!=0) 
    {   
        int temp=num%10;
        sum=1;
        for(int i=1;i<=temp;i++)
            sum=sum*i;
        product=product+sum;
        num=num/10;
    }
    if(product==original)
        printf("STRONG NUMBER");
    else
        printf("NOT A STRONG NUMBER");
}