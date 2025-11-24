//Write a program to calculate the factorial of a number.
#include <stdio.h>

int main() {
    int  n,a=1;
    printf("ENTER NUBER FOR FACTORIAL");
    scanf("%d",&n);
    for(int i=1; i<=n; i++) 
    {
        a=a*i;
    }
    printf("FACTORIAL OF THE NUMBER IS=%d",a);  
    return 0;
}
