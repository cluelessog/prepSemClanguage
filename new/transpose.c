#include<stdio.h>
int main(){

    int temp,c[3][3];
    int cnt = 1;
    for(int i = 0; i < 3 ; i++){
    
        for(int j = 0 ; j < 3 ; j++){
            printf("Print %dth element: ",cnt);
            scanf("%d",&c[i][j]);
            cnt++;
        }
    
    }
    printf("Transpose matrix is : \n");
    for(int i = 0; i < 3 ; i++){
    
        for(int j = 0; j < 3 ; j++){
            if( (i!=j) && ( (i<2) && ((j<3) && (j>0) ) ) ){
            temp = c[i][j];
            c[i][j] = c[j][i];
            c[j][i] = temp;
            }
            printf("%d ",c[i][j]);
        }
        
        printf("\n");
    }

}
