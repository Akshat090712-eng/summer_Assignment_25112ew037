#include <stdio.h>

int main()
{
    int id[5], salary[5];
    char name[5][20];
    int i, n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &id[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Salary: ");
        scanf("%d", &salary[i]);
    }

    printf("\n----- Employee Details -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nID     : %d", id[i]);
        printf("\nName   : %s", name[i]);
        printf("\nSalary : %d\n", salary[i]);
    }

    return 0;
}