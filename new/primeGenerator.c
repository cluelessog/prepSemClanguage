#include<stdio.h>
#include<math.h>
int main(){

    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("%d ",2);
    for(int i = 3; i <= n ; i = i+2){
    
        int flag = 0;
        for(int k = 3; k <= sqrt(i); k = k+2 ){
        
            if( (i%k) == 0 ){
                    
                    flag = 1;
                    break;
            
                 }
        
             }
            if(flag == 0){
                printf("%d ",i);
            }
        }
    
    }



