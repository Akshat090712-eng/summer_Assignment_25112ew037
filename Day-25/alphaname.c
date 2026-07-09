#include <stdio.h>

int main()
{
    char name[5][20], temp[20];
    int i, j, k;

    printf("Enter 5 names:\n");

    for(i = 0; i < 5; i++)
        gets(name[i]);

    for(i = 0; i < 4; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            k = 0;

            while(name[i][k] == name[j][k])
                k++;

            if(name[i][k] > name[j][k])
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    printf("Names in Alphabetical Order:\n");

    for(i = 0; i < 5; i++)
        printf("%s\n", name[i]);

    return 0;
}