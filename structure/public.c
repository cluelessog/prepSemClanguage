#include<stdio.h>
#include "node.h"
#include<stdlib.h>
#include<string.h>
int main(){

    //creating the objects
    printf("creating the parent objects\n\n");
    node *integerTest = newIntegerNode(5);
    node *realTest = newRealNode(3.1459);
    node *stringTest = newStringNode("Hello World");

    printf("\n creating the child objects\n\n");
    integerTest->child = newIntegerNode(100);
    realTest->child = newRealNode(4535.32423);
    stringTest->child = newStringNode("Hello I am a child object of string");

    printf("\ncreating linked list\n\n");
    integerTest->next = realTest;
    realTest->next = stringTest;
    stringTest->next = integerTest;

    printf("\nTesting the display function on everytype\n\n");
    display(integerTest);
    display(realTest);
    display(stringTest);

    printf("\nLet's free up the memory\n\n");
    destructor(integerTest);
    destructor(realTest);
    destructor(stringTest);
}
