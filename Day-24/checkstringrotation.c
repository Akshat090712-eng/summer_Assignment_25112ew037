#include <stdio.h>

int main()
{
    char str1[100], str2[100], temp[200];
    int i = 0, j = 0, len1 = 0, len2 = 0, found = 0;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    while(str1[len1] != '\0')
        len1++;

    while(str2[len2] != '\0')
        len2++;

    if(len1 != len2)
    {
        printf("Not Rotation");
        return 0;
    }

    for(i = 0; i < len1; i++)
        temp[i] = str1[i];

    for(i = 0; i < len1; i++)
        temp[len1 + i] = str1[i];

    temp[2 * len1] = '\0';

    for(i = 0; temp[i] != '\0'; i++)
    {
        for(j = 0; str2[j] != '\0'; j++)
        {
            if(temp[i + j] != str2[j])
                break;
        }

        if(str2[j] == '\0')
        {
            found = 1;
            break;
        }
    }

    if(found)
        printf("String is Rotation");
    else
        printf("String is Not Rotation");

    return 0;
}