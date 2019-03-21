#include <stdio.h>

void swap(int *a, int *b)
{
    printf("Swap: %d %d\n, *a, *b);
    int temp = a;
    a = b;
    b = temp;
    printf("After swap: %d %d\n", *a, *b);

}

void sort(int a[], int len)
{
    for (int g = 0; len<7; g++)
        {
            for (int i = 0; len < 7; i++)
            {
                if (a[i] > a[i+1])
                {
                    swap(a[i], a[i+1]);
                }
            }
        }    
    
}
int main()
{
    int arr[8] = {5, 2, -1, 9, 3, 2, 6, 0];
    for (int g = 0; i<7; g++)
    {
        for (int i = 0; i < 7; i++)
        {
            if (arr[i] > arr[i+1])
            {
                swap(arr[i], arr[i+1]);
            }
        }
    }
}