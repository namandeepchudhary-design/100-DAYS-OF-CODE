//Write a program to check if a number is a perfect number.
#include <stdio.h>
int main() 
{
    int num,sum=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i=1;i<num;i++){
        if(num%i==0)
            sum=sum+i;
    }
    if(sum==num)
        printf("PERFECT NUMBER");
    else
        printf("NOT A PERFECT NUMBER");
}