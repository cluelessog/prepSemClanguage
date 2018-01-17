#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
float threshold;
threshold = atof(argv[1]);
int ch;
char str[20];
FILE *fp = fopen(argv[2],"r");
FILE *fp2 = fopen(argv[3],"w");
if(fp){
if(feof(fp))
    exit(1);
while((ch = fgetc(fp))!='%'){
fputc(ch,fp2);
}
fputc(ch,fp2);
ch = fgetc(fp);
fputc(ch,fp2);
ch = fgetc(fp);
fputc('\n',fp2);
ch = fgetc(fp);
while(!feof(fp)){
fscanf(fp,"%s\n",str);
float sampleVal = atof(str);
if(abs(sampleVal)>threshold){
fprintf(fp2,"%s\n",str);
}

}
}

fclose(fp);
fclose(fp2);
return 1;
}
