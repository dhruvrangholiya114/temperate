#include <stdio.h> 
 
main()  
{  
   int n,count=0;    
   printf("Enter a number: ");  
   scanf("%d",&n);  
   while(n!=0)  
   {  
       n=n/10;  
       count++;  
   }  
     
   printf("\nThe number of digits are %d",count);  
    
}  
