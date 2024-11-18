
# include <stdio.h>
int main(){
int a,r,n,term,i;
 printf("Enter the number of terms :");
 scanf("%d",&n);
printf("Enter the first term :");
 scanf("%d",&a);
 printf ("Enter the common difference :");
scanf("%d",r);
for(i=1;i<=n;i++){
    printf("%d ",a);
    a+=r;
}
 return 0;
    
}