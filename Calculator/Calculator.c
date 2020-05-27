#include <stdio.h>

int main() {
    //declarations
    int myFirstInteger;
    int mySecondInteger;
    int result;

    //initialisations
    myFirstInteger = 4;
    mySecondInteger = 9;
    
    //functions
    result = myFirstInteger * mySecondInteger;
    printf("The question is:\n");
    printf("What is %d * %d\n", myFirstInteger ,mySecondInteger);
    scanf("%d", &result);
    printf("%d\n", myFirstInteger * mySecondInteger);

    return 0;
}