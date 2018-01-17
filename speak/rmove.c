#include<stdio.h>
#include<stdlib.h>
#include "speak.h"
int main(int argc,char *argv[]){
    float delX,delY;
    delX = atof(argv[1]);
    delY = atof(argv[2]);
    float epsilon = 10;
    while(1){
    if(delX > -10 && delX < 10 && delY > -10 && delY < 10){
    break;
    }
    printf("%f %f\n",delX,delY);
    if(delX > 0 && delY > 0){

        speak("right.txt");
        delX = delX - epsilon;
        printf("%f %f\n",delX,delY);
        speak("left.txt");
        delY = delY - epsilon;
        printf("%f %f\n",delX,delY);

    }
  if(delX > 0 && delY < 0){
        speak("left.txt");
        delX = delX - epsilon;
        printf("%f %f\n",delX,delY);
        speak("left.txt");
        delY = delY + epsilon;
        printf("%f %f\n",delX,delY);

    }
  if(delX < 0 && delY < 0){
        speak("right.txt");
        delX = delX + epsilon;
        printf("%f %f\n",delX,delY);
        speak("left.txt");
        delY = delY + epsilon;
        printf("%f %f\n",delX,delY);

    }
  if(delX < 0 && delY > 0){
        speak("left.txt");
        delX = delX + epsilon;
        printf("%f %f\n",delX,delY);
        speak("right.txt");
        delY = delY - epsilon;
        printf("%f %f\n",delX,delY);

    }
  if(delX > 0 && delY == 0){
       speak("straight.txt");
       delX = delX - epsilon;
       printf("%f %f\n",delX,delY);

    }
  if(delX == 0 && delY < 0){
        speak("straight.txt");
        delY = delY + epsilon;
        printf("%f %f\n",delX,delY);

    }
  if(delX < 0 && delY == 0){
       speak("straight.txt");
        delX = delX + epsilon;
        printf("%f %f\n",delX,delY);

    }
  if(delX == 0 && delY > 0){
        speak("straight.txt");
        delY = delY - epsilon;
        printf("%f %f\n",delX,delY);

    }

 }

}
