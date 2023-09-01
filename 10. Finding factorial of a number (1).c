#include <stdio.h>

int main() {
    int i,num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int factorial = 1;

        for (i = 1; i <= num; i++) {
            factorial *= i;
        }

        printf("Factorial of %d is %d\n", num, factorial);
    }

    return 0;
}

