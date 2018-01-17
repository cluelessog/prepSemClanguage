#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
    {
    int start,stop,step;
    start = atoi(argv[1]);
    stop = atoi(argv[2]);
    step = atoi(argv[3]);
    int i = start;
    while(i <= stop)
    {
    printf("%d ",i);
    i = i + step;
    }

    }
