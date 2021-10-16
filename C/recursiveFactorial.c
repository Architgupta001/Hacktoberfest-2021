#include<stdio.h>

// Note: For negative number, factorial does not exist

// factorial method
long factorial(int n){
	
	// base case
	if(n == 0 || n == 1)
	return n;
	
	// recursive calculation
	return n*factorial(n-1);
}

// main method
int main(){

	int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d! = %ld\n", n, factorial(n));
	return 0;
}
