#include<stdio.h>
#include<stdlib.h>

char *arr[] = {"multiplexer","demultiplexer","encoding","decoding","dma","rma","updating-cache","recent-memory-search"};

void printMenu(){


int j = 0;

printf("Select menu\n");

for(int i = 0x01; i <= 0x80; i = i << 1)

{

printf("0x%x: %s\n",i,arr[j]);

j = j + 1;

}

}


int main(int argc, char *argv[])
    {
    int binarray[8];
    int forMenu = atoi(argv[1]);
    if(forMenu == 0)
    {
    printMenu();
    }else{
    int rem,j=0;
    while(forMenu > 0){
    rem = forMenu%2;
    binarray[j] = rem;
    forMenu = forMenu/2;
    j++;
    }

      for(int i = 0; i < 8 ; i++){
      if(binarray[i] == 1){
      printf("%s\n",arr[i]);
      }
      }

        }
    }     
