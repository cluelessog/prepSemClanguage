#include<stdio.h>
int main(){

    char arr[11] = {'a','b','c','d','e','f','g','h','i','j','k'};
    char ch;
    int i=0;
    while(10-i>i){
    
        ch = arr[10-i];
        arr[10-i] = arr[i];
        arr[i] = ch;
        i++;
    
    }
    int j = 0;
    while(j<11){
        printf("%c ",arr[j]);
        j++;
    }


}
