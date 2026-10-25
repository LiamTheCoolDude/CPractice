#include <stdio.h>

int main() {
	
	int answer = 42;
	int guess[10];//prepopulate the array
	int i;
	char play_again = '0';

	do {
		printf("\n-- Guessing Game --\nplease enter 10 integers:\n");

		//gather the array data
		for(i = 0; i < 10; i++) {
			printf("what's your guess?\n");
			scanf("%d", &guess[i]);
			
			if(guess[i] != answer) {
				printf("Bahahaha u suckkkkk like dammy:)\n");
			} else {
				printf("Niceeee, you win!\n");
				break;
			}
		}// close for loop

		//display the array
		for(i = 0; i < 10; i++) {
			printf("\nThe guess was: %d", guess[i]);
		}
		
		printf("\nPlay again (y): ");
		scanf(" %c", &play_again);
		
	} while(play_again == 'y');

	
	return 0;
}