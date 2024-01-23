#include <stdio.h>
int main()
{

    int n;
    int *p = &n;
    do
    {
        printf("entrer un nombre: ");
        scanf("%d", p);
    } while (n <= 0);
    
        printf("les diviseurs de %d est:   ", *p);

        for (int i = 1; i <= *p; i++)
        {

            if (*p % i == 0)
                printf("%d ", i);
        }
    
}