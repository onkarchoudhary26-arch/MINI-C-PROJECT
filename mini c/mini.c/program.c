#include <stdio.h>

int main()
{
    float principal;
    float rate;
    float balance;
    int years;
    int i;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter number of years: ");
    scanf("%d", &years);

    balance = principal;

    for (i = 1; i <= years; i++)
    {
        balance = balance + (balance * rate / 100);
        printf("Balance after year %d = %.2f\n", i, balance);
    }

    printf("\nFinal Balance = %.2f\n", balance);

    return 0;
}
