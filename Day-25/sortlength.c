#include <stdio.h>

int main()
{
    char word[5][20], temp[20];
    int i, j, len1, len2;

    printf("Enter 5 words:\n");

    for(i = 0; i < 5; i++)
        gets(word[i]);

    for(i = 0; i < 4; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            len1 = 0;
            len2 = 0;

            while(word[i][len1] != '\0')
                len1++;

            while(word[j][len2] != '\0')
                len2++;

            if(len1 > len2)
            {
                strcpy(temp, word[i]);
                strcpy(word[i], word[j]);
                strcpy(word[j], temp);
            }
        }
    }

    printf("Words Sorted by Length:\n");

    for(i = 0; i < 5; i++)
        printf("%s\n", word[i]);

    return 0;
}