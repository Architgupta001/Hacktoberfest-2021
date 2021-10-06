#include <stdio.h>
  

// Function to calculate factorial

int factorial(int n){
    if (n == 0)
        return 1;  //  base case of function
  
    return n * factorial(n - 1);
}

int main(){
    int num = 5; // number whose factorial is to be found
  
    printf("Factorial of %d is %d", num, factorial(num)); // printing the factorial of number
  
    return 0;
}
