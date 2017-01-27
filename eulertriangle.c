#include<stdio.h>
int main()
{
    int m,n,i,j,a[i][j];
    printf("Enter the number of rows and columns");
    scanf("%d %d",&m,&n);
    for(i=1;i<n+1;i++)
    {
        for(j=0;j<m;j++)
        {
            if(j>=i)
            {
                a[i][j]='\0';
            }
            else
            {
                a[i][j]=((i-j)*a[i-1][j-1])+((j)*a[i-1][j]);
            }
         }
    }
    for(i=1;i<n+1;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
            printf("\n");
}          
    
