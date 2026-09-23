#include <stdio.h>

int main(void)
{
    int n = 7;
    int x[7];
    for (int i=0; i<n; i++)
    {
        printf("x:");
        scanf("%i",&x[i]);
    }

    for (int i=0; i<n-1; i++)
    {
        int min = i;
        {
            for (int j=i+1; j<n; j++)
            {
                if (x[j] < x[min])
                {
                    min = j;
                }
            }
            int temp = x[i];
            x[i] = x[min];
            x[min] = temp;
        }
        for (int i=0; i<n; i++)
        {
            printf("%i\n",x[i]);
        }
    }
}