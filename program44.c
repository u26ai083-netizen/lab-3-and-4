#include <stdio.h>

int main()
{
    int unit;
    float amount;

    printf("Enter units consumed: ");
    scanf("%d", &unit);

    if(unit <= 200)
    {
        amount = unit * 0.50;
    }
    else if(unit <= 400)
    {
        amount = 100 + (unit - 200) * 0.65;
    }
    else if(unit <= 600)
    {
        amount = 230 + (unit - 400) * 0.80;
    }
    else
    {
        amount = 425 + (unit - 600) * 1.25;
    }

    printf("Amount to be paid = Rs. %.2f\n", amount);

    return 0;
}
























      
