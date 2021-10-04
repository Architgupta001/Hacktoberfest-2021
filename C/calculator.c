#include<stdio.h>
#include<stdlib.h>
int main()
{
    int opt;
    float result,a,b;
    printf("enter the numbers\n");
    scanf("%f%f",&a,&b);
    printf("enter of option\n 1. add 2.subtarct 3. multiply 4.divide 5.modulus\n");
    scanf("%d",&opt);
 if(opt>5)
 {
 printf("invalid option\n ");
 exit (0);
 }
 else
 {
switch(opt)
{
case 1:
result= a+b;
printf("answer is %f",result);
break;
case 2:
result= a-b;
printf("answer is %f",result);
break;
case 3:
result= a*b;
printf("answer is %f",result);
break;
case 4:
result= a/b;
printf("answer is %f",result);
break;
case 5:
result=(int)(a)%(int)(b);
printf("answer is %f",result);
break;
}
 }
 return 0;
}