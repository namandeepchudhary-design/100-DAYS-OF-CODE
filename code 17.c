//Write a program to find the roots of a quadratic equation and categorize them.
#include<stdio.h>
#include<math.h>
int main() 
{
    float a,b,c,d,root1,root2;
    printf("Enter COEFFICIENTS OF X SQUARE ");
    scanf("%f",&a);
    printf("Enter COEFFICIENTS OF X");
    scanf("%f",&b);
    printf("Enter  NUMBER ");
    scanf("%f",&c);
    d=(b*b)- 4*a*c;
    root1=(-b + sqrt(d))/a;
    root2=(-b - sqrt(d))/a;
    if (d>0) 
    {
        printf(" Two distinct real roots exist\n");
        printf("ROOTS OF THE EQUATION\nROOT1=%f\nROOT2=%d",root1,root2);

    }
    else if (d==0) 
    {
        printf("ROOT OF THEE EQUATION\nROOT1=%f",root1);
        printf(" Two equal real roots\n");
    }
    else 
    {
        printf("Two complex conjugate roots\n");
    }
    return 0;
}
