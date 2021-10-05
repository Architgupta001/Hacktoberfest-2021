#include <stdio.h>

//this function calculates the power of a number
unsigned long long power (unsigned int baseNumber, unsigned int powerNumber){
    unsigned long long result;
    if (powerNumber == 0){
        result = 1;
    }else{
        result = baseNumber * power(baseNumber, powerNumber-1);
    }
    return result;
}

int main() {
    //initialize variables
    int baseNumber, powerNumber;
    unsigned long long resultNumber;
    
    //ask for user's input
    printf("Enter the base number (>=0): ");
    scanf("%d", &baseNumber);
    printf("Enter the power number (>=0): ");
    scanf("%d", &powerNumber);
    
    //calculate and display result
    resultNumber = power(baseNumber, powerNumber);
    printf("%d to the power of %d is %llu", baseNumber, powerNumber, resultNumber);
    
    return 0;
}
