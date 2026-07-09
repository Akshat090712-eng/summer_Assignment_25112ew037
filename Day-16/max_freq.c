#include <stdio.h>

int main()
{
    int arr[100], n, i, j;
    int count, maxCount = 0, element;

    printf("Enter size: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        if(count > maxCount)
        {
            maxCount = count;
            element = arr[i];
        }
    }

    printf("Element = %d\n", element);
    printf("Frequency = %d", maxCount);

    return 0;
}