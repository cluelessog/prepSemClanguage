// function declarations
char **createBoard(int, int);
void printBoard(char **, int, int);
void printValues(int **, int, int);
void freeMatrix(char **, int, int);
void initializeBoard(char **, int , int , char *);
int **reset(int , int );
char **copyGen(char **, int , int );
void neighbourVal(int **,char **,int, int);
void deadCell(char **,char **, int **, int, int);
void liveCell(char **, char **, int **, int, int);
void newLiveCell(char **, char **, int **, int, int);
void freeInMatrix(int **, int, int);
