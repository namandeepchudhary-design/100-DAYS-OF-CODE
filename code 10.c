//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>
int main()
{
    int time,a,c,sec;
    printf("ENTER TIME IN SECONDS\n");
    scanf("%d",&time);
    a=time/3600; //HOURS
    c=(time%3600)/60;
    sec=time%60; //SECONDS
    printf("HOURS:MINUTES:SECONDS\n%d:%d:%d",a,c,sec);
    return 0;
}