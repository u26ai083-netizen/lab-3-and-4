#include <stdio.h>

int main() {
    int num, originalNum, remainder, digits = 0, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    
    originalNum = num;
    while (originalNum != 0) {
        digits++;
        originalNum /= 10;
    }

    originalNum = num;

    
    while (originalNum != 0) {
        remainder = originalNum % 10;

        
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= remainder;
        }

        sum += power;
        originalNum /= 10;
    }

    
    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    
}
