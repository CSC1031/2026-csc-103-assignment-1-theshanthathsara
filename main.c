#include <stdio.h>                     //INDEX NO: AS20250483
#include <stdlib.h>

int main()
{
    float maths=0.0;
    float science=0.0;
    float english=0.0;
    float total=0.0;
    float average=0.0;

    printf("Enter your maths marks : ");
    scanf("%f",&maths);
    printf("Enter your science marks : ");
    scanf("%f",&science);
    printf("Enter your english marks : ");
    scanf("%f",&english);

    total=maths+science+english;
    average=total/3.0;

    printf("Total: %.2f\n",total);
    printf("Average: %.2f\n",average);

    if (average>=80){
        printf("Grade: A\n");
    }
    else if (average>=70){
        printf("Grade: B\n");
    }
    else if (average>=60){
        printf("Grade: C\n");
    }
    else if (average>=50){
        printf("Grade: D\n");
    }
    else{
        printf("Grade: F\n");
    }

    if (maths>=40 && science>=40 && english>=40){
        printf("Result: PASS\n");
    }
    else{
        printf("Result: FAIL\n");
    }


    return 0;
}
