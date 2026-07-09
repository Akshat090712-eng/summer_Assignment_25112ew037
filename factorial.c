#include <stdio.h>

<<<<<<< HEAD
int factorial(int n)
{
    int fact = 1, i;

    for(i = 1; i <= n; i++)
        fact = fact * i;

    return fact;
}

int main()
{
    int n;
=======
int main()
{
    int n, i;
    long long factorial = 1;
>>>>>>> a7d84b4f9b8c6a79af0273f10a4daa5ed2b9d937

    printf("Enter a number: ");
    scanf("%d", &n);

<<<<<<< HEAD
    printf("Factorial = %d", factorial(n));
=======
    for(i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    printf("Factorial of %d = %lld", n, factorial);
>>>>>>> a7d84b4f9b8c6a79af0273f10a4daa5ed2b9d937

    return 0;
}