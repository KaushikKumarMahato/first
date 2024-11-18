# include <stdio.h>
void main(){
    int a,b,c;
    printf("Enter age of Ram =");
    scanf("%d",&a);
    printf("Enter age of Shyam =");
    scanf("%d",&b);
    printf("Enter age of Ajay =");
    scanf("%d",&c); 

   if(a<b && a<c){
        printf("Ram is the youngest");
    }
    else if(b>a && b<c){
        printf("Shyam is the youngest");
    }
    else{
        printf("Ajay is the youngest.");
    }

}