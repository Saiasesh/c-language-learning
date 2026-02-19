#include <stdio.h>

void bubblesort(int *a, int n);
void printArray(int *a, int n);
void swap(int *x, int *y);

int main()
{
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", (arr + i));   // pointer input
    }

    printf("Array before sorting:\n");
    printArray(arr, n);

    bubblesort(arr, n);

    printf("\nArray after sorting:\n");
    printArray(arr, n);

    return 0;
}

void bubblesort(int *a, int n)
{
    int i, j;

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(*(a + j) > *(a + j + 1))
            {
                swap((a + j), (a + j + 1));
            }
        }
    }
}

void printArray(int *a, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d ", *(a + i));   // pointer printing
    }
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
