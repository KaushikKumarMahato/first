// print the ap series 1,3,5,7,9....
# include <stdio.h>

void main(){
int n,a,d,i,l;

printf("Enter the number of terms in the ap =");
scanf("%d",&n);

printf("Enter the first term =");
scanf("%d",&a);

printf("Enter the common difference =");
scanf("%d",&d);

l=2*n-1;

for(i=a;i<=l;i=i+d)
{
    printf("%d ",i);
}
}