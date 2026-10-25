/*
Author: Liam McGuinness
Date: 22/10/2026
Description:
Simple collection of user inputed integers into an array and then sorted, using bubble sort.
*/


#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

	int SIZE;
	int i;
	int j;
	int swapcontainer;
	int stop;
	int swapcount = 0;
	char rerun;
	
	do {

		//srand(time(NULL));
		
		printf("Before we start, how many integers would you like to sort? ");
		scanf("%d", &SIZE);

		int numbers[SIZE];

		printf("\n-- Autosorter --\n");
		/*
		printf("\nPlease enter %d integers.\n", SIZE);
		
		for(i = 0; i < SIZE; i++) {
			
			printf("Enter number %d: ", i + 1);
			scanf("%d", &numbers[i]);
			
		}//end for loop
		*/

		for(i = 0; i < SIZE; i++) {
    		numbers[i] = rand() % 1000;
		}

		clock_t start = clock();

		//bubble sorting
		for(j = 0; j < SIZE; j++) {

			stop = 0;
			
			for(i = 0; i < SIZE - 1; i++) {
				
				if(numbers[i] > numbers[i + 1]) {
					
					swapcontainer = numbers[i];
					numbers[i] = numbers[i + 1];
					numbers[i + 1] = swapcontainer;
					stop++;
					swapcount++;
					
				}//end if
				
			}//end inner for loop
			
			if(stop == 0) {

				break;

			}
		}//end outer for loop
		
		clock_t end = clock();
		printf("Time: %f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);

		printf("Swap count = %d", swapcount);
		/*
		printf("The numbers you entered in order are: ");
		
		for(i = 0; i < SIZE; i++) {
			
			printf("%d ", numbers[i]);
			
		}//end for loop
		*/

		printf("\n\nwould you like to go again (y): ");
		scanf(" %c", &rerun);

	} while (rerun == 'y');
	
	
	return 0;
}