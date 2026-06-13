#include <stdio.h>

<<<<<<< HEAD
int armstrong(int n)
{
    int temp = n, sum = 0, digit;

    while (n > 0)
    {
        digit = n % 10;
        sum = sum + (digit * digit * digit);
        n = n / 10;
    }

    if (sum == temp)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (armstrong(num))
=======
int main() {
    int n, temp, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp > 0) {
        digit = temp % 10;
        sum = sum + (digit * digit * digit);
        temp = temp / 10;
    }

    if(sum == n)
>>>>>>> 874b9903e4635b1815e0c8e7f68cee2f843c19dd
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}