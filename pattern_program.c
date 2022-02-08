#include<stdio.h>

int main()
{
    int i=1,j=1,rows,columns,n,dec=0;
    printf("Enter number of rows\n");
    scanf("%d",&rows);
    columns = (2*rows);
    if(columns%2==0)
         n = columns/2;
    while(i<=rows)
    {
        for(j=1;j<=columns;j++)
        {
            if(j==n-dec)
              printf("/");
            else if(j==n+dec+1)
              printf("\\");
            else if(dec == rows-1 && rows==i)
            {
                if(j==1)
                    printf("/");
                else if(j==columns)
                    printf("\\");
                else
                    printf("_");
            }
            else
                printf(" ");
        }
        printf("\n");
        dec++;
        i++;
    }
    return 0;
}
