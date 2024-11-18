# include <stdio.h>
void main(){
    int a ;
    printf("Enter s positive number =");
    scanf("%d",&a);

    if(a>99 && a<1000){
        printf("This is a three digit number.");

    }
    else{
        printf("This is not a three digit number.");
    }
}