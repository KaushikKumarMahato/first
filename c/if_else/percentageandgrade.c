# include <stdio.h>
void main(){
    int p;
    printf("Enter percentage =");
    scanf("%d",&p);

    if(p>90 && p<=100){
        printf("Grade - Excellent");
    }
    else if(p>80&& p<90){
        printf("Grade - very good");
        
    }
    else if(p>70&& p<80){
        printf("Grade -  good");
        
    }
    else if(p>60 && p<70){
        printf("Grade - can do better");
        
    }
    else if(p>50 && p<60){
        printf("Grade - Average");
        
    }
    else if(p>40 && p<50){
        printf("Grade - below average");
        
    }
    else {
        printf("Grade - fail");
        
    }
}
