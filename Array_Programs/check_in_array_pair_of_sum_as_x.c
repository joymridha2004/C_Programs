#include <stdio.h>
int main()
{
    int arr_length;
    printf("Enter array length: ");
    scanf("%d", &arr_length);
    int arr[arr_length];
    for (int i = 0; i < arr_length; i++)
    {
        printf("Enter integer: array [%d]: ", i);
        scanf("%d", &arr[i]);
    }
    int x;
    printf("Enter x : ");
    scanf("%d", &x);
    for (int i = 0; i < arr_length; i++)
    {
        for (int j = i; j < arr_length; j++)
        {
            if (i != j && arr[i] + arr[j] == x)
            {
                printf("Yes");
                return 0;
            }
        }
    }
    printf("No");
    return 0;
}