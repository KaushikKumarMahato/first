# include <stdio.h>
int main()
{
    float f,c ;
    printf(" Enter temperature in degree celcious =");
    scanf("%f",&c);

    f=(c*9)/5+32;
    printf("\n Temperature in degree fahrenheit= %f",f);

    return 0;
}