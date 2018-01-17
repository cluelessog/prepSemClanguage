// util fuction definitions
#include<stdio.h>
#include<stdlib.h>
char **createBoard(int column,int rows){
    char **creator = (char**) malloc(sizeof(char *) * rows);
    for(int i = 0; i < rows; i++)
        {
        creator[i] = (char*) malloc(sizeof(char)*column);
        }
    return creator;
}
void initializeBoard(char **fptr,int column,int rows,char *file){
        
        FILE *fp = fopen(file,"r");
        for(int i = 0; i < rows ; i++)
            {
                fscanf(fp,"%s\n",fptr[i]);
            }
            fclose(fp);
     

}

void printBoard(char **fptr,int column,int rows){
    for(int i = 0; i < rows; i++){
        for(int j = 0 ; j < column ; j++){
            printf("%c",fptr[i][j]);
        }
        printf("\n");
    } 

}
void freeMatrix(char **fptr,int column,int rows){
    for(int i = 0; i < rows; i++){
     char *currentptr =   fptr[i];
     free(currentptr);
    }

}
int **reset(int column,int rows){
    int **numArray = (int**) malloc(sizeof(int *) * rows);
    for(int i = 0; i < rows; i++)
    {
    numArray[i] = (int*) malloc(sizeof(int)*column);
    }
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < column; j++){
            numArray[i][j] = 0;
        }
    }
    return numArray;
}
void freeInMatrix(int **fptr,int column, int rows){
    for(int i = 0 ; i < rows; i++){
        int *currptr = fptr[i];
        free(currptr);
    }
}
void printValues(int **fptr,int column,int rows){
    for(int i = 0; i < rows ; i++){
        for(int j = 0; j < column; j++){
            printf("%d",fptr[i][j]);
        }
        printf("\n");
    }
}
char **copyGen(char **fptr,int column,int rows){
    char **cpy = (char**) malloc(sizeof(char *) * rows);
    for(int i = 0; i < rows; i++){
        cpy[i] = (char*) malloc(sizeof(char)*column);
    }
    for(int i = 0 ; i < rows; i++){
        for(int j = 0 ; j <  column; j++){
                if(fptr[i][j] != '.'){
            cpy[i][j] = 'x';
            }else{
            
            cpy[i][j] = fptr[i][j];
            }
        }
    }
    return cpy;
}
void neighbourVal(int **inptr,char **chptr,int column,int rows){
    for(int i = 0; i < rows ; i++){
        for(int j = 0 ; j < column; j++){
                int countX = 0;
                int rangei,rangej,endi,endj;
            if(i < 1){
                rangei = 0;
                }else{
                rangei = i - 1;
                }
            if( i+1 > rows-1){
                endi = rows-1; 
            }else{
                endi = i+1;
            }
            for(; rangei <= endi; rangei++){
                    if(j < 1){
                        rangej = 0;
                    }else{
                        rangej = j - 1;
                    }
                    if(j+1 > column-1){
                        endj = column-1;
                    }else{
                        endj = j+1;
                    }
                for(; rangej <= endj; rangej++){
                    if(chptr[rangei][rangej] == 'x'){
                        countX++;
                    }
                
                }
            }
           
            if(chptr[i][j] == 'x'){
                inptr[i][j] = countX-1;
            }else if(chptr[i][j] == '.'){
                inptr[i][j] = countX;
            }
           }
        }
    }

void deadCell(char **iniarr,char **letarr,int **brd,int column, int rows){

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < column; j++){
            if(brd[i][j] < 2 || brd[i][j] > 3){
                if(letarr[i][j] == 'x'){
                    iniarr[i][j] = '.';
                }
            
            }
        }
    }


}

void liveCell(char **iniarr,char **letarr,int **brd,int column,int rows){

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < column ; j++){
            if(brd[i][j] == 2 || brd[i][j] == 3){
                if(letarr[i][j] == 'x'){
                    iniarr[i][j]--;
                }
            }
        }
    }
}

void newLiveCell(char **iniarr,char **letarr,int **brd,int column,int rows){
    for(int i = 0; i <  rows; i++){
        for(int j = 0 ; j < column; j++){
            if(brd[i][j] == 3){
                if(letarr[i][j] == '.'){
                    iniarr[i][j] = 'x';
                    letarr[i][j] = 'x';
                }
            }
        }
    }

}
