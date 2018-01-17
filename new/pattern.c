#include<stdio.h>
// 20 by 20 box
int main(){

    for(int i = 0 ; i < 20 ; i++){
    
        for(int j = 0 ; j < 20 ; j++){
        
            if((i==0) || (j == 0) || (i == 19) || (j == 19)){
            
                printf("*");

            }else{
            
                printf(" ");
            
            }
        
        }
        printf("\n");
    
    }

}
