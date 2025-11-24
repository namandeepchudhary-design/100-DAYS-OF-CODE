//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
int main() 
{
    int num,b,a;
    float sum=1.0,c;
    printf("Enter total terms : ");
    scanf("%d", &num);
    if(num==1){
        printf("SERIES\n");
        printf("1");
    }
    else
    {   
        printf("SERIES\n");
        printf("1 + ");
        for(int i=2;i<=num;i++)
        {
            a=((2*i)-1);
            b=2*i;
            c=(float)a/b;
            printf("%d/%d + ",(2*i)-1, 2*i );
            sum=sum + c ;
        }
    }
    printf("\n%f",sum);
    return 0;
}