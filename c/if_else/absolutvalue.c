# include <stdio.h>

int main(){
    int x;
    printf("Enter a number :");
    scanf("%d",&x);


    if(x>0){
        printf("The absolute value of the number is %d",x);

    }
    else{
        x=x*(-1);
        printf("the absoute value of the number is %d",x);
    }

    return 0;

}