#include <stdio.h>

#define SIZE (int)(sizeof(board[0])/sizeof(board[0][0]))

int
main ()
{
    char board[8][8] = { 0 };
    int i, j;

    for(int row=0; row<SIZE-2; row++) {
      for (i = 0, j = SIZE-1; i < (SIZE / 2) && j > (SIZE / 2)-1; i++, j--) {
            if (i == 0){
    	        board[0][i] = 'r';
    	        board[0][j] = 'r';
    	        board[7][i] = 'R';
    	        board[7][j] = 'R';
            } else if (i == 1){
    	        board[0][i] = 'n';
    	        board[0][j] = 'n';
    	        board[7][i] = 'N';
    	        board[7][j] = 'N';
            } else if (i == 2){
    	        board[0][i] = 'b';
    	        board[0][j] = 'b';
    	        board[7][i] = 'B';
    	        board[7][j] = 'B';
            } else {
    	        board[0][3] = 'q';
    	        board[0][4] = 'k';
    	        board[7][i] = 'Q';
    	        board[7][j] = 'K';
            }
            board[1][i] = 'p';
            board[6][i] = 'P';
            board[1][j] = 'p';
            board[6][j] = 'P';
            
            if(row>1 && row<SIZE-2 && row % 2){
                if(i%2){
                    board[row][i] = ' ';
                    board[row][j] = '+';
                } else {
                    board[row][i] = '+';   
                    board[row][j] = ' ';
                }
            } else {
                if(i%2) {
                    board[row][i] = '+';
                    board[row][j] = ' ';
                } else {
                    board[row][i] = ' ';
                    board[row][j] = '+';
                }
            }
            
        }
    }

    for(i=0; i<SIZE; i++){
        for(j=0; j<SIZE; j++){
            printf(" %c ", board[i][j]);
        }
        printf("\n");
    }
    
  return 0;
}
