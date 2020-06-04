#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //declarations
    float myFirstInteger;
    float mySecondInteger;
    float answerAdd;
    float answerSubtract;
    float answerMultiply;
    float answerDivide;
    float input;
    
    bool correct = false;
    
    srand(time(0));
    
    //functions

    //function add
    myFirstInteger = (rand() % 10) + 1;
    mySecondInteger = (rand() % 10) + 1;
    
    answerAdd = myFirstInteger + mySecondInteger;
    
    printf("The question is:\n");
    printf("What is %f + %f\n", myFirstInteger ,mySecondInteger);
    scanf("%f", &input);

    correct = (input == answerAdd);

    if (correct)
        printf("Your answer was %s\n", "RIGHT");
    else 
        printf("Your answer was %s\n", "WRONG");

    printf("The correct answer is %f\n", answerAdd);
    
    //function Subtract
    myFirstInteger = (rand() % 10) + 1;
    mySecondInteger = (rand() % 10) + 1;
    
    answerSubtract = myFirstInteger - mySecondInteger;   

    printf("The subtraction question is:\n");
    printf("What is %f - %f\n", myFirstInteger ,mySecondInteger);
    scanf("%f", &input);

    correct = (input == answerSubtract);

    if (correct)
        printf("Your answer was %s\n", "RIGHT");
    else 
        printf("Your answer was %s\n", "WRONG");

    printf("The correct answer is %f\n", answerSubtract);

    //function Multiply
    myFirstInteger = (rand() % 10) + 1;
    mySecondInteger = (rand() % 10) + 1;
    
    answerMultiply = myFirstInteger * mySecondInteger;

    printf("The multiplication question is:\n");
    printf("What is %f * %f\n", myFirstInteger ,mySecondInteger);
    scanf("%f", &input);

    correct = (input == answerMultiply);

    if (correct)
        printf("Your answer was %s\n", "RIGHT");
    else 
        printf("Your answer was %s\n", "WRONG");

    printf("The correct answer is %f\n", answerMultiply);

    //function Divide
    myFirstInteger = (rand() % 10) + 1;
    mySecondInteger = (rand() % 10) + 1;
    
    answerDivide = myFirstInteger / mySecondInteger;

        printf("The question is:\n");
    printf("What is %f / %f\n", myFirstInteger ,mySecondInteger);
    scanf("%f", &input);

    correct = (input == answerDivide);

    if (correct)
        printf("Your answer was %s\n", "RIGHT");
    else 
        printf("Your answer was %s\n", "WRONG");

    printf("The correct answer is %f\n", answerDivide);
    
    


    return 0;
}