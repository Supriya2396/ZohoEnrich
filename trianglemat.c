#include<stdio.h>
int main()
    {
        int a[6][6],i,j,m,n;
        printf("Enter the number of rows and columns");
        scanf("%d %d",n,m);
        for(i=0;i<6;i++)
        {
            for(j=0;j<6;j++)
            {
                if((j==0)||(i=j))
                {
                    a[i][j]=1;
                }
                else if(i>j)
                {
                    a[i][j]=i+1;
                }
             }
         }
         for(i=0;i<6;i++)
         {
            for(j=0;j<6;j++)
            {
                printf("%d",a[i][j]);
             }
         }
    }
