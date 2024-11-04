#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    int player, computer = rand() % 3;
    /*
        0 --> Snake
        1 --> Water
        2 --> Gun
    */
   printf("0 for Snake\n1 for Water\n2 for Gun\n");
   scanf("%d", &player);
   printf("Computer is = %d\n", computer);
   

   if(player == 0 && computer == 0){
    printf("It's a draw!\n");
   }
   else if(player == 0 && computer == 1){
    printf("Player has won!\n");
   }
   else if(player == 0 && computer == 2){
    printf("Computer has won!\n");
   }
   else if(player == 1 && computer == 0){
    printf("Computer has won!\n");
   }
   else if(player == 1 && computer == 1){
    printf("It's a draw!\n");
   }
   else if(player == 1 && computer == 2){
    printf("Player has won!\n");
   }
   else if(player == 2 && computer == 0){
    printf("Player has won!\n");
   }
   else if(player == 2 && computer == 1){
    printf("Computer has won!\n");
   }
   else if(player == 2 && computer == 2){
    printf("It's a draw!\n");
   }
   else{
    printf("Something went wrong\n");
    
   }
    return 0;
}