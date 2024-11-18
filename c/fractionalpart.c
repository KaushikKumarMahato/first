#include <stdio.h>
int main(){
    float x ;
    printf("Enter float number =");
    scanf("%f",&x);

    int y = x;
    float z=x-y;
    printf("Fractional part of %f is %f",x,z);
    return 0;
} 