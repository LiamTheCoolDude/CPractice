/*
Author: Liam McGuinness
Date: 25/10/2026
Description:
Simple collection of user inputed integers into an array and then sorted, using selction sort.
Selection sort: find the smallest value in the unsorted part, swap it to the front, repeat.
i will be attempting to split the array in two, sort the smaller half using a min variable and the greater half
using a max variable.
wanted to learn how to use functions aswell.
*/


#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int selectionSort(int final[], int size) {

	int i;
	int j;
    int min;
    int minposition;
    int minstop = 0;
    int swapcount = 0;
    
    //selection sorter
    for(i = 0; i < size - 1; i++) {
        
        min = final[i];
        minstop = 0;
        minposition = i;//so that its not uninitialised

        //find the smallest number
        for(j = i; j < size; j++) {
        
            if(final[j] < min) {      
                min = final[j];
                minposition = j;
            }

        }//end smallest

        final[minposition] = final[i];
        final[i] = min;
        swapcount++;

    }//end i loop

    printf("Swap count = %d\n", swapcount);

}

int main() { 
	
	int size;
    int initialtotal;
    int finaltotal;
    int i;
	char y;
	
	do {

        srand(time(NULL));

		printf("Before we start, how many integers would you like to sort? ");
        scanf("%d", &size);

        while(size < 1) {
            printf("\nError: Input must be a positive integer: ");
            scanf("%d", &size);
        }

		int initial[size];
        int final[size];
        
        for(i = 0; i < size; i++) {
    	    initial[i] = rand() % 1000;
		}

        for (int i = 0; i < size; i++) {
            final[i] = initial[i];
        }

		printf("\n-- Autosorter --\n");

        //manual input of array values


        clock_t start = clock();

        selectionSort(final, size);

        clock_t end = clock();
		printf("Time: %f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);
       
        //final in order

        initialtotal = 0;

        for(i = 0; i < size; i++) {
            initialtotal = initialtotal + initial[i];

        }

        printf("The values in the initial array add up to %d.", initialtotal);

        finaltotal = 0;

        for(i = 0; i < size; i++) {
            finaltotal = finaltotal + final[i];

        }

        printf("\nThe values in the final array add up to %d.\n", finaltotal);

        //final in order
		printf("\nThe initial numbers you entered in order are: ");
		
		for(i = 0; i < size; i++) {
			
			printf("%d ", initial[i]);
			
		}//end for loop
        
        //final in order
		printf("\nThe final numbers you entered in order are:   ");
		
		for(i = 0; i < size; i++) {
			
			printf("%d ", final[i]);
			
		}//end for loop



		printf("\n\nwould you like to go again (y): ");
		scanf(" %c", &y);

	} while (y == 'y');
	
	
	return 0;
}

//manual input of array values
        /*
        //manual input of array values
        printf("\nPlease enter %d integers.\n", size);
		
        //input for array
		for(i = 0; i < size; i++) {
			
			printf("Enter number %d: ", i + 1);
			scanf("%d", &final[i]);
			
		}//end for loop
		*/

//final in order
        /*
        //final in order
		printf("\nThe final you entered in order are: ");
		
		for(i = 0; i < size; i++) {
			
			printf("%d ", final[i]);
			
		}//end for loop
        */