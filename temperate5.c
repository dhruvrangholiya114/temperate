#include<stdio.h>
  
main()

{
	int n,r,sum=0,temp;    
     printf("enter the number=");    
       scanf("%d",&n);    
    temp=n;    
    while(n!=0)    
    {    
          
      sum=(sum*10)+n%10;    
      n=n/10; 
    }
      if(temp==sum)    
       printf(" number is palindrome ");    
      else    
       printf("number is not palindrome");
	
}
  
