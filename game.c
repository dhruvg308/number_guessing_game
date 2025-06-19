#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int guess,random;
    int no_of_guess = 0;
    srand(time(0));

    random= rand() % 100 +1;
//random=50;

    printf("Welcome to the guesing game");

    do{
        printf("\n Please enter a no. between 0-100 ");
        scanf("%d",&guess);
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
