#include <stdio.h>

int main()
{
    int num=5;

    if (num < 1)
        return 0;

    for (int i = 0; i <= num; ++i)
    {
        for (int j = i; j >= 1; --j)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
