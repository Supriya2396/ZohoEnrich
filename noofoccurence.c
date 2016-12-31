#include<stdio.h>
void main()
{
 int i,n,b,a[20],count=0;
 printf("Enter the size of array\n");
 scanf("%d",&n);
 printf("Enter the elements:\n");
 for(i=0;i<n;i++)
 {
    scanf("%d",&a[20]);
 }
 printf("Enter the element to be found\n");
 scanf("%d",&b);
 for(i=0;i<n;i++)
 {
      if(b==a[i])
      count++;
  }
  printf("No of occurence is:\n",count);
  }
 
 
