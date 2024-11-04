// Number guessing game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0)); // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int guessed, no_of_guesses = 0;
    
    do{
    printf("Guess the number: ");
    scanf("%d",&guessed);
    if(guessed>randomNumber){
        printf("Lower number please\n");
    }else if(guessed<randomNumber){
        printf("Higher number please\n");
    }else{
        printf("Congratulation!\n");
    }
    no_of_guesses++;

    }while(guessed != randomNumber);

    printf("You guessed the number in %d gueses\n",no_of_guesses);
    return 0;
}