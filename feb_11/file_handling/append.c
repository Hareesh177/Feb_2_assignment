#include<stdio.h>

void main(){
    char x;
    FILE *fp = fopen("file.txt","a");
    if(fp==NULL){
        printf("File doesnot exist \n");
    }
    else{
        x=fgetc(fp);
        while(x!=EOF){
            printf("%c",x);
            x=fgetc(fp);
        }
    }
    fclose(fp);
}
