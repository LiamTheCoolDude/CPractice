#include <stdbool.h>
#include <stdio.h>

int main() {
    //declarations
    int myFirstInteger;
    int mySecondInteger;
    int answer;
    int input;
    bool correct = false;
    
    //initialisations
    myFirstInteger = (myFirstInteger % 10) + 1;
    mySecondInteger = (mySecondInteger % 10) + 1;
    
    //functions
    answer = myFirstInteger * mySecondInteger;
    
    printf("The question is:\n");
    printf("What is %d * %d\n", myFirstInteger ,mySecondInteger);
    scanf("%d", &input);

    correct = (input == answer);

    if (correct)
        printf("Your answer was %s\n", "RIGHT");
    else 
        printf("Your answer was %s\n", "WRONG");

    printf("The correct answer is %d\n", answer);

    return 0;
}