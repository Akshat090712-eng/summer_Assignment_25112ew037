#include <stdio.h>

int main()
{
    char str[100], longest[100];
    int i = 0, j = 0;
    int max = 0, len = 0, start = 0;

    printf("Enter a sentence: ");
    gets(str);

    while(1)
    {
        if(str[i] != ' ' && str[i] != '\0')
        {
            len++;
        }
        else
        {
            if(len > max)
            {
                max = len;

                for(j = 0; j < len; j++)
                    longest[j] = str[start + j];

                longest[len] = '\0';
            }

            len = 0;
            start = i + 1;
        }

        if(str[i] == '\0')
            break;

        i++;
    }

    printf("Longest Word = %s", longest);

    return 0;
}