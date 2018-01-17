#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[]){
float threshold;
threshold = atof(argv[1]);
char ch[100];
char str[20];
FILE *fp = fopen(argv[2],"r");
if(fp){

        if(feof(fp)){
           exit(1);
           }
    while(fgets(ch,sizeof(ch),fp)){
    int chlen = strlen(ch);
    if(chlen > 1 && ch[chlen-1] == '\n')
    {
    ch[chlen-1] = '\0';
    }
    if(strcmp(ch,"%%")){
    fputs(ch,stdout);
    }else{
    break;
    }
    }

    while(fgets(ch,sizeof(ch),fp))
    {
     float sampleVal = atof(ch);
     if(abs(sampleVal)>threshold){
     fprintf(stdout,"%s",ch);
     }
    }
     
  //  while(!feof(fp)){
  //  fscanf(fp,"%s\n",str);
  //  float sampleVal = atof(str);
  //  if(abs(sampleVal)>threshold){
  //  fprintf(stdout,"%s\n",str);
  //  }

   // }
    }

    fclose(fp);
    return 1;
    }
