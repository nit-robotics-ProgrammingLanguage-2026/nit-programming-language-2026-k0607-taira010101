#include <stdio.h>

int main(void)
{
    int n;
    int count = 0;
    if (scanf("%d", &n) != 1)
        return 0;
    if (n < 0)
    {
        printf("NG");
        return 0;
    }
    for (int i = 0; i <= 50; i++)
    {
        for (int j = 0; j <= 50; j++)
        {
            if (i != j && i + j == n)
                count++;
        }
    }
    printf("%d", count);
    return 0;
}
