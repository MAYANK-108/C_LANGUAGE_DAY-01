// my first Project in c language....


#include <stdio.h>
#include <stdlib.h>   // for rand() and srand()
#include <time.h>     // for time()

int main() {
    int randomNumber;

    // initialize random number generator using current time
    srand(time(0));

    // generate random number between 1 and 100
    randomNumber = (rand() % 100) + 1;
    // printf("%d\n is the answer\n",randomNumber);

    int no_of_guesses,guess=0;
    no_of_guesses=0;

    while(guess!=randomNumber){
        printf("Try guessing the number i choose.\n Hint : its between 1 to 100  \n");
        scanf("%d",&guess);
        no_of_guesses++;

        if(guess==randomNumber){
            printf("You guessed right in %d guesses\n",no_of_guesses);
            }
        }
        else if(guess<randomNumber){
            printf("try any big number than %d\n",guess);
        }
        else if(guess>randomNumber){
            printf("try any smaller number than %d\n",guess);
        }
    }



    return 0;
}
