#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int guess,random;
    int no_of_guess = 0;
    srand(time(0));
    char input[100];

    random= rand() % 100 +1;
//random=50;

    printf("Welcome to the guesing game");

    do{
        printf("\nPlease enter a number between 1-100: ");
        fgets(input, sizeof(input), stdin); 

       
        if (sscanf(input, "%d", &guess) != 1) {
            printf("Invalid input. Please enter an integer.\n");
            continue;  // Skip this iteration
        }

        if (guess < 1 || guess > 100) {
            printf("Number out of range! Enter between 1 and 100.\n");
            continue;
        }
        
        no_of_guess++ ;

        if(guess<random){
            printf("\n Please enter a larger no ");
        }
        else if(guess>random){
            printf("\n Please enter a smaller no ");
        }
        else 
           printf("\n\n\nCongratulations \nyou coorectly guessed the no.");


    }while(guess!=random);
      printf("\nyou took %d tries",no_of_guess);

printf("\n BYE BYE, THANKS FOR PLAYING \n");
printf("\n MADE BY: DHRUV GUPTA \n \n");




    return 0;
}
