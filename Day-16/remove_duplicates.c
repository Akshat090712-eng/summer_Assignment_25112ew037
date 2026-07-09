#include <stdio.h>

int main()
{
    int arr[100], n, i, j, flag;

    printf("Enter size: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array after removing duplicates:\n");

    for(i = 0; i < n; i++)
    {
        flag = 0;

        for(j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}