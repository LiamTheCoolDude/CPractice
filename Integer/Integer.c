#include <stdio.h>

int main() {
    //declarations
    int myFirstInteger;
    int mySecondInteger;
    int result;
    
    //initialisations
    myFirstInteger = 71;
    mySecondInteger = 73;
    result = 0;

    //functions
    result = myFirstInteger * mySecondInteger;
    printf("myFirstInteger * mySecondInteger = %d\n", result);
    
    return 0;
}