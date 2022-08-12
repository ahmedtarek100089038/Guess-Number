#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
	int i,  number_to_guess = rand()%100 + 1;  

    printf("\n\t\t*********** Guess Number ****************\n");

    while(i!=0) 
    {
        printf("\nPlease enter your guess number: ");
        scanf("%d",&i); 

        if (i == number_to_guess)   
        {
            printf("\nCongratulations! You've guessed it right!");
            break;
        }
        else if (i > number_to_guess)   
            printf("\nOoop! You have guessed it wrong! Please enter a SMALL number\n");
        else    
            printf("\nOoop! You have guessed it wrong! Please enter a BIG number!\n");
    }

    return 0;
}

