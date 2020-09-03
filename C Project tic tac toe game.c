/*
 =================================================================================================
 Name        : CS Project.c
 Authors     : Deepak Pathania (193010), Aviral Mahajan (193014), Devesh Rana (193017) 
 Date        : 14/07/2020
 Description : Tic-Tac-Toe game, a two-player game. If one of the players gets three same 
               symbols in a row - horizontally, vertically or diagonally - on a 3 X 3 grid 
               then the player wins.
 =================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int checkwin();
void board();

int main()
{
    int player = 1, i, choice;
	char putvalue;
   
    do
    {
        board();
        player = (player % 2) ? 1 : 2;

        printf("Player %d, enter a number:  ", player);
        scanf("%d", &choice);

        putvalue = (player == 1) ? 'O' : 'X';

        if (choice == 1 && square[1] == '1')
            square[1] = putvalue;
            
        else if (choice == 2 && square[2] == '2')
            square[2] = putvalue;
            
        else if (choice == 3 && square[3] == '3')
            square[3] = putvalue;
            
        else if (choice == 4 && square[4] == '4')
            square[4] = putvalue;
            
        else if (choice == 5 && square[5] == '5')
            square[5] = putvalue;
            
        else if (choice == 6 && square[6] == '6')
            square[6] = putvalue;
            
        else if (choice == 7 && square[7] == '7')
            square[7] = putvalue;
            
        else if (choice == 8 && square[8] == '8')
            square[8] = putvalue;
            
        else if (choice == 9 && square[9] == '9')
            square[9] = putvalue;
            
        else
        {
            printf("Invalid move ");
	        player--;
	        getch();
	        
        }
        
        i = checkwin();
		player++;
		
    }
	while (i ==  - 1);
    
    board();
    
    if (i == 1)
        printf("==>\aPlayer %d win ", --player);
        
    else
        printf("==>\aGame draw");

    getch();

    return 0;
}

/*
    Function to return game status 
    1 for game is over with result
   -1 for game is in progress
    O game is over and no result
*/

int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3]) 
        return 1;
        
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
        
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
        
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
        
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
        
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
        
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
        
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;
        
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
        square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] 
        != '7' && square[8] != '8' && square[9] != '9')
        
    return 0;
    
    else
        return  - 1;
}

// Function to draw board of Tic Tac Toe with players mark
 
void board()
{
    system("cls");
    
    printf("\n\n\t                                          Tic Tac Toe\n\n");

    printf("                                 Player 1 (O)         V/S          Player 2 (X)\n\n\n");

    printf("                                                   |     |     \n");
    printf("                                                %c  |  %c  |  %c \n", square[1], square[2], square[3]);   

    printf("                                              _____|_____|_____\n");
    printf("                                                   |     |     \n");

    printf("                                                %c  |  %c  |  %c \n", square[4], square[5], square[6]);  

    printf("                                              _____|_____|_____\n");
    printf("                                                   |     |     \n");

    printf("                                                %c  |  %c  |  %c \n", square[7], square[8], square[9]);   

    printf("                                                   |     |     \n\n");
}


