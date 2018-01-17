#include<stdio.h>
int main(int argc, char *argv[]){

    FILE *fp = fopen(argv[1],"r");
    int row,column,i,j;
    char ch;
    fscanf(fp,"%d %d\n",&row,&column);
    char arr[row][column];

    while(!feof(fp))
    {
    fscanf(fp,"%d %d %c\n",&i,&j,&ch);
    arr[i][j] = ch;
    
 }
 for(int i = 0; i < row ; i++){
    for(int j = 0; j < column; j++){
    if(arr[i][j] == '@'){
        printf(" ");
    }else{
        printf("%c",arr[i][j]);
    }
}
printf("\n");
 }

}
