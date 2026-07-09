#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i, j, count1 = 0, count2 = 0;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    while(str1[count1] != '\0')
    {
        count1++;
    }

    while(str2[count2] != '\0')
    {
        count2++;
    }

    if(count1 != count2)
    {
        printf("Not Anagram");
        return 0;
    }

    for(i = 0; i < count1; i++)
    {
        int found = 0;

        for(j = 0; j < count2; j++)
        {
            if(str1[i] == str2[j])
            {
                str2[j] = '*';
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram Strings");

    return 0;
}