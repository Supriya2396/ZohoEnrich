#include <stdio.h>

int main(void) {
    int a[10],i,j,n,s,b[10];
    printf("Enter the no of elements");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter any number");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if((a[i]%s)==0)
        b[j]=a[i];
        j++;
    }
    for(i=0;i<j;i++)
    {
        printf("%d",&b[i]);
    }
    
	// your code goes here
	return 0;
}
