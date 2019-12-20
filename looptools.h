/*
    initBoard accepts a 2d array of size (Xsize,Ysize)
    and fills it up with accending numbers, for example:
    Xsize = 3
    Ysize = 3
    1 2 3
    4 5 6
    7 8 9
*/
void initBoard(int (*bp)[Xsize][Ysize]){
    for (int col = 0; col < Xsize; col++){
        for (int row = 0; row < Ysize; row++){
            int num = row + 1 + col * Xsize;
            (*bp)[col][row] = num;
        }
    }
}

/*
    printBoard prints out the loopover
    board and also tries to format it
*/
void printBoard(int (*bp)[Xsize][Ysize]){
    int maxLength = log10(Xsize*Ysize)+1;
    int lineLength = (maxLength+1)*Xsize-1;
    for (int col = 0; col < Xsize; col++){
        printf("|");
	for (int i = 0; i < lineLength; i++){
		printf("-");
	}
	printf("|\n");
	for (int row = 0; row < Ysize; row++){
		int cell = (*bp)[col][row];
		int deltaLen = maxLength - (floor(log10(abs(cell)))+1);
		printf("|%d", cell);
		for (int i = 0; i < deltaLen; i++){
			printf(" ");
		}
        }
	printf("|\n");
    }
}


/*
	moveBoard is able to preform a loopover move
	by getting the pointer to a board (wich is a 2d array of size Xsize, Ysize)
	it also needs a direction to move into (l, r, u or d)
	and a integer representing the row/col number to move
*/
void moveBoard(int (*bp)[Xsize][Ysize], char direction, int row){
	printf("doing move %c%d\n", direction, row);
	if(direction == 'r'){
		//horizontal movement
		int tmp = (*bp)[row][Xsize-1];		
		for (int i = Xsize-1; i >= 1; i--){
			(*bp)[row][i] = (*bp)[row][i-1];
		}
		(*bp)[row][0] = tmp;
		
	}else if(direction == 'u' || direction == 'd'){
		//vertical movement
	}
}
