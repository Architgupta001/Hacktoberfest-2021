#include <stdio.h>

int main() {

    int n;
    printf("Enter the number of Fibonacci numbers (n >= 1): ");
    scanf("%d", &n);

    int first = 0, second = 1;
    printf("%d %d ", first, second);
    for (int i = 0; i < n - 2; i++) {

        int temp = first;
        first = second, second += temp;
        printf("%d ", second);
    }
    return 0;
}
