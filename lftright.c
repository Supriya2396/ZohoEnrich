#include <stdio.h>

int main(void) {
    int a[10],i,n,ch,m;
    printf("\nEnter the no of elements");
    scanf("%d",&n);
    printf("\nEnter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        for(i=0;i<n;i++)
        {
            if((i+m)>=n)
            a[i]=0;
            else
            a[i]=a[i+m];
            for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
       }
       break;
       case -1:
       for(i=0;i<n;i++)
       {
           if(i>=m)
           a[i]=a[i-m];
           else
           a[i]=0;
       }
       for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
       break;
       default:
       printf("Invalid");
    }
    
	// your code goes here
	return 0;
}
