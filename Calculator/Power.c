#include <stdio.h>

int main(){
    
    //declarations
    int number;
    int powerOf;
    int answer;
    
    
    //functions
    answer = number ^ powerOf;

    printf("Put in a natural number:\n");
    scanf("%d", &number);
    printf("Put in another natural number:\n");
    scanf("%d", &powerOf);
    printf("The answer is:\n");
    printf("%d\n", answer);

    return 0;
}