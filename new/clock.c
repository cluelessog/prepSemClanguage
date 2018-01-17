#include<stdio.h>
int main(){

    char arr[10] = {'a','b','c','d','e','f','g','h','i','j'};
    char temp = arr[0];
    for(int i = 0 ; i < 9 ; i++){
    
        arr[i] = arr[i+1];
    
    }
    arr[9] = temp;
    for(int i = 0; i < 10 ; i++){
    
        printf("%c ",arr[i]);

    }
}
