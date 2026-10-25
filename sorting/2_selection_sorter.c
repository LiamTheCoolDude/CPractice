/*
Author: Liam McGuinness
Date: 22/10/2026
Description:
Simple collection of user inputed integers into an array and then sorted, using selction sort.
Selection sort: find the smallest value in the unsorted part, swap it to the front, repeat.
wanted to learn how to use functions aswell.
*/


#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int selectionSort(int final[], int size) {
    
    srand(time(NULL));

	int i;
	int j;
    int min;
    //int max;
    int minposition;
    //int maxposition;
    int minstop = 0;
    //int maxstop = 0;
    int swapcount = 0;
    
    //selection sorter
    for(i = 0; i < size - 1; i++) {
        
        min = final[i];
        minstop = 0;
        //max = final[size - i - 1];
        minposition = i;//so that its not uninitialised
       //maxposition = size - i - 1;

        /*if(min == max || min == max - 1) {
            break;
        }*/

        //find the smallest number
        for(j = i; j < size; j++) {
        
            if(final[j] < min) {      
                min = final[j];
                minposition = j;
                minstop++;
                swapcount++;
            }

            /*if(final[j] > max) {
                max = final[size - i - 1];
                maxposition = j;
                maxstop++;
                swapcount++;
            }*/

        }//end smallest

        final[minposition] = final[i];
        final[i] = min;

        if(minstop == 0) {

            break;

        }

        //final[maxposition] = final[size - i - 1];
        //final[size - i - 1] = max; 

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
        
        for (int i = 0; i < size; i++) {
            final[i] = initial[i];
        }

		printf("\n-- Autosorter --\n");

        //manual input of array values

		for(i = 0; i < size; i++) {
    		final[i] = rand() % 1000;
		}

        clock_t start = clock();

        selectionSort(final, size);

        clock_t end = clock();
		printf("Time: %f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);
       
        //final in order

        initialtotal = 0;

        for(i = 0; i < size; i++) {
            initialtotal = initialtotal + initial[i];

        }

        printf("The values in the initial array add up to %d.\n", initialtotal);

        finaltotal = 0;

        for(i = 0; i < size; i++) {
            finaltotal = finaltotal + final[i];

        }

        printf("The values in the final array add up to %d.\n", finaltotal);


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