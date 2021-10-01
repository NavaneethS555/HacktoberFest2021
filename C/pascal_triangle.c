#include <stdio.h>

int main()
{
    int rows, i = 0, j = 0;
    int a = 1, b = 1;

    printf("Enter the number of rows:\n");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++)
    {
        for (a = 1; a <= rows - i; a++)
        {
            printf(" ");
        }

        for (j = 0; j <= i; j++)
        {
            if (i == 0 || j == 0)
            {
                b = 1;
            }

            else
            {
                b = b * (i - j + 1) / j;
            }

            printf("%4d", b);
        }

        printf("\n\n");
    }

    return 0;
}