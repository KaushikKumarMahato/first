# include <stdio.h>
void main(){
    float l,b,p,a ;
    printf("Enter length =");
    scanf("%f",&l);
    printf("Enter breath =");
    scanf("%f",&b);

    a=l*b;
    p= 2.0*(l+b);

    if(a>p){
        printf("Area of the rectangle is greater then its perimeter");
    }
    else if(p>a){
        printf("Perimeter of the rectangle is greatre then its area");
        
    }
}