#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main (){
    int random,guess;
    int no_of_guesses=0;

    srand(time(NULL));

    printf("welcome to the  world of guessing  number \n");
    random = rand() % 100 + 1; //generating random number between 1 to 100

    do{
        printf("\nPlease enter your guess number between 1 to 100 : ");
        scanf("%d",&guess);
        no_of_guesses++;

        if(guess < random){
            printf("guess a larger number.\n");
        }else if(guess > random){
            printf("guess a smaller number.\n");
        }else{
            printf("congratulations !!!you have successfully guessed the  numberin %d attempts",no_of_guesses);
        }


    }while (guess!=random);


printf("\n bye bye,thanks for playing .");
printf("\n developed by: harunCoding");
return 0;
}