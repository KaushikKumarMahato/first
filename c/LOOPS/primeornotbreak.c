// check prime number
# include <stdio.h>
void main(){
     int n,i,a=0;
     printf("Enter number = ");
     scanf("%d",&n);
     if(n==1){
        printf("1 is nither prime nor composit.");

     }
     else{

     for(i=2;i<=(n-1);i++){
        if(n%i==0){
        a=1;
        }
     }
        if(a==0){
            printf("The given number is prime.");
        }
        else{
            printf("The given number is composit.");
         
        }
     }

     
}