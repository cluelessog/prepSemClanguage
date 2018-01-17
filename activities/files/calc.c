#include<stdio.h>
int main(int argc, char **argv){
    FILE *fp = fopen(argv[1], "r");
    int first,second;
    char op;
    while(!feof(fp))
    {
    fscanf(fp,"%d %c %d\n",&first,&op,&second);
    int result;

    if(op == '+')
    {
    result = first + second;
    }else if(op == '-'){
    result = first - second;
    }else if(op == '/'){
    result = first / second;
    }else{
    result = first * second;
    }
    printf("%d\n",result);

}
fclose(fp);
return 0;
}
