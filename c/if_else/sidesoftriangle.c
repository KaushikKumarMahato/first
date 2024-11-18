# include <stdio.h>
void main(){
    int a,b,c;
    printf("Enter first snumber =");
    scanf("%d",&a);
    printf("Enter second number =");
    scanf("%d",&b);
    printf("Enter third number =");
    scanf("%d",&c); 

    if((a+b)>c && (b+c)>a && (c+a)>b){
        printf("These three number can be sides of a triangle.");
    
    }
    else{
        printf("these numbers acnnot be sides of a triangle.");
    }  
}