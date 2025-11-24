//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>
int main() 
{
    int num,b,a;
    float sum=1.0,c;
    printf("Enter total terms : ");
    scanf("%d", &num);
    printf("SERIES\n");
    for(int i=1;i<=num;i++)
    {
        b=2*i;
        a=3 + 4*(i-1);
        c=(float)b/a;
        printf("%d/%d + ",b,a );
        sum=sum + c ;
    }
    
    printf("\n%f",sum);
    return 0;
}