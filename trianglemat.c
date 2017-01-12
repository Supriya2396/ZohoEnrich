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
                else if((i==5)&&(5<(i+j)<10))
                {
                    a[i][j]=6;
                }
                else if((i==4)&&(4<(i+j)<9))
                {
                    a[i][j]=5;
                }
                else if((i==3)&&(3<(i+j)<8))
                {
                    a[i][j]=4;
                }
                else if((i==2)&&((i+j)==3))
                {
                    a[i][j]=3;
                }
                else
                {
                    a[i][j]='\0';
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
