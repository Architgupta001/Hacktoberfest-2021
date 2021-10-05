#include<stdio.h>
int main()
{
    int n,m,rev=0,digit;
    printf("Enter the number\n");
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        digit=n%10;
        n=n/10;
        rev=rev*10+digit;
    }
    printf("The reverse number is %d\n",rev);
    if(rev==m)
    printf("The number is palindrome\n");
    else
    printf("The number is not palindrome\n");
    return 0;
}