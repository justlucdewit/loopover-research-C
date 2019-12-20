#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define Xsize 5
#define Ysize 5

#include "looptools.h"

int main(){
    printf("calculating for %d by %d\n", Xsize, Ysize);
     
    //initiate board
    int board[Xsize][Ysize];
    initBoard(&board);
    printBoard(&board);
    
    //execute moves on board
    moveBoard(&board, 'r', 0);
    moveBoard(&board, 'r', 1);
    moveBoard(&board, 'r', 2);
    moveBoard(&board, 'r', 3);
    moveBoard(&board, 'r', 4);
    printBoard(&board);
    return 0;
}
