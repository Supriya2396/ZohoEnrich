#include <stdio.h>

int main(void) {
    int a[10],i,n,m;
    printf("Enter the no of elements");
    scanf("%d",&n);
    printf("\nEnter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter any no");
    scanf("%d",&m);
    {
        for(i=0;i<n;i++)
        {
            if((i+m)>=n)
               a[i]=0;
            else
                a[i]=a[i+m];
            
        }
    }
        for(i=0;i<n;i++)
        {
            printf("\n%d",a[i]);
        }
    
	// your code goes here
	return 0;
}
