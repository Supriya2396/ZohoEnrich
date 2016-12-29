#include<stdio.h>  
#include<conio.h> 
void main() 
{  
  long int num,temp,rem,rev=0;   
  clrscr();   
  printf("\nEnter a Number:");   
  scanf("%d",&num);   
  temp=num;   
  if(num>0)   
  {     
    while(num>0)     
    {       
      rem=num%10;       
      rev=(rev*10)+rem;       
      num=num/10;     
    }   
  }   
  else   
  {     
    printf("\nEnter a positive number");   
  }   
  if(temp==rev)   
  {     
    printf("\nThe given number is a pallindrome");   
  }   
  else   
  {     
    printf("\nThe given number is not a pallindrome");   
  } 
} 
