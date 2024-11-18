# include <stdio.h>
void main(){
    int a,b,c ;
    printf("enter age of ram =");
    scanf("%d",&a);
    printf("enter age of shyam =");
    scanf("%d",&b);
    printf("enter age of ajay =");
    scanf("%d",&c);

    if(a<b){
        if(a<c){
            printf(" Ram is the youngest");
        }
        else{
            printf("Ajay is the youngest");

        }
    }
    else{
        if(b<c){
            printf("Shyam is the youngest");
        }
        else{
            printf("Ajay is the youngest");
        }
    }
}