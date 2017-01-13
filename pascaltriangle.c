#include<stdio.h>
int main()
{
    int a[10][10],i,j,n;
    scanf("%d",&n);
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            if((i=j)||(j==0))
            {
                a[i][j]=1;
            }
            else if(i>j)
            {
                a[i][j]=a[i-1][j-1]+a[i-1][j];
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
