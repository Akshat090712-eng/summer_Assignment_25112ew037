#include <stdio.h>

<<<<<<< HEAD
int palindrome(int n)
{
    int temp = n, rev = 0, digit;

    while (n > 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    if (temp == rev)
        return 1;
    else
        return 0;
}

int main()
{
    int num;
=======
int main()
{
    int num, original, reverse = 0, digit;
>>>>>>> 874b9903e4635b1815e0c8e7f68cee2f843c19dd

    printf("Enter a number: ");
    scanf("%d", &num);

<<<<<<< HEAD
    if (palindrome(num))
=======
    original = num;

    while(num > 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    if(original == reverse)
>>>>>>> 874b9903e4635b1815e0c8e7f68cee2f843c19dd
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}