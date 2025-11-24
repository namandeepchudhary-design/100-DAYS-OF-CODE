//Find the second largest element in an array.
#include <stdio.h>
void read();
void seclar();
int n;
int main() {
    printf("Enter total elements");
    scanf("%d", &n); 
    for (int i=0 ; i<=n-1; i++){
         printf("Enter Number");
         scanf("%d", &a[i]);
    }
    read();
    seclar();
   return 0;
}
void read(){
    printf("ELEMENTS OF ARRAY ARE\n");
    for (int i=0 ; i<=n-1 ; i++){
         printf("%d ", a[i]);
    }
}
void seclar(){
    int temp;
    int first , second;
    if (n==2){
        first=a[0];
        second=a[1];
        if (second>first)
            printf("SECOND LARGEST NUMBER = %d",first);
        else
            printf("SECOND LARGEST NUMBER = %d",second);
    }
    else{
        for (int i=0 ; i<=n-2 ; i++){
            if (a[i+1]>a[i]){
               a[i],a[i+1]=a[i+1],a[i];
            }
        }
    printf("\nSECOND LARGEST NUMBER = %d",a[1]);
    }
}

