# include <stdio.h>
void main(){
    int a,b,c ;
    printf("Enter first numbeer =");
    scanf("%d",&a);
    printf("\nEnter second numbeer =");
    scanf("%d",&b);
    printf("\nEnter third numbeer =");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("\n%d ia the greatest integer among the three.",a);
    }
    else if(b>a && b>c){
        printf("\n%d is the greatest integer among the three.",b);
    }
    else{
        printf("\n%d is the greatest integer among the three.",c);

    }
    
}