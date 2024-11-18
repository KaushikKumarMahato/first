# include <stdio.h>
void main(){
    // 100,50,25.12.5....
float a=100;
int i,n;
printf("Enter the number of terms :");
scanf("%d",&n);
 for(i=1;i<=n;i++){
    printf("%f ",a);
    a=(a/2);
    }
}