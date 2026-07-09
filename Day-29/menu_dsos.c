#include <stdio.h>

int main()
{
    char str[100];
    int choice;
    int i, length = 0;

    printf("Enter a string: ");
    gets(str);

    printf("\n===== STRING MENU =====\n");
    printf("1. Find Length\n");
    printf("2. Display String\n");
    printf("3. Convert to Uppercase\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            while(str[length] != '\0')
                length++;

            printf("Length = %d", length);
            break;

        case 2:
            printf("String = %s", str);
            break;

        case 3:
            for(i = 0; str[i] != '\0'; i++)
            {
                if(str[i] >= 'a' && str[i] <= 'z')
                    str[i] = str[i] - 32;
            }

            printf("Uppercase String = %s", str);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}