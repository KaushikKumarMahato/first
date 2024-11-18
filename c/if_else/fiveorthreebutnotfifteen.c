# include <stdio.h>
void main(){
    int a ;
    printf("Enter a number =");
    scanf("%d" ,&a);

    if(a%3==0 || a%5==0 ){
        if(a%15!=0){
            printf("This number is divisible by 3 or 5 but not 15.");
        }
        else{
            printf(" This number is divisible by 15.");
        }

    }

    else{
        printf("this number is not divisible by 3 or 5 .");
    }
}