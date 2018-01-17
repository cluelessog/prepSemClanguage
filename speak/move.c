#include<stdio.h>
#include<math.h>
#include "speak.h"
#define pi 3.14159
int main(int argc,char *argv[]){
    FILE *fp = fopen(argv[1],"r");
    float delX,delY,angle;
    int degree;
    char *direction;
    while(!feof(fp)){
    fscanf(fp,"%f %f\n",&delX,&delY);
    angle = atan2(delY,delX)*(180/pi);
    degree = floor(angle);
    if(degree > -180 && degree < -90){
        direction = "right.txt";
    }else if(degree > -90 && degree < 0){
        direction = "left.txt";
    }else if(degree > 0 && degree < 90){
        direction = "right.txt";
    }else if(degree > 90 && degree < 180){
        direction = "left.txt";
    }else if(degree == 90){
        direction = "straight.txt";
    }
    speak(direction);

}
}
