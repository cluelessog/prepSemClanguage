#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
    {
    int start,stop,step;
    start = atoi(argv[1]);
    stop = atoi(argv[2]);
    step = atoi(argv[3]);
    for(int i = start; i <= stop; i = i + step)
    {
    printf("%d ",i);
    }
    }
