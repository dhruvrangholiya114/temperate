#include <stdio.h>
main()
{
    int n, sum=0, FD, LD;
    printf("Enter number: ");
    scanf("%d", &n);
    
    LD = n % 10;
    
    while(n >= 10)
    {
        n = n / 10;
    }
    FD = n;
    
    sum = FD + LD;
    printf("Sum is %d", sum);
    
}
