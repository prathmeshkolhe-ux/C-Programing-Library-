#include <stdio.h>
int main()
{
    int n, i, j, space;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        // Print spaces
        for(space = 1; space <= n - i; space++)
        {
            printf(" ");
        }
        // Print asterisks
        for(j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }
    return 0;
}
