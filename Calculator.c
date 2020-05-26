#include <stdio.h>

int main() {
    //declarations
    int myFirstInteger;
    int mySecondInteger;
    int result;
    
    //initialisations
    myFirstInteger = 24;
    mySecondInteger = 79;
    result = 0;

    //functions
    result = myFirstInteger * mySecondInteger;
    printf("The question is:\n");
    printf(" What is %d * %d?\n", myFirstInteger ,mySecondInteger);
    printf("The answer is:\n");
    printf(" %d\n", result);
    
    return 0;
}