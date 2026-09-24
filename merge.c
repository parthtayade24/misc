#include <stdio.h>

void break(int x[], int left, int right);
void merge(int x[], int left, int right, int mid);

int main(void)
{
    int x[8];
    int n = 8;
    for (int i=0; i<n; i++)
    {
        printf("n:");
        scanf("%i",&x[i]);
    }

    break(x, 0, 7);

    for (int i=0; i<n; i++)
    {
        printf("%i\n",x[i]);
    }
}
void break(int x[], int left, int right)
{
    if (left < right)
    {
         int mid = (left + right)/2 ;

            break(x, left, mid);
            break(x, mid+1, right);
            merge(x, left, mid, right);
    }
}
void merge(int x[], int left, int right)
{
    int i = left;
    int j = mid + 1;
    int k = left

    int temp[right + 1];

    while(i <= mid && j <= right)
    {
        if (x[i] <= x[j])
        {
            temp[k] = x[i];
            i++;
        }
        else
        {
            temp[k] = x[j];
            j++;
        }
        k++;
    }
    while (i <= mid)
    {
        temp[k] = x[i];
        i++;
        k++;
    }
    while (j <= right)
    {
        temp[k] = x[j];
        j++;
        k++;
    }

    for (int i=left; i<=right; i++)
    {
        x[i] = temp[i];
    }
}