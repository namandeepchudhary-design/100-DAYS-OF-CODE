//Write a program to find profit or loss percentage given cost price and selling price.
#include<stdio.h>
int main()
{
    int cp,sp,pl;
    printf("ENTER COST PRICE\n");
    scanf("%d",&cp);
    printf("ENTER SELLING PRICE\n");
    scanf("%d",&sp);
    if(sp>cp)
    {
        printf("PROFIT\n");
        pl=((sp-cp)*100)/cp;
        printf("%d",pl);
    }
    else{
        printf("LOSS\n");
        pl=((cp-sp)*100)/cp;
        printf("%d",pl);
    } 
    return 0;
}
