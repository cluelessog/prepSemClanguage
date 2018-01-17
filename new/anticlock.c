#include<stdio.h>

int main(){
    char ch[10];
    for(int i = 0; i < 10; i++){
    
        scanf("%s",&ch[i]);
    
    }
    char temp = ch[9];
    for(int i = 9; i > 0; i--){
    
        ch[i] = ch[i-1];
    
    }
    ch[0] = temp;
    for(int i = 0 ; i < 10 ; i++){
    
        printf("%c",ch[i]);
    
    }

}
