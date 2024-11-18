# include <stdio.h>
void main(){
    int a ;
    printf("Enter a positive integer =");
    scanf("%d",&a);

    if (a%3==0 && a%5==0){
        printf("Thhis number is divisible by both 3 and 5");
    }
    else{
        printf("This numver is not divisible by both 3 and 5.");
    }

}