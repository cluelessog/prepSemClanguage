#include<stdio.h>
int main(int argc,char *argv[])  //argc is argument count and char *argv[] is array of character
    {
    
    printf("command-line arguments:\n");
    for(int i = 0 ; i <= argc ; i++)
    {
    printf("%s ",argv[i]);
    
    }
    printf("Length %d\n",argc);
    printf("\n");
    


    }

