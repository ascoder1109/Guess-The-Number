#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number,guess,ng;
    srand(time(0));
    number=rand()%100+1; // Generates a random number between 1 and 100
  /*  printf("\nThe number is %d",number); */
    // Keep running the loop until the number is reached
    do{
        printf("\nGuess the number between 1 and 100:");
        scanf("%d",&guess);
        if(guess>number){
            printf("\nEnter a lower number!");

        }
        else if(guess<number){
            printf("\nEnter a higher number!");
        }
        else {
            printf("\nYou guessed in %d attempts",ng);
        }
        ng++;
    }while(guess!=number);
    return 0;
}

//Reference: https://www.youtube.com/watch?v=ZSPZob_1TOk