#include <stdio.h>

int compare(FILE *fp1, FILE *fp2, int *line, int *col);

void main()
{
    FILE *fp1=fopen("file1.txt","r");
    FILE *fp2=fopen("file2.txt","r");
    char ch1,ch2;
    int diff;
    int line, col;
    if (fp1 == NULL || fp2 == NULL)
    {
       printf("File doesnot exist to compare\n");
    }
    diff = compare(fp1, fp2, &line, &col);
    if (diff == 0)
    {
        printf("\nBoth files are equal.");
    }
    else 
    {
        printf("\nFiles are not equal.\n");
        printf("Line: %d, col: %d\n", line, col);
    }
    fclose(fp1);
    fclose(fp2);
}
int compare(FILE *fp1, FILE *fp2, int *line, int *col)
{
    char ch1, ch2;
    *line = 1;
    *col  = 1;
    do
    {
        ch1 = fgetc(fp1);
        ch2 = fgetc(fp2);
        if (ch1 == '\n')
        {
            *line += 1;
            *col = 0;
        }
        if (ch1 != ch2)
            return -1;
        *col  += 1;
    } while (ch1 != EOF && ch2 != EOF);
    if (ch1 == EOF && ch2 == EOF)
        return 0;
    else
        return -1;
}

