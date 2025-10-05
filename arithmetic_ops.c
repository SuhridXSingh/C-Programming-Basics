#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two integer values separated by a space: ");
    scanf("%d %d", &num1, &num2);
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int integer_division = num1 / num2;
    int modulus = num1 % num2;
    printf("\n--- Results ---\n");
    printf("Addition:       %d + %d = %d\n", num1, num2, sum);
    printf("Subtraction:    %d - %d = %d\n", num1, num2, difference);
    printf("Multiplication: %d * %d = %d\n", num1, num2, product);
    printf("Division:       %d / %d = %d\n", num1, num2, integer_division);
    printf("Modulus:        %d %% %d = %d\n", num1, num2, modulus);
    getchar();
    return 0;
}
