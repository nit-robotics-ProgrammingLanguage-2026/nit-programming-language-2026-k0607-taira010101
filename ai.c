#include <stdio.h>

int main(void)
{
    int n;
    int pairs = 0;
    if (scanf("%d", &n) != 1)
        return 0;
    if (n < 0)
    {
        printf("NG");
        return 0;
    }
    for (int first = 0; first <= 50; first++)
    {
        int second = n - first;
        if (second >= 0 && second <= 50 && first != second)
            pairs++;
    }
    printf("%d", pairs);
    return 0;
}
