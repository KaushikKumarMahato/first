# include <stdio.h>
int main(){
    int a,b,r,q;

    printf("first integer must greater than second.");
    printf("\n Enter first integer =");
    scanf("%d",&a);
    printf("\n Enter second integer =");
    scanf("%d",&b);
    
    q = a/b;
    r = a - (b*q);
    printf("\nThe remainder when %d is divided by %d is = %d",a,b,r);
    return 0;


}