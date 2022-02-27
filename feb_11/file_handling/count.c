#include <stdio.h>

int main()
{
    int ch,characters=0,words=0,lines=0;
	FILE *fp = fopen("cou.txt","r");

    if(fp==NULL){
        printf("File doesnot exist \n");
    }
    while ((ch = fgetc(fp)) != EOF)
    {
        characters++;
        if (ch == '\n' || ch == '\0')
            lines++;
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            words++;
    }

    if (characters > 0)
    {
        words++;
        lines++;
    }
    printf("Total characters = %d\n", characters);
    printf("Total words      = %d\n", words);
    printf("Total lines      = %d\n", lines);
    fclose(fp);
}
