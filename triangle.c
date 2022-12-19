// triangle
#include <stdlib.h>
#include <stdio.h>

int n,y,x;

int main()
{
    printf("kac satirli olsn sn. masterim?\n");
    scanf("%d", &n);
    
    for(y=1 ; y<=n ; y++) //y eksenini insa ediok
    {

        for(x=1 ; x<=n-y ; x++) // boslugu bulurken satirdan sutunu cikarioz ki o kadar space olsn
        {
            printf(" ");
        }
        for(x=1 ; x<=(y*2-1) ; x++) // xleri koyuok
        {
            printf("*");
        }

        printf("\n");
    }
}
