#include <stdio.h>

int main() {
    //declarations
    int myFirstInteger;
    int mySecondInteger;
    float result;

    //initialisations
    myFirstInteger = (myFirstInteger % 10) + 1;
    mySecondInteger = (mySecondInteger % 10) + 1;
    
    //functions
    printf("The question is:\n");
    printf("What is %d * %d\n", myFirstInteger ,mySecondInteger);
    scanf("%f", &result);
    printf("The correct answer is : %d\n", myFirstInteger * mySecondInteger);

    return 0;
}