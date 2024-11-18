// Taking input cost price and selling price of product
// and finding profit and loss and printing it.

# include <stdio.h>
void main(){
    float c,s,t ;
    printf("Enter cost price =");
    scanf("%f",&c);
    printf("Enter selling price =");
    scanf("%f",&s);

    t=(s-c);

    if(t>0){
        printf("\nYou have made profit.");
        printf("\n\nThe profit amount is = %f .",t);
    }
    else if(t==0){
        printf("\nyour profit and loss is zero.");
    }
    else{
        printf("\nYou have made loss.");
        printf("\n\nThe loss amount is = %f .",t);
    }
}
