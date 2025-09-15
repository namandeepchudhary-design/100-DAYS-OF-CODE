//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("ENTER FIRST SIDE 1\n");
    scanf("%d",&a);
    printf("ENTER SECOND SIDE 2\n");
    scanf("%d",&b);
    printf("ENTER THIRD SIDE 3\n");
    scanf("%d",&c);
    printf("%d,%d,%d",a,b,c);

    if(((a+b)>c) && ((c+b)>a) && ((a+c)>b))
    {
        printf("THIS IS A VALID TRIANGLE\n");
        if ((a*a)+(b*b)==(c*c)||(a*a)+(c*c)==(b*b)||(c*c)+(b*b)==(a*a))
            printf("THIS IS A RIGHT ANGLE  TRIANGLE");
        else if (((a==b) && (a!=c))||((c==b)&&(c!=a))||((a==c)&&(a!=b)))
            printf("THIS IS A ISOCELES TRIANGLE");
        else if (a==b && b==c)
            printf("THIS IS A EQUILATERAL TRIANGLE");
        else 
            printf("THIS IS A SCALENE TRIANGLE");  
    }
    else 
            printf("THIS IS NOT THE SIDES OF TRIANGLE");
    return 0;
}
