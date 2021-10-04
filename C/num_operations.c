// Function to swap two integers
void swap(int *n1, int *n2) {

    int temp = *n1;
    *n1 = *n2, *n2 = temp;
}

// Function to get sum of digits of a number
int sum_of_digits(int num) {

    int digit_sum = 0;
    do {
        digit_sum += num % 10;
    } while (num /= 10);
    return digit_sum;
}

// Function to get reversed form of a number
int reversed_num(int num) {

    int rev_num = 0;
    do {
        rev_num = rev_num * 10 + (num % 10);
    } while (num /= 10);
    return rev_num;
}
