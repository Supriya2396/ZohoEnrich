#include<stdio.h>
int main()
{
    int A[10],n,max=0,max2=0;
    printf("Enter the no of elements");
    scanf("%d",&n);
    printf("\n Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {
        if(max<A[i])
        {
            max2=max;
            max=A[i];
        }
        else if(max2<A[i])
        {
            
            max2=A[i];
        }
    }
    printf("%d\n",max2);
    return 0;
}
   
    
