#include<stdio.h>

int main()
{

    float cgpa;

    scanf("%f",&cgpa);



    if(cgpa>=3.75 && cgpa<=4.00)
        printf("You are insane!!!\n");
        else if(cgpa >=3.5 && cgpa <3.75)
            printf("You are a geek!!!\n");
            else if(cgpa>=3.0 && cgpa<3.5)
                printf(" You are a rising star!!!\n");
                else if (cgpa>4.00)
                    printf("Your input is invalid\n");
                else
                    printf("you are living a wonderful life\n");

    return 0;
}

