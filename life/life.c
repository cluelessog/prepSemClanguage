#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "util.h"


int main(int argc, char *argv[])
    {
    FILE *in;
    char token[512];
    int rows=0,column=0,**board,i,j,noGens,countGen=0;
    char **letters, **newGen;
    in = fopen(argv[1],"r");
    fscanf(in,"%s",token);
    column=strlen(token);
    while(!feof(in))
        {
        rows++;
        fscanf(in,"%s",token);
        //if(feof(in)) break;
        }
    fclose(in);
    printf("Column is %d\n",column);
    printf("Rows is %d\n",rows);
    newGen = createBoard(column,rows);
    initializeBoard(newGen,column,rows,argv[1]);
    //printf("%d\n",**board);
    noGens = atoi(argv[2]);
    printf("File name is : %s\n and no of generations is : %d\n",argv[1],noGens);
   // nextGenBoard = copyGen(board,column,rows);

    while(noGens > 0)    {
        letters = copyGen(newGen,column,rows);
		board = reset(column,rows);
        printf("Generation %d\n",countGen);
        printBoard(newGen,column,rows);
        neighbourVal(board,letters,column,rows); // board has numbers
        printf("----------letters------------------\n");
        printBoard(letters,column,rows);
        printf("----------board------------------\n");
        printValues(board,column,rows);
        deadCell(newGen,letters,board,column,rows);  
        printf("----------newGen------------------\n");
        printBoard(newGen,column,rows);
        liveCell(newGen,letters,board,column,rows);
        newLiveCell(newGen,letters,board,column,rows);
        noGens--; countGen++;
		freeMatrix(letters,column,rows);
		freeInMatrix(board,column,rows);
        }

    printf("Generation %d\n",countGen);
    printBoard(newGen,column,rows);
    
    freeMatrix(newGen,column,rows);
//	freeInMatrix(board,column,rows);
//    free(board);
    return 0;
    }
