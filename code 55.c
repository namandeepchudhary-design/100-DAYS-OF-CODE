//WRITE A PROGRAM TO PRINT ALL PRIME NUMBERS FROM 1 TO N
#include <stdio.h>

int main() {
    int num,a;
    printf("Enter Number ");
    scanf("%d", &num);
    if (num==0 || num==1)
        printf("NOT PRIME NUMBERS");
    else
    {   
        printf("PRIME NUMBERS\n");
        for (int i=2 ; i<=num ; i++)
        {
            a=0;
            for (int k=1 ; k<=i ; k++) 
            {
                if (i%k==0)
                    a=a+1;
            }
            if (a==2)
                printf("%d\n",i);
        }
    }    
    return 0;
}
