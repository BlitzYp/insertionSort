#include <stdio.h>

void selectionSort(int *list, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (list[j] < list[min])
            {
                min = j;
            }
        }
        int copy = list[min];
        list[min] = list[i];
        list[i] = copy;
    }
}

int main()
{
    int list[] = {67, 453, 234, 12};
    size_t size = sizeof(list) / sizeof(list[0]);
    selectionSort(list, size);
    int i = 0;
    while (i < size)
    {
        printf("%d\n", list[i]);
        i++;
    }
}