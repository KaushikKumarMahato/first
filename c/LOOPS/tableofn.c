// print table of n where n is integer input by user 
# include <stdio.h>
 void main ()
 {
    int i,n,x;
    printf("Enter integer to  print its table =");
    scanf("%d",&n);

    for(i=1;i<=10;i++){
        x=n*i;
        printf("%d x %d = %d\n",n,i,x);
    }
 }