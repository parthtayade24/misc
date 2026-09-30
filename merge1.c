#include <stdio.h>

int main(void)
{
    int n = 8;
    int i;
    int x[8];
    for (int i=0; i<n; i++)
    {
        printf("number:");
        scanf("\n %i",&x[i]);
    }

    mergesort(x, 0, 7);
}

void mergesort(int arr[], int left, int right)
{
    int mid = (left + right)/2;

    mergesort(x, left, mid);
    mergesort(x, mid + 1, right);

    merge(x, left, right, mid);

}

void merge(int arr1[], int left, int right, int mid)
{
    int i = left;
    int j = mid + 1;

}