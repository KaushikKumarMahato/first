# include <stdio.h>
# include <conio.h>

int main(){

    int x;

    printf("Enter a number=");
    scanf("%d",&x);

    if (x%2==0){
        printf("THe number is even");
    
    }

    else{
        printf(" The number is odd");
        
    }
    return 0;
}