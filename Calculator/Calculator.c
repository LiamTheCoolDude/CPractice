#include <stdbool.h>
#include <stdio.h>

int main() {
    //declarations
    int myFirstInteger;
    int mySecondInteger;
    int answerAdd;
    int answerSubtract;
    int answerMultiply;
    int answerDivide;
 
    int input;
    bool correct = false;
    
    //initialisations
    myFirstInteger = (myFirstInteger % 10) + 1;
    mySecondInteger = (mySecondInteger % 10) + 1;
    
    //functions

    //function add
    answerAdd = myFirstInteger + mySecondInteger;
    
    printf("The question is:\n");
    printf("What is %d + %d\n", myFirstInteger ,mySecondInteger);
    scanf("%d", &input);

    correct = (input == answerAdd);

    if (correct)
        printf("Your answer was %s\n", "RIGHT");
    else 
        printf("Your answer was %s\n", "WRONG");

    printf("The correct answer is %d\n", answerAdd);
    
    //function Subtract
    answerSubtract = myFirstInteger - mySecondInteger;   

    printf("The subtraction question is:\n");
    printf("What is %d - %d\n", myFirstInteger ,mySecondInteger);
    scanf("%d", &input);

    correct = (input == answerSubtract);

    if (correct)
        printf("Your answer was %s\n", "RIGHT");
    else 
        printf("Your answer was %s\n", "WRONG");

    printf("The correct answer is %d\n", answerSubtract);

    //function Multiply
    answerMultiply = myFirstInteger * mySecondInteger;

    printf("The multiplication question is:\n");
    printf("What is %d * %d\n", myFirstInteger ,mySecondInteger);
    scanf("%d", &input);

    correct = (input == answerMultiply);

    if (correct)
        printf("Your answer was %s\n", "RIGHT");
    else 
        printf("Your answer was %s\n", "WRONG");

    printf("The correct answer is %d\n", answerMultiply);

    //function Divide
    answerDivide = myFirstInteger / mySecondInteger;

        printf("The question is:\n");
    printf("What is %d / %d\n", myFirstInteger ,mySecondInteger);
    scanf("%d", &input);

    correct = (input == answerDivide);

    if (correct)
        printf("Your answer was %s\n", "RIGHT");
    else 
        printf("Your answer was %s\n", "WRONG");

    printf("The correct answer is %d\n", answerDivide);
    
    


    return 0;
}