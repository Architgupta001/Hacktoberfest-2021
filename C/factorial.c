/*C program to find factorial of a number.*/
 
#include <stdio.h>
 
int main()
{
    int num,i;
    long int fact;
  
    printf("Enter an integer number: ");
    scanf("%d",&num);
  
    /*product of numbers from num to 1*/
    fact=1;
    for(i=num; i>=1; i--)
        fact=fact*i;
         
    printf("\nFactorial of %d is = %ld",num,fact);
      
    return 0;
}
