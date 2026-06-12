#include <stdio.h>

<<<<<<< HEAD
void fibonacci(int n)
{
    int a = 0, b = 1, c, i;

    for (i = 1; i <= n; i++)
    {
=======
int main() {
    int n, a = 0, b = 1, c, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for(i = 1; i <= n; i++) {
>>>>>>> 874b9903e4635b1815e0c8e7f68cee2f843c19dd
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
<<<<<<< HEAD
}

int main()
{
    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    fibonacci(n);
=======
>>>>>>> 874b9903e4635b1815e0c8e7f68cee2f843c19dd

    return 0;
}