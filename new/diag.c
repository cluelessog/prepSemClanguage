#include<stdio.h>
int main(){

    for(int i = 0 ; i < 20 ; i++){
    
        for(int j = 0 ; j < 20 ; j++){
        
            if((i == j) || ((i+j) == 19)){
            
                printf("x");
            
            }else{
            
                printf(" ");
            
            }
        
        }

        printf("\n");

    }

}
