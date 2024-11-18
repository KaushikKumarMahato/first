# include <stdio.h>
int main(){
    float s1,s2,s3,s4,s5,p;

    printf("Enter marks obtained in maths =");
    scanf("%f",&s1);
    printf("\nEnter marks obtained in chemistry =");
    scanf("%f",&s2);
    printf("\nEnter marks obtained in english =");
    scanf("%f",&s3);
    printf("\nEnter marks obtained in ethics =");
    scanf("%f",&s4);
    printf("\nEnter marks obtained in computer science =");
    scanf("%f",&s5);

    p=(s1 + s2 + s3 + s4 + s5)/5;

    printf("Your percentage is = %f",p);


    return 0;
    
}