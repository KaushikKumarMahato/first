# include <stdio.h>
int main(){

    float x,y,z,s,avg ;

    printf("\nEnter the first number =");
    scanf("%f", &x);
    printf("\nEnter the seconf number =");
    scanf("%f", &y);
    printf("\nEnter the third number = ");
    scanf("%f", &y);

    s=x+y+z;
    printf("\nSum of the numbers = %f", s);

    avg=s/3;
    printf("\n Average of the three number = %f",avg);          


    return 0;
}