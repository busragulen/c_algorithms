// x
#include <stdio.h>

int main()
{
    int i, j, value;
    int build;

    printf("value: ");
    scanf("%d", &value);

    build  = value * 2 - 1;

    for(i=1; i<=build; i++)
    {
        for(j=1; j<=build; j++)
        {
            if(j==i || (j==build-i + 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
