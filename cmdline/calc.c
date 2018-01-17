#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
    {
   float result;
   char operand;
   operand = *argv[2];  //or argv[2][0]  direct string comparison not allowed
   float firstArg = atof(argv[1]);
   float secondArg = atof(argv[3]);
    if(operand == '+')
    {
    result = firstArg + secondArg;
    }else if(operand == '-')  // if(argv[2] == 'hello') not allowed instead use strcmp(argv[2],"hello");
    {
    result = firstArg - secondArg;
    }else if(operand == '*')
    {
    result = firstArg * secondArg;
    }else
    {
    result = firstArg / secondArg;
    }
    printf("%3.1f",result);

    }
