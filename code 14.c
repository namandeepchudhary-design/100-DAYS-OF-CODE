//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include<stdio.h>
int main()
{
    char ch;
    printf("ENTER CHARACTER");
    scanf("%c",&ch);
    if ((ch=='A') ||(ch=='E') ||(ch=='I') ||(ch=='O') ||(ch=='U') ||(ch=='a') ||(ch=='e') ||(ch=='i') ||(ch=='o') ||(ch=='u') )
        printf("IT IS A VOWEL");
    else 
        printf("IT IS A CONSTANT");
    return 0;
}