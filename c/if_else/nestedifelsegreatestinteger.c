# include <stdio.h>
void main(){
    int a,b,c ;
    printf("enter first positive integer =");
    scanf("%d",&a);
    printf("enter second positive integer =");
    scanf("%d",&b);
    printf("enter third positive integer =");
    scanf("%d",&c);

    if(a>b){
        if(a>c){
            printf("%d is the grearest integer.",a);
        }
        else{
            printf("%d is the grearest integer.",c);

        }
    }
    else{
        if(b>c){
            printf("%d is the grearest integer.",b);
        }
        else{
            printf("%d is the grearest integer.",c);
        }
    }
}