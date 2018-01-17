#include<stdio.h>
int main(){

    char ch[10];
    for(int i = 0; i < 10; i++){
    
        scanf("%s",&ch[i]);
    
    }
    int n;
    int beg = 0;
    scanf("%d",&n);
    int source = 0,destination;
    char t0 = ch[0],t1;
    for(int i = 0 ; i < 10; i++){
        destination = source + n;
        if(destination > 9){
            destination = destination - 10;
        }
        t1 = ch[destination];
        ch[destination] = t0;
        t0 = t1;
        source = destination;
        
        if(source == beg){
            source++;
            beg = source;
            t0 = ch[beg];
        }
    }
    for(int i = 0; i < 10; i++){
    
        printf("%c",ch[i]);
    
    }

}
